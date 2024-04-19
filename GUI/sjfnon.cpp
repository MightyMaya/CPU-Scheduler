#include "sjfnon.h"
#include "ui_sjfnon.h"
#include <map>

using namespace std;
void add_time();
map<int, vector<process>> m;
int burstTime2;
int QuantumTime2;
int processID2;
double avgwaitt2;
double avgturnt2;
int sumwaitt2=0;
int sumturnt2=0;
double nn2=0;
class ComparisonClass {
public:
    bool operator() (process p1, process p2) {
        return p1.getBurst() > p2.getBurst();
    }
};

priority_queue <process, vector<process>, ComparisonClass> readyQueue2;
vector<process> ganttChart2;
int TIMEEEEE = 0;
QTime startT2;
bool isRunning2 = false; // Flag to control the execution of RoundRobin
void SJFNon();

sjfnon::sjfnon(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sjfnon)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    startT2 = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &sjfnon::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &sjfnon::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &sjfnon::updateAvgTurnt2);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(SJFNon);


}


void add_time(){
    while(1){
    qDebug()<<"add_time";
    for (auto processes : m[TIMEEEEE]){
        readyQueue2.push(processes);
        qDebug()<<processes.getID();
        qDebug()<<TIMEEEEE;
    }
    TIMEEEEE++;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void sjfnon::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 1000, 120);
    for (const auto& p : ganttChart2) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getBurst()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getBurst());
        painter.drawText(x + 5, y + (height * 2) / 3 - 7, execTimeText);
        QString remTimeText = QString("RemT: %1").arg(0);
        painter.drawText(x + 2, y + (height ) -15, remTimeText);
        x += p.getBurst()*30 +10;
        if(x>770 && y == 300){
            y = 420;
            x = 30;
            painter.setBrush(Qt::white);
            painter.drawRect(10, 410, 1000, 120);
        }
        else if(x>770 && y == 420){
            y = 300;
            x = 30;
            painter.setBrush(Qt::white);
            painter.drawRect(10, 290, 1000, 120);
        }
    }
}

void sjfnon::updateChart() {

    update(); // Update the UI

}

void SJFNon() {
    isRunning2 = true; // Set the flag to indicate RoundRobin is running
    QtConcurrent::run(add_time);
    //std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    while (isRunning2) { // Loop as long as the flag is true
        int currentTime = 0;
        while (!readyQueue2.empty()) {
            qDebug()<<"running";
            QTime startTime = QTime::currentTime();
            int execTime = 0;
            process currentProcess = readyQueue2.top();
            readyQueue2.pop();
            execTime = currentProcess.getBurst();
            while(QTime::currentTime() < startTime.addSecs(execTime)){
                qDebug()<<currentProcess.getID();
            };
            currentTime += execTime;
            currentProcess.setCurrentTime(currentTime);
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
            sumwaitt2 += currentProcess.getWaitingTime();
            sumturnt2 += currentProcess.getTurnaroundTime();
            nn2++;
            ganttChart2.push_back(currentProcess);

        }

    }

}


sjfnon::~sjfnon()

{

    delete ui;

}

void sjfnon::on_close_clicked()

{

    close();

    isRunning2 = false;

}



void sjfnon::on_add_2_clicked()

{

    burstTime2 = ui->burst_2->value();
    processID2++;
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT2);
    readyQueue2.push(process(processID2, arrivalTime, burstTime2));
    qDebug()<<"readyQueue updated";

}

void sjfnon::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

void sjfnon::updateAvgTurnt() {
    if(nn2>0)ui->avgturnt->setText(QString::number(sumturnt2 / nn2));
}

void sjfnon::updateAvgTurnt2() {
    if(nn2>0)ui->avgturnt_2->setText(QString::number(sumwaitt2 / nn2));
}

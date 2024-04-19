#include "prinon.h"
#include "ui_prinon.h"
#include <map>

using namespace std;
map<int, vector<process>> m5;
int burstTime5;
int QuantumTime5;
int processID5;
int priority5;
double avgwaitt5;
double avgturnt5;
int sumwaitt5=0;
int sumturnt5=0;
double nn5=0;
class ComparisonClass5 {
public:
    bool operator() (process p1, process p2) {
        return p1.getPriority() > p2.getPriority();
    }
};

priority_queue <process, vector<process>, ComparisonClass5> readyQueue5;
vector<process> ganttChart5;
int TIMEEEEE5 = 0;
QTime startT5;
bool isRunning5 = false; // Flag to control the execution of RoundRobin
void PRINon();
void add_time5();
prinon::prinon(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::prinon)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    startT5 = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &prinon::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &prinon::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &prinon::updateAvgTurnt2);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(PRINon);
    QtConcurrent::run(add_time5);

}


void add_time5(){
    while(1){
        for (auto processes : m5[TIMEEEEE5]){
            readyQueue5.push(processes);
        }
        TIMEEEEE5++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void prinon::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart5) {
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
            painter.drawRect(10, 410, 780, 120);
        }
        else if(x>770 && y == 420){
            y = 300;
            x = 30;
            painter.setBrush(Qt::white);
            painter.drawRect(10, 290, 780, 120);
        }
    }
}

void prinon::updateChart() {

    update(); // Update the UI

}

void PRINon() {
    isRunning5 = true; // Set the flag to indicate RoundRobin is running
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    while (isRunning5) { // Loop as long as the flag is true
        int currentTime = 0;
        while (!readyQueue5.empty()) {
            qDebug()<<"running";
            QTime startTime = QTime::currentTime();
            int execTime = 0;
            process currentProcess = readyQueue5.top();
            readyQueue5.pop();
            execTime = currentProcess.getBurst();
            while(QTime::currentTime() < startTime.addSecs(execTime)){
                qDebug()<<currentProcess.getID();
            };
            currentTime += execTime;
            currentProcess.setCurrentTime(currentTime);
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
            sumwaitt5 += currentProcess.getWaitingTime();
            sumturnt5 += currentProcess.getTurnaroundTime();
            nn5++;
            ganttChart5.push_back(currentProcess);

        }

    }

}


prinon::~prinon()

{

    delete ui;

}

void prinon::on_close_clicked()

{

    close();

    isRunning5 = false;

}



void prinon::on_add_4_clicked()

{

    burstTime5 = ui->burst_44->value();
    priority5 = ui->spinBox->value();
    processID5++;
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT5);
    readyQueue5.push(process(processID5, arrivalTime, burstTime5,priority5));
    qDebug()<<"readyQueue updated";


}

void prinon::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

void prinon::updateAvgTurnt() {
    if(nn5>0)ui->avgturnt->setText(QString::number(sumturnt5 / nn5));
}

void prinon::updateAvgTurnt2() {
    if(nn5>0)ui->avgturnt_2->setText(QString::number(sumwaitt5 / nn5));
}

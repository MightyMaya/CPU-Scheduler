#include "sjf.h"
#include "ui_sjf.h"
#include <map>

using namespace std;
void add_time3();
map<int, vector<process>> m3;
int burstTime3;
int QuantumTime3;
int processID3;
double avgwaitt3;
double avgturnt3;
int sumwaitt3=0;
int sumturnt3=0;
double nn3=0;
class ComparisonClass3 {
public:
    bool operator() (process p1, process p2) {
        return p1.getRemainingBurst() > p2.getRemainingBurst();
    }
};

priority_queue <process, vector<process>, ComparisonClass3> readyQueue3;
vector<process> ganttChart3;
int TIMEEEEE3 = 0;
QTime startT3;
bool isRunning3 = false; // Flag to control the execution of RoundRobin
void SJF();

sjf::sjf(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sjf)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    startT3 = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &sjf::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &sjf::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &sjf::updateAvgTurnt2);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(SJF);
    QtConcurrent::run(add_time3);

}


void add_time3(){
    while(1){
        qDebug()<<"add_time";
        for (auto processes : m3[TIMEEEEE3]){
            readyQueue3.push(processes);
            qDebug()<<processes.getID();
            qDebug()<<TIMEEEEE3;
        }
        TIMEEEEE3++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void sjf::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart3) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, 1*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("RemT: %1").arg(p.getRemainingBurst());
        painter.drawText(x + 2, y + (height * 2) / 3, execTimeText);
        x += 1*30 +10;
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

void sjf::updateChart() {

    update(); // Update the UI

}

void SJF() {
    isRunning3 = true; // Set the flag to indicate RoundRobin is running
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    while (isRunning3) { // Loop as long as the flag is true
        int currentTime = 0;
        while (!readyQueue3.empty()) {
            QTime startTime = QTime::currentTime();
            process currentProcess = readyQueue3.top();
            readyQueue3.pop();
            int execTime = currentProcess.getRemainingBurst();
            //currentProcess.setexecTime(execTime);
            while (QTime::currentTime() < startTime.addSecs(1)) {}
            currentTime += 1;
            currentProcess.setDoneBurst(execTime + currentProcess.getDoneBurst());
            currentProcess.setRemainingBurst(execTime - 1);
            //currentProcess.setexecTime(execTime);
            if (currentProcess.getRemainingBurst() > 0) {
                readyQueue3.push(currentProcess);
            } else {
                currentProcess.calcProcessTurnaroundTime(currentTime);
                currentProcess.calcProcessWaitingTime(currentTime);
                sumwaitt3 += currentProcess.getWaitingTime();
                sumturnt3 += currentProcess.getTurnaroundTime();
                nn3++;
                qDebug()<<"waitt "<<sumwaitt3;
                qDebug()<<"turnn "<<sumturnt3;
                qDebug()<<"nn "<<nn3;
            }
            ganttChart3.push_back(currentProcess);
        }
    }
}


sjf::~sjf()

{
    delete ui;
}

void sjf::on_close_clicked()

{
    close();
    isRunning3 = false;
}



void sjf::on_add_3_clicked()

{
    burstTime3 = ui->burst_3->value();
    processID3++;
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT3);
    readyQueue3.push(process(processID3, arrivalTime, burstTime3));
    qDebug()<<"readyQueue updated";

}

void sjf::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}


void sjf::updateAvgTurnt() {
    if(nn3>0) ui->avgturnt->setText(QString::number(sumturnt3 / nn3));
}

void sjf::updateAvgTurnt2() {
    if(nn3>0) ui->avgturnt_2->setText(QString::number(sumwaitt3 / nn3));
}

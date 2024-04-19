#include "fcfs.h"
#include "ui_fcfs.h"
#include <QPainter>
#include<QThread>
#include<vector>
#include<algorithm>
#include<chrono>
#include <thread>
#include "fcfs.h"
using namespace std;


bool isRunning1 = false; // Flag to control the execution of RoundRobin
vector<process> processes1;
vector<process> ganttChart1;
QTime startT1;
QTimer *timer1;
int processID1{0};
double nn1;
double avgwaitt1;
double avgturnt1;
int sumwaitt1=0;
int sumturnt1=0;



fcfs::fcfs(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fcfs)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    startT1 = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &fcfs::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &fcfs::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &fcfs::updateAvgTurnt2);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(firstComeFirstServed);

}


void fcfs::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart1) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getexecTime()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getexecTime());
        painter.drawText(x + 5, y + (height * 2) / 3 - 7, execTimeText);
        QString remTimeText = QString("RemT: %1").arg(p.getRemainingBurst());
        painter.drawText(x + 2, y + (height ) -15, remTimeText);
        x += p.getexecTime()*30 +10;
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
void fcfs::updateChart() {
    update(); // Update the UI
}



fcfs::~fcfs()
{
    delete ui;
}

void fcfs::on_pushButton_clicked()
{
    processID1++;

    int burstTime = ui->spinBox->value();
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT1);
    processes1.push_back(process(processID1,arrivalTime,burstTime));
}
void fcfs::updateAvgTurnt() {
    if(nn1>0)ui->avgturnt->setText(QString::number(sumturnt1 / nn1));
}

void fcfs::updateAvgTurnt2() {
    if(nn1>0)ui->avgturnt_2->setText(QString::number(sumwaitt1 / nn1));
}

void firstComeFirstServed() {

    isRunning1 = true; // Set the flag to indicate RoundRobin is running
    while (isRunning1) { // Loop as long as the flag is true
        int currentTime = 0;

        while (!processes1.empty()) {
            QTime startTime = QTime::currentTime();
            process currentProcess = processes1[0];
            processes1.erase(processes1.begin());
            if(currentProcess.getArrival()>currentTime){
                processes1.insert(processes1.begin(),currentProcess);
                continue;
            }
            int execTime = currentProcess.getBurst();

            currentProcess.setexecTime(execTime);
            while (QTime::currentTime() < startTime.addSecs(execTime)) {
                currentProcess.setRemainingBurst(0);
            }
            currentTime += execTime;
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
            sumwaitt1 += currentProcess.getWaitingTime();
            sumturnt1 += currentProcess.getTurnaroundTime();
            nn1++;
            ganttChart1.push_back(currentProcess);
        }
        this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void fcfs::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

#include "rr.h"
#include "ui_rr.h"

using namespace std;

bool isRunning = false; // Flag to control the execution of RoundRobin
 int burstTime;
 int QuantumTime=1;
 int processID;
 double avgwaitt;
 double avgturnt;
 int sumwaitt=0;
 int sumturnt=0;
 double nn=0;
 queue<process> readyQueue;
 vector<process> ganttChart;
 QTime startT;

void RoundRobin();

RR::RR(QWidget *parent) : QDialog(parent), ui(new Ui::RR) {
    ui->setupUi(this);
    timer = new QTimer(this);
    startT = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &RR::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &RR::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &RR::updateAvgTurnt2);
    ui->timeQuantum->setValue(1);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(RoundRobin);
}

RR::~RR() {
    delete ui;
    delete timer; // Clean up the timer object
}

void RR::on_close_clicked() {
    isRunning = false; // Set the flag to stop RoundRobin
    close();
}

void RR::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getexecTime()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getexecTime());
        painter.drawText(x + 5, y + (height * 2) / 3, execTimeText);
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

void RR::updateAvgTurnt() {
    if(nn>0)ui->avgturnt->setText(QString::number(sumturnt / nn));
}

void RR::updateAvgTurnt2() {
    if(nn>0)ui->avgturnt_2->setText(QString::number(sumwaitt / nn));
}

void RR::updateChart() {
    update(); // Update the UI
}

void RR::on_add_clicked() {
    burstTime = ui->BurstTime->value();
    QuantumTime = ui->timeQuantum->value();
    if(QuantumTime == 0)QuantumTime =1;
    processID++;
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT);
    readyQueue.push(process(processID, arrivalTime, burstTime));
}

void RoundRobin() {
    isRunning = true; // Set the flag to indicate RoundRobin is running
    while (isRunning) { // Loop as long as the flag is true
        int currentTime = 0;

        while (!readyQueue.empty()) {
            QTime startTime = QTime::currentTime();
            process currentProcess = readyQueue.front();
            readyQueue.pop();
            if(currentProcess.getArrival()>currentTime){
                readyQueue.push(currentProcess);
                continue;
            }
            int execTime = min(QuantumTime, currentProcess.getBurst() - currentProcess.getDoneBurst());
            currentProcess.setexecTime(execTime);
            while (QTime::currentTime() < startTime.addSecs(execTime)) {}
            currentTime += execTime;
            currentProcess.setDoneBurst(execTime + currentProcess.getDoneBurst());
            if ((currentProcess.getBurst() - currentProcess.getDoneBurst()) > 0) {
                readyQueue.push(currentProcess);
            }
            else{
                currentProcess.calcProcessTurnaroundTime(currentTime);
                currentProcess.calcProcessWaitingTime(currentTime);
                sumwaitt += currentProcess.getWaitingTime();
                sumturnt += currentProcess.getTurnaroundTime();
                nn++;
            }
            ganttChart.push_back(currentProcess);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void RR::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}





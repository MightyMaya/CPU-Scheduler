#include "rr.h"
#include "ui_rr.h"

using namespace std;

int burstTime;
int QuantumTime;
int processID;
queue<process> readyQueue;
vector<process> ganttChart;
QTime startT;

RR::RR(QWidget *parent) : QDialog(parent), ui(new Ui::RR) {
    ui->setupUi(this);
    timer = new QTimer(this);
    startT = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &RR::updateChart); // Connect timer timeout signal to updateChart slot
    connect(this, &RR::updateChartNeeded, this, &RR::updateChart); // Connect updateChartNeeded signal to updateChart slot
    timer->start(1000); // Start the timer with 1-second interval
    RoundRobin();
}

void RR::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 60;
    int y = 400;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    for (const auto& p : ganttChart) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getexecTime()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getexecTime());
        painter.drawText(x + 5, y + (height * 2) / 3, execTimeText);
        x += p.getexecTime()*30 +10;
    }
}

RR::~RR() {
    delete ui;
    delete timer; // Clean up the timer object
}

void RR::on_close_clicked() {
    close();
}

void RR::on_add_clicked() {
    burstTime = ui->BurstTime->value();
    QuantumTime = ui->timeQuantum->value();
    processID = ui->timeQuantum_2->value();
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT);
    readyQueue.push(process(processID, arrivalTime, burstTime));
    RoundRobin();
    emit updateChartNeeded(); // Emit the updateChartNeeded signal to trigger UI update
}

void RR::updateChart() {
    RoundRobin();
    update(); // Update the UI
}

void RR::RoundRobin() {
    bool needUpdate = false; // Flag to indicate if UI needs to be updated
    int currentTime = 0;
    while (!readyQueue.empty()) {
        QTime startTime = QTime::currentTime();
        process currentProcess = readyQueue.front();
        readyQueue.pop();
        int execTime = min(QuantumTime, currentProcess.getBurst() - currentProcess.getDoneBurst());
        currentProcess.setexecTime(execTime);
        while(QTime::currentTime() < startTime.addSecs(execTime)){};
        currentTime += execTime;
        currentProcess.setDoneBurst(execTime + currentProcess.getDoneBurst());
        if ((currentProcess.getBurst() - currentProcess.getDoneBurst()) > 0) {
            readyQueue.push(currentProcess);
        } else {
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
        }
        needUpdate = true;
        ganttChart.push_back(currentProcess);
    }

    if (needUpdate) {
        emit updateChartNeeded(); // Emit signal to indicate that UI update is needed
    }
}

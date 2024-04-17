// rr.cpp
#include "rr.h"
#include "ui_rr.h"
#include <QMutex>

// Define process class if not already defined

int burstTime;
int QuantumTime;
int processID;
std::queue<process> readyQueue;
std::vector<process> ganttChart;
QTime startT;
QMutex mutex;

RR::RR(QWidget *parent) : QDialog(parent), ui(new Ui::RR) {
    ui->setupUi(this);
    timer = new QTimer(this);
    startT = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &RR::updateChart);
    timer->start(1000);

    worker = new RoundRobinWorker(this);
    connect(worker, &RoundRobinWorker::finished, this, &RR::onWorkerFinished);
    worker->start();
}

RR::~RR() {
    delete ui;
    delete timer;
    delete worker; // Delete the worker object
}

void RR::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 60;
    int y = 400;
    int height = 100;
    QFont font = painter.font();
    font.setPointSize(5);
    painter.setFont(font);

    for (const auto& p : ganttChart) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150);
        painter.setBrush(color);
        painter.drawRect(x, y, p.getexecTime() * 30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getexecTime());
        painter.drawText(x + 5, y + (height * 2) / 3, execTimeText);
        x += p.getexecTime() * 30 + 10;
    }
}

void RR::on_close_clicked() {
    close();
}

void RR::on_add_clicked() {
    qDebug() << "Add button clicked"; // Add this line for debugging
    burstTime = ui->BurstTime->value();
    QuantumTime = ui->timeQuantum->value();
    processID = ui->timeQuantum_2->value();
    QTime currentTime = QTime::currentTime();
    int arrivalTime = startT.secsTo(currentTime); // Corrected arrival time calculation
    mutex.lock();
    readyQueue.push(process(processID, arrivalTime, burstTime));
    mutex.unlock();
}


void RR::onWorkerFinished() {
    updateChart();
    connect(worker, &RoundRobinWorker::updateChartNeeded, this, &RR::updateChart);
}

RoundRobinWorker::RoundRobinWorker(RR* parent) : QThread(parent), parent(parent) {}

RoundRobinWorker::~RoundRobinWorker() {
    // Perform cleanup if needed
}

void RR::updateChart() {
    qDebug() << "Updating chart"; // Add this line for debugging
    update(); // Update the UI
}

void RoundRobinWorker::run() {
    while (!readyQueue.empty()) {
        qDebug() << "readyQueue not empty"; // Add this line for debugging
        mutex.lock();
        process currentProcess = readyQueue.front();
        readyQueue.pop();
        mutex.unlock();
        int execTime = std::min(QuantumTime, currentProcess.getBurst() - currentProcess.getDoneBurst());
        currentProcess.setexecTime(execTime);
        int currentTime = currentProcess.getDoneBurst() + execTime;
        currentProcess.setDoneBurst(currentTime);
        mutex.lock();
        ganttChart.push_back(currentProcess);
        mutex.unlock();
        emit processCompleted();
        emit updateChartNeeded(); // Emit signal for updating the chart
        if ((currentProcess.getBurst() - currentProcess.getDoneBurst()) > 0) {
            mutex.lock();
            readyQueue.push(currentProcess);
            mutex.unlock();
        } else {
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
        }
    }
}


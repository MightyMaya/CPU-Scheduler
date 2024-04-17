#include "sjfnon.h"
#include "ui_sjfnon.h"

using namespace std;

extern int burstTime;
extern int QuantumTime;
extern int processID;
extern queue<process> readyQueue;
extern vector<process> ganttChart;
extern QTime startT;

sjfnon::sjfnon(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sjfnon)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    startT = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &sjfnon::updateChart); // Connect timer timeout signal to updateChart slot
    connect(this, &sjfnon::updateChartNeeded, this, &sjfnon::updateChart); // Connect updateChartNeeded signal to updateChart slot
    timer->start(1000); // Start the timer with 1-second interval
    SJFNon();
}

void sjfnon::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 200;
    int y = 200;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    for (const auto& p : ganttChart) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getBurst()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getBurst());
        painter.drawText(x + 5, y + (height * 2) / 3, execTimeText);
        x += p.getBurst()*30 +10;
    }
}

void sjfnon::updateChart() {
    SJFNon();
    update(); // Update the UI
}

void sjfnon::SJFNon() {
    bool needUpdate = false; // Flag to indicate if UI needs to be updated
    int currentTime = 0;
    vector<process> sorting;
    while (!readyQueue.empty()) {
        QTime startTime = QTime::currentTime();
        int execTime = 0;
        // transfer conents of queue to a vector
        while (!readyQueue.empty()) {
            sorting.push_back(readyQueue.front());
            readyQueue.pop();
        }
        // sort the vector using a custom sort
        sort(sorting.begin(), sorting.end(), []( process& p1, process& p2) {
            return p1.compareProcesses(p2);
        });


        // Transfer sorted elements back to the queue
        for (const auto& elem : sorting) {
            readyQueue.push(elem);
        }

        while (!readyQueue.empty()) {
            process currentProcess = readyQueue.front();
            readyQueue.pop();
            execTime = currentProcess.getBurst();
            currentProcess.setDoneBurst(execTime);
            while(QTime::currentTime() < startTime.addSecs(execTime)){};
            currentTime += execTime;
            currentProcess.setCurrentTime(currentTime);

            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);

            ganttChart.push_back(currentProcess);

            if (readyQueue.size() == 1){
                process currentProcess = readyQueue.front();
                readyQueue.pop();
                execTime = currentProcess.getBurst();
                currentProcess.setDoneBurst(execTime);
                currentTime += execTime;
                currentProcess.setCurrentTime(currentTime);

                currentProcess.calcProcessTurnaroundTime(currentTime);
                currentProcess.calcProcessWaitingTime(currentTime);

                ganttChart.push_back(currentProcess);
            }
            else {
                //remove the first process from the vector
                sorting.erase(sorting.begin());
                //update values of current time for each process
                for (auto& process : sorting) {
                    process.setCurrentTime(currentTime);
                }
                //resort the vector
                sort(sorting.begin(), sorting.end(), []( process& p1, process& p2) {
                    return p1.compareProcesses(p2);
                });

                while (!readyQueue.empty()) {
                    readyQueue.pop();
                }
                // Transfer sorted elements back to the queue
                for (const auto& elem : sorting) {
                    readyQueue.push(elem);
                }

            }

        }
    }

    if (needUpdate) {
        emit updateChartNeeded(); // Emit signal to indicate that UI update is needed
    }
}

sjfnon::~sjfnon()
{
    delete ui;
}

void sjfnon::on_close_clicked()
{
    close();
}


void sjfnon::on_add_clicked()
{
    burstTime = ui->burst->value();
    processID = ui->ID->value();
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT);
    readyQueue.push(process(processID, arrivalTime, burstTime));
    SJFNon();
    emit updateChartNeeded(); // Emit the updateChartNeeded signal to trigger UI update
}


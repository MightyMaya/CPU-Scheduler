#include "sjfnon.h"
#include "ui_sjfnon.h"

using namespace std;

 int burstTime2;
 int QuantumTime2;
 int processID2;
 queue<process> readyQueue2;
 vector<process> ganttChart2;
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
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(SJFNon);
}



void sjfnon::paintEvent(QPaintEvent *event) {
    qDebug()<<"painting";
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart2) {
        QColor color = QColor::fromHsl((p.getID() * 30) % 360, 255, 150); // Adjust saturation and lightness as needed
        painter.setBrush(color);
        painter.drawRect(x, y, p.getBurst()*30, height);
        QString pidText = QString("PID: %1").arg(p.getID());
        painter.drawText(x + 5, y + height / 3, pidText);
        QString execTimeText = QString("ExcT: %1").arg(p.getBurst());
        painter.drawText(x + 5, y + (height * 2) / 3, execTimeText);
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
void sjfnon::updateChart() {
    update(); // Update the UI
}

void SJFNon() {
    int currentTime = 0;
    vector<process> sorting;
    isRunning2 = true; // Set the flag to indicate RoundRobin is running
    while (isRunning2) { // Loop as long as the flag is true
        while (!readyQueue2.empty()) {
            qDebug()<<"running";
            QTime startTime = QTime::currentTime();
            int execTime = 0;
            // transfer conents of queue to a vector
            while (!readyQueue2.empty()) {
                sorting.push_back(readyQueue2.front());
                readyQueue2.pop();
            }
            // sort the vector using a custom sort
            sort(sorting.begin(), sorting.end(), []( process& p1, process& p2) {
                return p1.compareProcesses(p2);
            });


            // Transfer sorted elements back to the queue
            for (const auto& elem : sorting) {
                readyQueue2.push(elem);
            }

            while (!readyQueue2.empty()) {
                process currentProcess = readyQueue2.front();
                readyQueue2.pop();

                execTime = currentProcess.getBurst();
                currentProcess.setDoneBurst(execTime);
                while(QTime::currentTime() < startTime.addSecs(execTime)){};
                currentTime += execTime;
                currentProcess.setCurrentTime(currentTime);

                currentProcess.calcProcessTurnaroundTime(currentTime);
                currentProcess.calcProcessWaitingTime(currentTime);

                if (readyQueue2.size() == 1){
                    process currentProcess = readyQueue2.front();
                    readyQueue2.pop();
                    execTime = currentProcess.getBurst();
                    currentProcess.setDoneBurst(execTime);
                    currentTime += execTime;
                    currentProcess.setCurrentTime(currentTime);

                    currentProcess.calcProcessTurnaroundTime(currentTime);
                    currentProcess.calcProcessWaitingTime(currentTime);
                    sorting.erase(sorting.begin());
                    ganttChart2.push_back(currentProcess);
                }
                else {
                    ganttChart2.push_back(currentProcess);
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

                    while (!readyQueue2.empty()) {
                        readyQueue2.pop();
                    }
                    // Transfer sorted elements back to the queue
                    for (const auto& elem : sorting) {
                        readyQueue2.push(elem);
                    }

                }

            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
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


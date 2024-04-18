#include "pri.h"
#include "ui_pri.h"
#include <map>

using namespace std;
void add_time4();
map<int, vector<process>> m4;
int burstTime4;
int priority4;
int QuantumTime4;
int processID4;
double avgwaitt4;
double avgturnt4;
int sumwaitt4=0;
int sumturnt4=0;
double nn4=0;
class ComparisonClass4 {
public:
    bool operator() (process p1, process p2) {
        return p1.getPriority() > p2.getPriority();
    }
};

priority_queue <process, vector<process>, ComparisonClass4> readyQueue4;
vector<process> ganttChart4;
int TIMEEEEE4 = 0;
QTime startT4;
bool isRunning4 = false; // Flag to control the execution of RoundRobin
void PRI();

pri::pri(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pri)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    startT4 = QTime::currentTime();
    connect(timer, &QTimer::timeout, this, &pri::updateChart); // Connect timer timeout signal to updateChart slot
    connect(timer, &QTimer::timeout, this, &pri::updateAvgTurnt);
    connect(timer, &QTimer::timeout, this, &pri::updateAvgTurnt2);
    timer->start(1000); // Start the timer with 1-second interval
    QtConcurrent::run(PRI);
    QtConcurrent::run(add_time4);

}


void add_time4(){
    while(1){
        qDebug()<<"add_time";
        for (auto processes : m4[TIMEEEEE4]){
            readyQueue4.push(processes);
            qDebug()<<processes.getID();
            qDebug()<<TIMEEEEE4;
        }
        TIMEEEEE4++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    }
}

void pri::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int x = 30;
    int y = 300;
    int height = 100; // Height of the rectangles
    QFont font = painter.font();
    font.setPointSize(5); // Adjust font size as needed
    painter.setFont(font);
    painter.setBrush(Qt::white);
    painter.drawRect(10, 290, 780, 120);
    for (const auto& p : ganttChart4) {
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

void pri::updateChart() {

    update(); // Update the UI

}

void PRI() {
    isRunning4 = true; // Set the flag to indicate RoundRobin is running
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for 1 second
    while (isRunning4) { // Loop as long as the flag is true
        int currentTime = 0;
        while (!readyQueue4.empty()) {
            QTime startTime = QTime::currentTime();
            process currentProcess = readyQueue4.top();
            readyQueue4.pop();
            int execTime = currentProcess.getRemainingBurst();
            //currentProcess.setexecTime(execTime);
            while (QTime::currentTime() < startTime.addSecs(1)) {}
            currentTime += 1;
            currentProcess.setDoneBurst(execTime + currentProcess.getDoneBurst());
            currentProcess.setRemainingBurst(execTime - 1);
            //currentProcess.setexecTime(execTime);
            if (currentProcess.getRemainingBurst() > 0) {
                readyQueue4.push(currentProcess);
            } else {
                currentProcess.calcProcessTurnaroundTime(currentTime);
                currentProcess.calcProcessWaitingTime(currentTime);
                sumwaitt4 += currentProcess.getWaitingTime();
                sumturnt4 += currentProcess.getTurnaroundTime();
                nn4++;
            }
            ganttChart4.push_back(currentProcess);
        }
    }
}


pri::~pri()

{
    delete ui;
}

void pri::on_close_clicked()

{
    close();
    isRunning4 = false;
}



void pri::on_add_4_clicked()

{
    burstTime4 = ui->burst_44->value();
    priority4 = ui->spinBox->value();
    processID4++;
    QTime currentTime = QTime::currentTime();
    int arrivalTime = currentTime.secsTo(startT4);
    readyQueue4.push(process(processID4, arrivalTime, burstTime4, priority4));
    qDebug()<<"readyQueue updated";

}

void pri::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}


void pri::updateAvgTurnt() {
    if(nn4>0) ui->avgturnt->setText(QString::number(sumturnt4 / nn4));
}

void pri::updateAvgTurnt2() {
    if(nn4>0) ui->avgturnt_2->setText(QString::number(sumwaitt4 / nn4));
}

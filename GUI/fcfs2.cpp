#include "fcfs2.h"
#include "ui_fcfs2.h"

#include <algorithm>
#include<vector>
#include "fcfs.h"
using namespace  std;
extern vector<process> processes1;
int numOfProcesses1;
extern int processID1;
FCFS2::FCFS2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FCFS2)
{
    ui->setupUi(this);
}

FCFS2::~FCFS2()
{
    delete ui;
}

void FCFS2::on_pushButton_clicked()
{
    numOfProcesses1 = ui->spinBox->value();

}

bool FCFS2:: compare(  process &a,  process &b)
{
    return a.getArrival() < b.getArrival();
}
void FCFS2::on_pushButton_2_clicked()
{

    int burstTime, arrivalTime;
    burstTime = ui->spinBox_2->value();
    arrivalTime = ui->spinBox_3->value();
    qDebug() << burstTime << " " << arrivalTime;
    processID1++;
    processes1.push_back(process(processID1, arrivalTime, burstTime));

    if (processID1 == numOfProcesses1)
    {
        sort(processes1.begin(), processes1.end(),compare);
        fcfs * ff = new fcfs(this);
        ff->show();
        close();
    }
}
void FCFS2::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

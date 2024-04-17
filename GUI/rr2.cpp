#include "rr2.h"
#include "rr.h"
#include "ui_rr2.h"
using namespace std;
extern int burstTime;
extern int QuantumTime;
extern int processID;
extern queue<process> readyQueue;
int numprocesses;
int counter = 0;

RR2::RR2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RR2)
{
    ui->setupUi(this);
}

RR2::~RR2()
{
    delete ui;
}

void RR2::on_choose_clicked()
{
    numprocesses = ui->num->value();
    QuantumTime = ui->quantum->value();
}



void RR2::on_pushButton_clicked()
{
    counter ++ ;
    burstTime = ui->btime->value();
    processID++;
    int arrivalTime = ui->btime_2->value();
    readyQueue.push(process(processID, arrivalTime, burstTime));
    if(counter == numprocesses){
        RR* rr = new RR(this);
        rr->show();
        close();
    }
}


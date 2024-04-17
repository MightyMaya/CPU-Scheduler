#include "sjfnon2.h"
#include "sjfnon.h"
#include "ui_sjfnon2.h"

using namespace std;
extern int burstTime2;
extern int QuantumTime2;
extern int processID2;
extern queue<process> readyQueue2;
int numprocesses2;
int counter2 = 0;

sjfnon2::sjfnon2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sjfnon2)
{
    ui->setupUi(this);
}

sjfnon2::~sjfnon2()
{
    delete ui;
}

void sjfnon2::on_pushButton_clicked()
{
    counter2 ++ ;
    burstTime2 = ui->btime->value();
    processID2++;
    int arrivalTime = ui->btime_2->value();
    readyQueue2.push(process(processID2, arrivalTime, burstTime2));
    if(counter2 == numprocesses2){
        sjfnon* sjfnonn = new sjfnon(this);
        sjfnonn->show();
        close();
    }
}


void sjfnon2::on_choose_clicked()
{
    numprocesses2 = ui->num->value();
}




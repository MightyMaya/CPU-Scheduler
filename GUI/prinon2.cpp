#include "prinon2.h"
#include "prinon.h"
#include "ui_prinon2.h"

using namespace std;
extern int burstTime5;
extern int QuantumTime5;
extern int processID5;
extern queue<process> readyQueue5;
extern int TIMEEEEE;
extern int priority5;
extern map<int, vector<process>> m5;
int numprocesses5;
int counter5 = 0;

prinon2::prinon2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::prinon2)
{
    ui->setupUi(this);
}

prinon2::~prinon2()
{
    delete ui;
}

void prinon2::on_pushButton_clicked()
{
    counter5 ++ ;
    burstTime5 = ui->btime->value();
    priority5 = ui->spinBox->value();
    processID5++;
    int arrivalTime = ui->btime_44->value();
    m5[arrivalTime].push_back(process(processID5, arrivalTime, burstTime5,priority5));
    //readyQueue2.push(process(processID2, arrivalTime, burstTime2));
    if(counter5 == numprocesses5){
        prinon* prinonn = new prinon(this);
        prinonn->show();
        close();
    }
}


void prinon2::on_choose_clicked()
{
    numprocesses5 = ui->num->value();
}

void prinon2::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

#include "pri2.h"
#include "pri.h"
#include "ui_pri2.h"

using namespace std;
extern int burstTime4;
extern int QuantumTime4;
extern int processID4;
extern int priority4;
extern queue<process> readyQueue4;
extern int TIMEEEEE4;
extern map<int, vector<process>> m4;
int numprocesses4;
int counter4 = 0;

pri2::pri2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pri2)
{
    ui->setupUi(this);
}

pri2::~pri2()
{
    delete ui;
}

void pri2::on_pushButton_clicked()
{
    counter4 ++ ;
    burstTime4 = ui->btime->value();
    priority4 = ui->spinBox->value();
    processID4++;
    int arrivalTime = ui->btime_44->value();
    m4[arrivalTime].push_back(process(processID4, arrivalTime, burstTime4,priority4));
    //readyQueue2.push(process(processID2, arrivalTime, burstTime2));
    if(counter4 == numprocesses4){
        pri* prinonn = new pri(this);
        prinonn->show();
        close();
    }
}


void pri2::on_choose_clicked()
{
    numprocesses4 = ui->num->value();
}

void pri2::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}

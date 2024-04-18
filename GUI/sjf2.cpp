#include "sjf2.h"
#include "sjf.h"
#include "ui_sjf2.h"
using namespace std;
extern int burstTime3;
extern int QuantumTime3;
extern int processID3;
extern queue<process> readyQueue3;
extern int TIMEEEEE3;
extern map<int, vector<process>> m3;
int numprocesses3;
int counter3 = 0;

sjf2::sjf2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sjf2)
{
    ui->setupUi(this);
}

sjf2::~sjf2()
{
    delete ui;
}



void sjf2::on_pushButton_clicked()
{
    counter3 ++ ;
    burstTime3 = ui->btime->value();
    processID3++;
    int arrivalTime = ui->btime_2->value();
    m3[arrivalTime].push_back(process(processID3, arrivalTime, burstTime3));
    //readyQueue2.push(process(processID2, arrivalTime, burstTime2));
    if(counter3 == numprocesses3){
        sjf* sjjf = new sjf(this);
        sjjf->show();
        close();
    }
}


void sjf2::on_choose_clicked()
{
    numprocesses3 = ui->num->value();
}

void sjf2::closeEvent(QCloseEvent *event) {
    emit childClosed();
    event->accept();
}


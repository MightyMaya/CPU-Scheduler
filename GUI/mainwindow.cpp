#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rr.h"
#include "rr2.h"
#include "sjfnon.h"
using namespace std;

int burstTime;
int QuantumTime;
int processID;
queue<process> readyQueue;
vector<process> ganttChart;
QTime startT;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("FCFS");
    ui->comboBox->addItem("SJF Preemptive");
    ui->comboBox->addItem("SJF nonPreemptive");
    ui->comboBox->addItem("Priority Preemptive");
    ui->comboBox->addItem("Priority nonPreemptive");
    ui->comboBox->addItem("Round Robin");

    ui->comboBox_2->addItem("live");
    ui->comboBox_2->addItem("not live");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    if (ui->comboBox->currentIndex() == 2){
        if(ui->comboBox_2->currentIndex() == 1){
            RR2* rr2 = new RR2(this);
            rr2->show();

        }
        else{
            sjfnon * sjf = new sjfnon(this);
            sjf->show();
        }

    }

    if (ui->comboBox->currentIndex() == 5){
        if(ui->comboBox_2->currentIndex() == 1){
            RR2* rr2 = new RR2(this);
            rr2->show();

        }
        else{
            RR* rr = new RR(this);
            rr->show();
        }

    }

}




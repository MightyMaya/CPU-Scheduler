#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rr.h"
#include "rr2.h"
#include "sjfnon.h"
#include "sjfnon2.h"
#include "sjf.h"
#include "sjf2.h"
#include "prinon.h"
#include "prinon2.h"
#include "pri.h"
#include "pri2.h"


using namespace std;

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
    // Connect the childClosed signal from child window to a slot in the parent window

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    if(ui->comboBox->currentIndex() == 0){
        if(ui->comboBox_2->currentIndex() == 1){
            FCFS2* FF2 = new FCFS2(this);
            FF2->show();
            connect(FF2, &FCFS2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            fcfs* ff = new fcfs(this);
            ff->show();
            connect(ff, &fcfs::childClosed, this, &MainWindow::close);
            hide();
        }
    }
    else if (ui->comboBox->currentIndex() == 1){
        if(ui->comboBox_2->currentIndex() == 1){
            sjf2* sjf22 = new sjf2(this);
            sjf22->show();
            connect(sjf22, &sjf2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            sjf* ss = new sjf(this);
            ss->show();
            connect(ss, &sjf::childClosed, this, &MainWindow::close);
            hide();
        }

    }
    else if (ui->comboBox->currentIndex() == 2){
        if(ui->comboBox_2->currentIndex() == 1){
            sjfnon2* sjfnon22 = new sjfnon2(this);
            sjfnon22->show();
            connect(sjfnon22, &sjfnon2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            sjfnon* sjfnon1 = new sjfnon(this);
            sjfnon1->show();
            connect(sjfnon1, &sjfnon::childClosed, this, &MainWindow::close);
            hide();
        }

    }
    else if (ui->comboBox->currentIndex() == 3){
        if(ui->comboBox_2->currentIndex() == 1){
            pri2* pri22 = new pri2(this);
            pri22->show();
            connect(pri22, &pri2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            pri* pri11 = new pri(this);
            pri11->show();
            connect(pri11, &pri::childClosed, this, &MainWindow::close);
            hide();
        }

    }
    else if (ui->comboBox->currentIndex() == 4){
        if(ui->comboBox_2->currentIndex() == 1){
            prinon2* pri202 = new prinon2(this);
            pri202->show();
            connect(pri202, &prinon2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            prinon* pri101 = new prinon(this);
            pri101->show();
            connect(pri101, &prinon::childClosed, this, &MainWindow::close);
            hide();
        }

    }
    else if (ui->comboBox->currentIndex() == 5){
        if(ui->comboBox_2->currentIndex() == 1){
            RR2* rr2 = new RR2(this);
            rr2->show();
            connect(rr2, &RR2::childClosed, this, &MainWindow::close);
            hide();

        }
        else{
            RR* rr = new RR(this);
            rr->show();
            connect(rr, &RR::childClosed, this, &MainWindow::close);
            hide();
        }

    }


}




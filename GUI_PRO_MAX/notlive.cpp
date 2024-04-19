#include "notlive.h"
#include "ui_notlive.h"
#include "live.h"

using namespace std;

notlive::notlive(QWidget *parent, bool showQuantum_, bool showPriority_, CommonScheduler* scheduler_)
    : QDialog(parent)
    , ui(new Ui::notlive)
    , scheduler(scheduler_)
    , showQuantum(showQuantum_)
    , showPriority(showPriority_)

{
    ui->setupUi(this);
    ui->num->setMinimum(1);
    ui->num->setValue(1);

    ui->quantum->setVisible(showQuantum);
    ui->quantum->setMinimum(1);
    ui->quantum->setValue(1);

    ui->priority->setVisible(showPriority);
    ui->priority->setValue(3);
}
int notlive::COUNTER = 0;
notlive::~notlive()
{
	delete scheduler;
    delete ui;
}


void notlive::on_add_clicked()
{
    // Static
    COUNTER++;
    qDebug()<<COUNTER;
    int burstTime = ui->btime->value();
    int arrivalTime = ui->atime->value();

    // The default is 3, and it's hidden to the
    // user if showPriority is false.
    int priority = ui->priority->value();

    // The default is 1, and it's hidden to the
    // user if showQuantum is false.
    // This is a static shared member, so it only
    // takes the last value entered.
    int quantum = ui->quantum->value();

    scheduler->addNotLive(process(arrivalTime, burstTime, priority));

    if(COUNTER == (ui->num->value())){
        scheduler->setTimeQuantum(quantum);
        live* subwindow = new live(this,showQuantum,showPriority, scheduler);
        subwindow->show();
        close();
    }
}

void notlive::closeEvent(QCloseEvent *event) {
    scheduler->stop();
    emit childClosed();
    event->accept();
}

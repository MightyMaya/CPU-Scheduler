#include "sjfnl.h"
#include "ui_sjfnl.h"

SJFNL::SJFNL(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SJFNL)
{
    ui->setupUi(this);
}

SJFNL::~SJFNL()
{
    delete ui;
}




void SJFNL::on_add_clicked()
{

}


#include "fcfsl.h"
#include "ui_fcfsl.h"

FCFSL::FCFSL(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FCFSL)
{
    ui->setupUi(this);
}

FCFSL::~FCFSL()
{
    delete ui;
}

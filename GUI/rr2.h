#ifndef RR2_H
#define RR2_H

#include <QDialog>
#include <iostream>
#include <queue>
#include <vector>
#include <QTime>
#include <QPainter>
#include <QTimer> // Include QTimer header
#include "process.h"

namespace Ui {
class RR2;
}

class RR2 : public QDialog
{
    Q_OBJECT

public:
    explicit RR2(QWidget *parent = nullptr);
    ~RR2();

private slots:
    void on_choose_clicked();

    void on_pushButton_clicked();

private:
    Ui::RR2 *ui;
};

#endif // RR2_H

#ifndef PRINON_H
#define PRINON_H

#include <QDialog>
#include <iostream>
#include <queue>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
#include <QTime>
#include <QPainter>
#include <QTimer> // Include QTimer header
#include <qtconcurrentrun.h>
#include <QThread>
#include "process.h"
#include <QCloseEvent>


namespace Ui {
class prinon;
}

class prinon : public QDialog
{
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed
    void childClosed();

private slots:
    void updateChart(); // Slot for updating the chart
    void on_close_clicked();
    void closeEvent(QCloseEvent *event);
    void on_add_4_clicked();
    void updateAvgTurnt();
    void updateAvgTurnt2();

public:
    explicit prinon(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~prinon();

private:
    Ui::prinon *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // PRINON_H

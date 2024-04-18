#ifndef SJF_H
#define SJF_H

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
#include <QCloseEvent>

#include "process.h"

namespace Ui {
class sjf;
}

class sjf : public QDialog
{
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed
    void childClosed();

private slots:
    void updateChart(); // Slot for updating the chart
    void on_close_clicked();
    void on_add_3_clicked();
    void closeEvent(QCloseEvent *event);
    void updateAvgTurnt();
    void updateAvgTurnt2();


public:
    explicit sjf(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~sjf();

private:
    Ui::sjf *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // SJF_H


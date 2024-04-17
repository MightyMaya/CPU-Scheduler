// rr.h
#ifndef RR_H
#define RR_H

#include <QDialog>
#include <iostream>
#include <queue>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
#include <QtConcurrent>
#include <QTime>
#include <QPainter>
#include <QThread>
#include <QTimer>
#include "process.h"

class RoundRobinWorker;

namespace Ui {
class RR;
}

class RR : public QDialog {
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed


public:
    explicit RR(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~RR();

private slots:
    void on_close_clicked();
    void on_add_clicked();
    void updateChart(); // Slot for updating the chart
    void onWorkerFinished();

private:
    Ui::RR *ui;
    QTimer *timer; // Timer for updating the chart
    RoundRobinWorker* worker; // Worker object for Round Robin algorithm
};

class RoundRobinWorker : public QThread {
    Q_OBJECT

signals:
    void processCompleted(); // Signal emitted when a process is completed
    void updateChartNeeded();

protected:
    void run() override; // Override the run() method to implement Round Robin algorithm

public:
    RoundRobinWorker(RR* parent = nullptr); // Constructor
    ~RoundRobinWorker(); // Destructor

private:
    RR* parent;
};

#endif // RR_H

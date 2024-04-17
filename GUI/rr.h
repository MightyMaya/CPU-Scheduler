#ifndef RR_H
#define RR_H

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
#include "process.h"

namespace Ui {
class RR;
}

class RR : public QDialog {
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed

public slots:
    void RoundRobin();

public:
    explicit RR(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~RR();

private slots:
    void on_close_clicked();
    void on_add_clicked();
    void updateChart(); // Slot for updating the chart

private:
    Ui::RR *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // RR_H

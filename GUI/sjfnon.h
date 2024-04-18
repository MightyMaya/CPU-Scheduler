#ifndef SJFNON_H
#define SJFNON_H

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
class sjfnon;
}

class sjfnon : public QDialog
{
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed
    void childClosed();

private slots:
    void updateChart(); // Slot for updating the chart
    void on_close_clicked();
    void closeEvent(QCloseEvent *event);
    void on_add_2_clicked();
    void updateAvgTurnt();
    void updateAvgTurnt2();

public:
    explicit sjfnon(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~sjfnon();

private:
    Ui::sjfnon *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // SJFNON_H

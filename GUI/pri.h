#ifndef PRI_H
#define PRI_H

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
class pri;
}

class pri : public QDialog
{
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed
    void childClosed();

private slots:
    void updateChart(); // Slot for updating the chart
    void on_close_clicked();
    void on_add_4_clicked();
    void closeEvent(QCloseEvent *event);
    void updateAvgTurnt();
    void updateAvgTurnt2();


public:
    explicit pri(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~pri();

private:
    Ui::pri *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // PRI_H


#ifndef SJFNON_H
#define SJFNON_H

#include <QDialog>
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
class sjfnon;
}

class sjfnon : public QDialog
{
    Q_OBJECT

signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed

private slots:
    void updateChart(); // Slot for updating the chart
    void on_close_clicked();
    void on_add_clicked();

public slots:
    void SJFNon();


public:
    explicit sjfnon(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    ~sjfnon();

private:
    Ui::sjfnon *ui;
    QTimer *timer; // Timer for updating the chart
};

#endif // SJFNON_H

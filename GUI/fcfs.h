#ifndef FCFS_H
#define FCFS_H

#include <QDialog>
#include <QTime>
#include <QVector>
#include <QTimer>
#include <vector>
#include <qtconcurrentrun.h>
#include <QThread>
#include <QCloseEvent>
using namespace std;


void firstComeFirstServed();
namespace Ui {
class fcfs;
}

class fcfs : public QDialog
{
    Q_OBJECT

public:
    explicit fcfs(QWidget *parent = nullptr);
    ~fcfs();

    void createGrantChart();
    void paintEvent(QPaintEvent *event);
    friend void firstComeFirstServed();
signals:
    void updateChartNeeded(); // Signal to indicate that UI update is needed
    void childClosed();

private slots:
    void on_pushButton_clicked();
    void updateChart(); // Slot for updating the chart
    void updateAvgTurnt();
    void updateAvgTurnt2();
    void closeEvent(QCloseEvent *event);

private:
    Ui::fcfs *ui;
    QTimer *timer;
};

#endif // FCFS_H

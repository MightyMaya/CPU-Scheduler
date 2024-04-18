#ifndef FCFS2_H
#define FCFS2_H

#include <QDialog>
#include "process.h"
#include <vector>
#include <QCloseEvent>
using namespace std;
namespace Ui {
class FCFS2;
}

class FCFS2 : public QDialog
{
    Q_OBJECT

public:
    explicit FCFS2(QWidget *parent = nullptr);
    ~FCFS2();
    static bool compare( process &a, process &b);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void closeEvent(QCloseEvent *event);

signals:

    void childClosed();
private:
    Ui::FCFS2 *ui;

};


#endif // FCFS2_H

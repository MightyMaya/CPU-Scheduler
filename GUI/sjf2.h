#ifndef SJF2_H
#define SJF2_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class sjf2;
}

class sjf2 : public QDialog
{
    Q_OBJECT
signals:
    void childClosed();
public:
    explicit sjf2(QWidget *parent = nullptr);
    ~sjf2();
private slots:
    void on_pushButton_clicked();
    void on_choose_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::sjf2 *ui;
};

#endif // SJF2_H

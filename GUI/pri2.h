#ifndef PRI2_H
#define PRI2_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class pri2;
}

class pri2 : public QDialog
{
    Q_OBJECT
signals:
    void childClosed();
public:
    explicit pri2(QWidget *parent = nullptr);
    ~pri2();
private slots:
    void on_pushButton_clicked();
    void on_choose_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::pri2 *ui;
};

#endif

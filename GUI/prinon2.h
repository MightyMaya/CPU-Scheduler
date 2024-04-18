#ifndef PRINON2_H
#define PRINON2_H
#include <QCloseEvent>

#include <QDialog>

namespace Ui {
class prinon2;
}

class prinon2 : public QDialog
{
    Q_OBJECT
signals:
    void childClosed();
public:
    explicit prinon2(QWidget *parent = nullptr);
    ~prinon2();

private slots:
    void on_pushButton_clicked();
    void closeEvent(QCloseEvent *event);
    void on_choose_clicked();

private:
    Ui::prinon2 *ui;
};

#endif // SJFNON2_H

#ifndef SJFNON2_H
#define SJFNON2_H

#include <QDialog>

namespace Ui {
class sjfnon2;
}

class sjfnon2 : public QDialog
{
    Q_OBJECT

public:
    explicit sjfnon2(QWidget *parent = nullptr);
    ~sjfnon2();

private slots:
    void on_pushButton_clicked();

    void on_choose_clicked();

private:
    Ui::sjfnon2 *ui;
};

#endif // SJFNON2_H

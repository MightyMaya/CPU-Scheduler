#ifndef FCFSL_H
#define FCFSL_H

#include <QDialog>

namespace Ui {
class FCFSL;
}

class FCFSL : public QDialog
{
    Q_OBJECT

public:
    explicit FCFSL(QWidget *parent = nullptr);
    ~FCFSL();

private:
    Ui::FCFSL *ui;
};

#endif // FCFSL_H

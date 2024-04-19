/********************************************************************************
** Form generated from reading UI file 'prinon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINON_H
#define UI_PRINON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_prinon
{
public:
    QLabel *label_3;
    QSpinBox *burst_44;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label;
    QPushButton *add_4;
    QLineEdit *avgturnt_2;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *avgturnt;
    QPushButton *close;

    void setupUi(QDialog *prinon)
    {
        if (prinon->objectName().isEmpty())
            prinon->setObjectName("prinon");
        prinon->resize(800, 600);
        label_3 = new QLabel(prinon);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 40, 91, 20));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        burst_44 = new QSpinBox(prinon);
        burst_44->setObjectName("burst_44");
        burst_44->setGeometry(QRect(210, 80, 42, 26));
        spinBox = new QSpinBox(prinon);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(40, 80, 42, 26));
        label_2 = new QLabel(prinon);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 40, 63, 20));
        label_2->setFont(font);
        label = new QLabel(prinon);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 30, 331, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(20);
        label->setFont(font1);
        add_4 = new QPushButton(prinon);
        add_4->setObjectName("add_4");
        add_4->setGeometry(QRect(100, 140, 93, 29));
        add_4->setFont(font);
        avgturnt_2 = new QLineEdit(prinon);
        avgturnt_2->setObjectName("avgturnt_2");
        avgturnt_2->setGeometry(QRect(200, 200, 113, 26));
        label_5 = new QLabel(prinon);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 200, 171, 20));
        label_4 = new QLabel(prinon);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 200, 161, 20));
        avgturnt = new QLineEdit(prinon);
        avgturnt->setObjectName("avgturnt");
        avgturnt->setGeometry(QRect(640, 200, 113, 26));
        close = new QPushButton(prinon);
        close->setObjectName("close");
        close->setGeometry(QRect(350, 550, 93, 29));

        retranslateUi(prinon);

        QMetaObject::connectSlotsByName(prinon);
    } // setupUi

    void retranslateUi(QDialog *prinon)
    {
        prinon->setWindowTitle(QCoreApplication::translate("prinon", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("prinon", "Burst Time", nullptr));
        label_2->setText(QCoreApplication::translate("prinon", "Priority", nullptr));
        label->setText(QCoreApplication::translate("prinon", "Nonpreemptive Priority", nullptr));
        add_4->setText(QCoreApplication::translate("prinon", "add", nullptr));
        label_5->setText(QCoreApplication::translate("prinon", "average turnaround time", nullptr));
        label_4->setText(QCoreApplication::translate("prinon", "average waiting time", nullptr));
        close->setText(QCoreApplication::translate("prinon", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prinon: public Ui_prinon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINON_H

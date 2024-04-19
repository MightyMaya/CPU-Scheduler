/********************************************************************************
** Form generated from reading UI file 'rr2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR2_H
#define UI_RR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RR2
{
public:
    QSpinBox *btime_2;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *choose;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *num;
    QLabel *label_5;
    QPushButton *pushButton;
    QSpinBox *btime;
    QSpinBox *quantum;

    void setupUi(QDialog *RR2)
    {
        if (RR2->objectName().isEmpty())
            RR2->setObjectName("RR2");
        RR2->resize(800, 600);
        btime_2 = new QSpinBox(RR2);
        btime_2->setObjectName("btime_2");
        btime_2->setGeometry(QRect(160, 350, 42, 26));
        label_2 = new QLabel(RR2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 100, 161, 31));
        label_6 = new QLabel(RR2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 170, 531, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(60);
        label_6->setFont(font);
        choose = new QPushButton(RR2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(410, 80, 93, 29));
        label_4 = new QLabel(RR2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(580, 300, 111, 31));
        label = new QLabel(RR2);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 111, 31));
        num = new QSpinBox(RR2);
        num->setObjectName("num");
        num->setGeometry(QRect(330, 100, 42, 26));
        label_5 = new QLabel(RR2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 300, 111, 31));
        pushButton = new QPushButton(RR2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 470, 93, 29));
        btime = new QSpinBox(RR2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(600, 350, 42, 26));
        quantum = new QSpinBox(RR2);
        quantum->setObjectName("quantum");
        quantum->setGeometry(QRect(330, 50, 42, 26));

        retranslateUi(RR2);

        QMetaObject::connectSlotsByName(RR2);
    } // setupUi

    void retranslateUi(QDialog *RR2)
    {
        RR2->setWindowTitle(QCoreApplication::translate("RR2", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("RR2", "number of processes", nullptr));
        label_6->setText(QCoreApplication::translate("RR2", "Round Robin", nullptr));
        choose->setText(QCoreApplication::translate("RR2", "choose", nullptr));
        label_4->setText(QCoreApplication::translate("RR2", "Burst Time", nullptr));
        label->setText(QCoreApplication::translate("RR2", "Time Quantum", nullptr));
        label_5->setText(QCoreApplication::translate("RR2", "arrival Time", nullptr));
        pushButton->setText(QCoreApplication::translate("RR2", "add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR2: public Ui_RR2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR2_H

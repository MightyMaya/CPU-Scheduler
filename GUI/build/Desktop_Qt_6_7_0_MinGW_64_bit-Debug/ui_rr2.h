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
    QSpinBox *quantum;
    QSpinBox *num;
    QSpinBox *id;
    QSpinBox *btime;
    QPushButton *pushButton;
    QPushButton *choose;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *btime_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *RR2)
    {
        if (RR2->objectName().isEmpty())
            RR2->setObjectName("RR2");
        RR2->resize(627, 485);
        quantum = new QSpinBox(RR2);
        quantum->setObjectName("quantum");
        quantum->setGeometry(QRect(220, 20, 42, 26));
        num = new QSpinBox(RR2);
        num->setObjectName("num");
        num->setGeometry(QRect(220, 70, 42, 26));
        id = new QSpinBox(RR2);
        id->setObjectName("id");
        id->setGeometry(QRect(90, 330, 42, 26));
        btime = new QSpinBox(RR2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(490, 320, 42, 26));
        pushButton = new QPushButton(RR2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 440, 93, 29));
        choose = new QPushButton(RR2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(300, 50, 93, 29));
        label = new QLabel(RR2);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 111, 31));
        label_2 = new QLabel(RR2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 70, 161, 31));
        label_3 = new QLabel(RR2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 270, 111, 31));
        label_4 = new QLabel(RR2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(470, 270, 111, 31));
        btime_2 = new QSpinBox(RR2);
        btime_2->setObjectName("btime_2");
        btime_2->setGeometry(QRect(300, 320, 42, 26));
        label_5 = new QLabel(RR2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 270, 111, 31));
        label_6 = new QLabel(RR2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 150, 351, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(40);
        label_6->setFont(font);

        retranslateUi(RR2);

        QMetaObject::connectSlotsByName(RR2);
    } // setupUi

    void retranslateUi(QDialog *RR2)
    {
        RR2->setWindowTitle(QCoreApplication::translate("RR2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RR2", "add", nullptr));
        choose->setText(QCoreApplication::translate("RR2", "choose", nullptr));
        label->setText(QCoreApplication::translate("RR2", "Time Quantum", nullptr));
        label_2->setText(QCoreApplication::translate("RR2", "number of processes", nullptr));
        label_3->setText(QCoreApplication::translate("RR2", "process ID", nullptr));
        label_4->setText(QCoreApplication::translate("RR2", "Burst Time", nullptr));
        label_5->setText(QCoreApplication::translate("RR2", "arrival Time", nullptr));
        label_6->setText(QCoreApplication::translate("RR2", "Round Robin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR2: public Ui_RR2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR2_H

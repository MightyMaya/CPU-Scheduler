/********************************************************************************
** Form generated from reading UI file 'rr.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_H
#define UI_RR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RR
{
public:
    QSpinBox *BurstTime;
    QSpinBox *timeQuantum;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *add;
    QLabel *label_4;
    QPushButton *close;

    void setupUi(QDialog *RR)
    {
        if (RR->objectName().isEmpty())
            RR->setObjectName("RR");
        RR->resize(800, 600);
        BurstTime = new QSpinBox(RR);
        BurstTime->setObjectName("BurstTime");
        BurstTime->setGeometry(QRect(30, 150, 42, 26));
        timeQuantum = new QSpinBox(RR);
        timeQuantum->setObjectName("timeQuantum");
        timeQuantum->setGeometry(QRect(580, 150, 51, 31));
        label_2 = new QLabel(RR);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 150, 91, 21));
        label_3 = new QLabel(RR);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 140, 121, 61));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        add = new QPushButton(RR);
        add->setObjectName("add");
        add->setGeometry(QRect(180, 150, 93, 29));
        label_4 = new QLabel(RR);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 10, 501, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(55);
        label_4->setFont(font1);
        close = new QPushButton(RR);
        close->setObjectName("close");
        close->setGeometry(QRect(360, 550, 93, 29));

        retranslateUi(RR);

        QMetaObject::connectSlotsByName(RR);
    } // setupUi

    void retranslateUi(QDialog *RR)
    {
        RR->setWindowTitle(QCoreApplication::translate("RR", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("RR", "Burst Time", nullptr));
        label_3->setText(QCoreApplication::translate("RR", "Quantum Time", nullptr));
        add->setText(QCoreApplication::translate("RR", "add", nullptr));
        label_4->setText(QCoreApplication::translate("RR", "Round Robin", nullptr));
        close->setText(QCoreApplication::translate("RR", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR: public Ui_RR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_H

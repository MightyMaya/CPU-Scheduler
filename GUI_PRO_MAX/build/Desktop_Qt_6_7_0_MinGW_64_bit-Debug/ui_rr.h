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
#include <QtWidgets/QLineEdit>
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
    QLabel *label;
    QLabel *label_5;
    QLineEdit *avgturnt;
    QLineEdit *avgturnt_2;

    void setupUi(QDialog *RR)
    {
        if (RR->objectName().isEmpty())
            RR->setObjectName("RR");
        RR->resize(800, 600);
        BurstTime = new QSpinBox(RR);
        BurstTime->setObjectName("BurstTime");
        BurstTime->setGeometry(QRect(40, 180, 42, 26));
        timeQuantum = new QSpinBox(RR);
        timeQuantum->setObjectName("timeQuantum");
        timeQuantum->setGeometry(QRect(750, 170, 41, 21));
        label_2 = new QLabel(RR);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 180, 91, 21));
        label_3 = new QLabel(RR);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 160, 121, 41));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        add = new QPushButton(RR);
        add->setObjectName("add");
        add->setGeometry(QRect(180, 180, 93, 29));
        label_4 = new QLabel(RR);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 0, 751, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(77);
        label_4->setFont(font1);
        close = new QPushButton(RR);
        close->setObjectName("close");
        close->setGeometry(QRect(360, 550, 93, 29));
        label = new QLabel(RR);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 250, 161, 20));
        label_5 = new QLabel(RR);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(420, 250, 171, 20));
        avgturnt = new QLineEdit(RR);
        avgturnt->setObjectName("avgturnt");
        avgturnt->setGeometry(QRect(610, 250, 113, 26));
        avgturnt_2 = new QLineEdit(RR);
        avgturnt_2->setObjectName("avgturnt_2");
        avgturnt_2->setGeometry(QRect(170, 250, 113, 26));

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
        label->setText(QCoreApplication::translate("RR", "average waiting time", nullptr));
        label_5->setText(QCoreApplication::translate("RR", "average turnaround time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR: public Ui_RR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_H

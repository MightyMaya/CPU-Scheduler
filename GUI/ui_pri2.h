/********************************************************************************
** Form generated from reading UI file 'pri2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRI2_H
#define UI_PRI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_pri2
{
public:
    QLabel *label_5;
    QSpinBox *btime_44;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label;
    QPushButton *choose;
    QSpinBox *num;
    QSpinBox *btime;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_4;

    void setupUi(QDialog *pri2)
    {
        if (pri2->objectName().isEmpty())
            pri2->setObjectName("pri2");
        pri2->resize(800, 600);
        label_5 = new QLabel(pri2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 100, 211, 41));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        btime_44 = new QSpinBox(pri2);
        btime_44->setObjectName("btime_44");
        btime_44->setGeometry(QRect(70, 370, 42, 26));
        pushButton = new QPushButton(pri2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 470, 93, 41));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        label_3 = new QLabel(pri2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 330, 63, 20));
        label_3->setFont(font1);
        label = new QLabel(pri2);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 180, 971, 111));
        label->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(44);
        label->setFont(font2);
        choose = new QPushButton(pri2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(502, 110, 111, 31));
        QFont font3;
        font3.setPointSize(10);
        choose->setFont(font3);
        num = new QSpinBox(pri2);
        num->setObjectName("num");
        num->setGeometry(QRect(370, 110, 42, 26));
        btime = new QSpinBox(pri2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(710, 370, 42, 26));
        label_2 = new QLabel(pri2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 330, 111, 20));
        label_2->setFont(font1);
        spinBox = new QSpinBox(pri2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(380, 370, 42, 26));
        label_4 = new QLabel(pri2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(700, 330, 111, 20));
        label_4->setFont(font1);

        retranslateUi(pri2);

        QMetaObject::connectSlotsByName(pri2);
    } // setupUi

    void retranslateUi(QDialog *pri2)
    {
        pri2->setWindowTitle(QCoreApplication::translate("pri2", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("pri2", "Number of process:", nullptr));
        pushButton->setText(QCoreApplication::translate("pri2", "add", nullptr));
        label_3->setText(QCoreApplication::translate("pri2", "Priority", nullptr));
        label->setText(QCoreApplication::translate("pri2", "preemptive Priority", nullptr));
        choose->setText(QCoreApplication::translate("pri2", "choose", nullptr));
        label_2->setText(QCoreApplication::translate("pri2", "Arrival time", nullptr));
        label_4->setText(QCoreApplication::translate("pri2", "Burst Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pri2: public Ui_pri2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRI2_H

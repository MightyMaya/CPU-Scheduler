/********************************************************************************
** Form generated from reading UI file 'sjfnon2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJFNON2_H
#define UI_SJFNON2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_sjfnon2
{
public:
    QSpinBox *num;
    QSpinBox *btime;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *title_2;
    QSpinBox *btime_2;
    QLabel *label_2;
    QPushButton *choose;
    QLabel *label_4;

    void setupUi(QDialog *sjfnon2)
    {
        if (sjfnon2->objectName().isEmpty())
            sjfnon2->setObjectName("sjfnon2");
        sjfnon2->resize(800, 600);
        num = new QSpinBox(sjfnon2);
        num->setObjectName("num");
        num->setGeometry(QRect(330, 90, 42, 26));
        btime = new QSpinBox(sjfnon2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(600, 340, 42, 26));
        pushButton = new QPushButton(sjfnon2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 460, 93, 29));
        label_5 = new QLabel(sjfnon2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 290, 111, 31));
        title_2 = new QLabel(sjfnon2);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(230, 150, 371, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title_2->setFont(font);
        btime_2 = new QSpinBox(sjfnon2);
        btime_2->setObjectName("btime_2");
        btime_2->setGeometry(QRect(160, 340, 42, 26));
        label_2 = new QLabel(sjfnon2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 90, 161, 31));
        choose = new QPushButton(sjfnon2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(410, 90, 93, 29));
        label_4 = new QLabel(sjfnon2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(580, 290, 111, 31));

        retranslateUi(sjfnon2);

        QMetaObject::connectSlotsByName(sjfnon2);
    } // setupUi

    void retranslateUi(QDialog *sjfnon2)
    {
        sjfnon2->setWindowTitle(QCoreApplication::translate("sjfnon2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("sjfnon2", "add", nullptr));
        label_5->setText(QCoreApplication::translate("sjfnon2", "arrival Time", nullptr));
        title_2->setText(QCoreApplication::translate("sjfnon2", "SJF Non-Preemptive", nullptr));
        label_2->setText(QCoreApplication::translate("sjfnon2", "number of processes", nullptr));
        choose->setText(QCoreApplication::translate("sjfnon2", "choose", nullptr));
        label_4->setText(QCoreApplication::translate("sjfnon2", "Burst Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjfnon2: public Ui_sjfnon2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJFNON2_H

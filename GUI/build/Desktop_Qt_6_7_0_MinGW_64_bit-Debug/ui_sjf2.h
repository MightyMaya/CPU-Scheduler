/********************************************************************************
** Form generated from reading UI file 'sjf2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJF2_H
#define UI_SJF2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_sjf2
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QSpinBox *num;
    QLabel *label_2;
    QSpinBox *btime;
    QPushButton *choose;
    QLabel *label_5;
    QSpinBox *btime_2;
    QLabel *title_2;

    void setupUi(QDialog *sjf2)
    {
        if (sjf2->objectName().isEmpty())
            sjf2->setObjectName("sjf2");
        sjf2->resize(800, 600);
        pushButton = new QPushButton(sjf2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 440, 93, 29));
        label_4 = new QLabel(sjf2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(600, 270, 111, 31));
        num = new QSpinBox(sjf2);
        num->setObjectName("num");
        num->setGeometry(QRect(350, 70, 42, 26));
        label_2 = new QLabel(sjf2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 70, 161, 31));
        btime = new QSpinBox(sjf2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(620, 320, 42, 26));
        choose = new QPushButton(sjf2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(430, 70, 93, 29));
        label_5 = new QLabel(sjf2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 270, 111, 31));
        btime_2 = new QSpinBox(sjf2);
        btime_2->setObjectName("btime_2");
        btime_2->setGeometry(QRect(180, 320, 42, 26));
        title_2 = new QLabel(sjf2);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(250, 130, 371, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title_2->setFont(font);

        retranslateUi(sjf2);

        QMetaObject::connectSlotsByName(sjf2);
    } // setupUi

    void retranslateUi(QDialog *sjf2)
    {
        sjf2->setWindowTitle(QCoreApplication::translate("sjf2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("sjf2", "add", nullptr));
        label_4->setText(QCoreApplication::translate("sjf2", "Burst Time", nullptr));
        label_2->setText(QCoreApplication::translate("sjf2", "number of processes", nullptr));
        choose->setText(QCoreApplication::translate("sjf2", "choose", nullptr));
        label_5->setText(QCoreApplication::translate("sjf2", "arrival Time", nullptr));
        title_2->setText(QCoreApplication::translate("sjf2", "SJF Preemptive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjf2: public Ui_sjf2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJF2_H

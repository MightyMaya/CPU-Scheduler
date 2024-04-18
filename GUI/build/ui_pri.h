/********************************************************************************
** Form generated from reading UI file 'pri.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRI_H
#define UI_PRI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_pri
{
public:
    QLabel *label;
    QPushButton *add_4;
    QSpinBox *burst_44;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLineEdit *avgturnt_2;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *avgturnt;
    QPushButton *close;

    void setupUi(QDialog *pri)
    {
        if (pri->objectName().isEmpty())
            pri->setObjectName("pri");
        pri->resize(800, 600);
        label = new QLabel(pri);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 50, 331, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(20);
        label->setFont(font);
        add_4 = new QPushButton(pri);
        add_4->setObjectName("add_4");
        add_4->setGeometry(QRect(110, 160, 93, 29));
        QFont font1;
        font1.setPointSize(11);
        add_4->setFont(font1);
        burst_44 = new QSpinBox(pri);
        burst_44->setObjectName("burst_44");
        burst_44->setGeometry(QRect(220, 100, 42, 26));
        label_3 = new QLabel(pri);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 60, 91, 20));
        label_3->setFont(font1);
        spinBox = new QSpinBox(pri);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(50, 100, 42, 26));
        label_2 = new QLabel(pri);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 63, 20));
        label_2->setFont(font1);
        avgturnt_2 = new QLineEdit(pri);
        avgturnt_2->setObjectName("avgturnt_2");
        avgturnt_2->setGeometry(QRect(190, 210, 113, 26));
        label_5 = new QLabel(pri);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 210, 171, 20));
        label_4 = new QLabel(pri);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 210, 161, 20));
        avgturnt = new QLineEdit(pri);
        avgturnt->setObjectName("avgturnt");
        avgturnt->setGeometry(QRect(630, 210, 113, 26));
        close = new QPushButton(pri);
        close->setObjectName("close");
        close->setGeometry(QRect(360, 550, 93, 29));

        retranslateUi(pri);

        QMetaObject::connectSlotsByName(pri);
    } // setupUi

    void retranslateUi(QDialog *pri)
    {
        pri->setWindowTitle(QCoreApplication::translate("pri", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pri", "preemptive Priority", nullptr));
        add_4->setText(QCoreApplication::translate("pri", "add", nullptr));
        label_3->setText(QCoreApplication::translate("pri", "Burst Time", nullptr));
        label_2->setText(QCoreApplication::translate("pri", "Priority", nullptr));
        label_5->setText(QCoreApplication::translate("pri", "average turnaround time", nullptr));
        label_4->setText(QCoreApplication::translate("pri", "average waiting time", nullptr));
        close->setText(QCoreApplication::translate("pri", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pri: public Ui_pri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRI_H

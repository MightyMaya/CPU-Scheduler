/********************************************************************************
** Form generated from reading UI file 'sjf.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJF_H
#define UI_SJF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sjf
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *burst_3;
    QLabel *BurstTime_3;
    QPushButton *add_3;
    QPushButton *close;
    QLabel *title;
    QLabel *label_5;
    QLineEdit *avgturnt_2;
    QLineEdit *avgturnt;
    QLabel *label;

    void setupUi(QDialog *sjf)
    {
        if (sjf->objectName().isEmpty())
            sjf->setObjectName("sjf");
        sjf->resize(800, 600);
        layoutWidget = new QWidget(sjf);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 0, 141, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        burst_3 = new QSpinBox(layoutWidget);
        burst_3->setObjectName("burst_3");

        horizontalLayout_5->addWidget(burst_3);

        BurstTime_3 = new QLabel(layoutWidget);
        BurstTime_3->setObjectName("BurstTime_3");

        horizontalLayout_5->addWidget(BurstTime_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        add_3 = new QPushButton(layoutWidget);
        add_3->setObjectName("add_3");

        verticalLayout_3->addWidget(add_3);

        close = new QPushButton(sjf);
        close->setObjectName("close");
        close->setGeometry(QRect(360, 550, 93, 29));
        title = new QLabel(sjf);
        title->setObjectName("title");
        title->setGeometry(QRect(410, 30, 371, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title->setFont(font);
        label_5 = new QLabel(sjf);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 160, 171, 20));
        avgturnt_2 = new QLineEdit(sjf);
        avgturnt_2->setObjectName("avgturnt_2");
        avgturnt_2->setGeometry(QRect(180, 160, 113, 26));
        avgturnt = new QLineEdit(sjf);
        avgturnt->setObjectName("avgturnt");
        avgturnt->setGeometry(QRect(620, 160, 113, 26));
        label = new QLabel(sjf);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 160, 161, 20));

        retranslateUi(sjf);

        QMetaObject::connectSlotsByName(sjf);
    } // setupUi

    void retranslateUi(QDialog *sjf)
    {
        sjf->setWindowTitle(QCoreApplication::translate("sjf", "Dialog", nullptr));
        BurstTime_3->setText(QCoreApplication::translate("sjf", "Burst Time", nullptr));
        add_3->setText(QCoreApplication::translate("sjf", "Add", nullptr));
        close->setText(QCoreApplication::translate("sjf", "Close", nullptr));
        title->setText(QCoreApplication::translate("sjf", "SJF Preemptive", nullptr));
        label_5->setText(QCoreApplication::translate("sjf", "average turnaround time", nullptr));
        label->setText(QCoreApplication::translate("sjf", "average waiting time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjf: public Ui_sjf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJF_H

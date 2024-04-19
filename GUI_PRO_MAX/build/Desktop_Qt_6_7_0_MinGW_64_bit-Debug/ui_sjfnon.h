/********************************************************************************
** Form generated from reading UI file 'sjfnon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJFNON_H
#define UI_SJFNON_H

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

class Ui_sjfnon
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *burst_2;
    QLabel *BurstTime_2;
    QPushButton *add_2;
    QLabel *title;
    QPushButton *close;
    QLabel *label_5;
    QLineEdit *avgturnt_2;
    QLineEdit *avgturnt;
    QLabel *label;

    void setupUi(QDialog *sjfnon)
    {
        if (sjfnon->objectName().isEmpty())
            sjfnon->setObjectName("sjfnon");
        sjfnon->resize(800, 600);
        layoutWidget = new QWidget(sjfnon);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 0, 141, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        burst_2 = new QSpinBox(layoutWidget);
        burst_2->setObjectName("burst_2");

        horizontalLayout_4->addWidget(burst_2);

        BurstTime_2 = new QLabel(layoutWidget);
        BurstTime_2->setObjectName("BurstTime_2");

        horizontalLayout_4->addWidget(BurstTime_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        add_2 = new QPushButton(layoutWidget);
        add_2->setObjectName("add_2");

        verticalLayout_2->addWidget(add_2);

        title = new QLabel(sjfnon);
        title->setObjectName("title");
        title->setGeometry(QRect(400, 30, 371, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title->setFont(font);
        close = new QPushButton(sjfnon);
        close->setObjectName("close");
        close->setGeometry(QRect(350, 550, 93, 29));
        label_5 = new QLabel(sjfnon);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 160, 171, 20));
        avgturnt_2 = new QLineEdit(sjfnon);
        avgturnt_2->setObjectName("avgturnt_2");
        avgturnt_2->setGeometry(QRect(200, 160, 113, 26));
        avgturnt = new QLineEdit(sjfnon);
        avgturnt->setObjectName("avgturnt");
        avgturnt->setGeometry(QRect(640, 160, 113, 26));
        label = new QLabel(sjfnon);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 160, 161, 20));

        retranslateUi(sjfnon);

        QMetaObject::connectSlotsByName(sjfnon);
    } // setupUi

    void retranslateUi(QDialog *sjfnon)
    {
        sjfnon->setWindowTitle(QCoreApplication::translate("sjfnon", "Dialog", nullptr));
        BurstTime_2->setText(QCoreApplication::translate("sjfnon", "Burst Time", nullptr));
        add_2->setText(QCoreApplication::translate("sjfnon", "Add", nullptr));
        title->setText(QCoreApplication::translate("sjfnon", "SJF Non-Preemptive", nullptr));
        close->setText(QCoreApplication::translate("sjfnon", "Close", nullptr));
        label_5->setText(QCoreApplication::translate("sjfnon", "average turnaround time", nullptr));
        label->setText(QCoreApplication::translate("sjfnon", "average waiting time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjfnon: public Ui_sjfnon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJFNON_H

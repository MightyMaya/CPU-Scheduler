/********************************************************************************
** Form generated from reading UI file 'sjfnon.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sjfnon
{
public:
    QLabel *title;
    QPushButton *close;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *ID;
    QLabel *PID;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *burst;
    QLabel *BurstTime;
    QPushButton *add;

    void setupUi(QDialog *sjfnon)
    {
        if (sjfnon->objectName().isEmpty())
            sjfnon->setObjectName("sjfnon");
        sjfnon->resize(963, 543);
        title = new QLabel(sjfnon);
        title->setObjectName("title");
        title->setGeometry(QRect(170, 30, 371, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title->setFont(font);
        close = new QPushButton(sjfnon);
        close->setObjectName("close");
        close->setGeometry(QRect(310, 380, 93, 29));
        widget = new QWidget(sjfnon);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 180, 141, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ID = new QSpinBox(widget);
        ID->setObjectName("ID");

        horizontalLayout->addWidget(ID);

        PID = new QLabel(widget);
        PID->setObjectName("PID");

        horizontalLayout->addWidget(PID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        burst = new QSpinBox(widget);
        burst->setObjectName("burst");

        horizontalLayout_2->addWidget(burst);

        BurstTime = new QLabel(widget);
        BurstTime->setObjectName("BurstTime");

        horizontalLayout_2->addWidget(BurstTime);


        verticalLayout->addLayout(horizontalLayout_2);

        add = new QPushButton(widget);
        add->setObjectName("add");

        verticalLayout->addWidget(add);


        retranslateUi(sjfnon);

        QMetaObject::connectSlotsByName(sjfnon);
    } // setupUi

    void retranslateUi(QDialog *sjfnon)
    {
        sjfnon->setWindowTitle(QCoreApplication::translate("sjfnon", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("sjfnon", "SJF Non-Preemptive", nullptr));
        close->setText(QCoreApplication::translate("sjfnon", "Close", nullptr));
        PID->setText(QCoreApplication::translate("sjfnon", "Process ID", nullptr));
        BurstTime->setText(QCoreApplication::translate("sjfnon", "Burst Time", nullptr));
        add->setText(QCoreApplication::translate("sjfnon", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjfnon: public Ui_sjfnon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJFNON_H

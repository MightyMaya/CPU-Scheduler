/********************************************************************************
** Form generated from reading UI file 'fcfs.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCFS_H
#define UI_FCFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fcfs
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *avgturnt_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLineEdit *avgturnt;

    void setupUi(QDialog *fcfs)
    {
        if (fcfs->objectName().isEmpty())
            fcfs->setObjectName("fcfs");
        fcfs->resize(800, 600);
        layoutWidget = new QWidget(fcfs);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 741, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        horizontalLayout->addWidget(spinBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        label_4 = new QLabel(fcfs);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 100, 751, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(77);
        label_4->setFont(font);
        widget = new QWidget(fcfs);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 250, 741, 31));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        avgturnt_2 = new QLineEdit(widget);
        avgturnt_2->setObjectName("avgturnt_2");

        horizontalLayout_3->addWidget(avgturnt_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        avgturnt = new QLineEdit(widget);
        avgturnt->setObjectName("avgturnt");

        horizontalLayout_3->addWidget(avgturnt);


        retranslateUi(fcfs);

        QMetaObject::connectSlotsByName(fcfs);
    } // setupUi

    void retranslateUi(QDialog *fcfs)
    {
        fcfs->setWindowTitle(QCoreApplication::translate("fcfs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fcfs", "burst time:", nullptr));
        pushButton->setText(QCoreApplication::translate("fcfs", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("fcfs", "FCFS", nullptr));
        label_2->setText(QCoreApplication::translate("fcfs", "average waiting time", nullptr));
        label_5->setText(QCoreApplication::translate("fcfs", "average turnaround time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fcfs: public Ui_fcfs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS_H

/********************************************************************************
** Form generated from reading UI file 'fcfs2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCFS2_H
#define UI_FCFS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FCFS2
{
public:
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;

    void setupUi(QDialog *FCFS2)
    {
        if (FCFS2->objectName().isEmpty())
            FCFS2->setObjectName("FCFS2");
        FCFS2->resize(800, 600);
        pushButton_2 = new QPushButton(FCFS2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 250, 93, 29));
        layoutWidget = new QWidget(FCFS2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 10, 621, 71));
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

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        layoutWidget_2 = new QWidget(FCFS2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 250, 501, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        spinBox_2 = new QSpinBox(layoutWidget_2);
        spinBox_2->setObjectName("spinBox_2");

        horizontalLayout_3->addWidget(spinBox_2);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        spinBox_3 = new QSpinBox(layoutWidget_2);
        spinBox_3->setObjectName("spinBox_3");

        horizontalLayout_4->addWidget(spinBox_3);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        label_6 = new QLabel(FCFS2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 100, 751, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(77);
        label_6->setFont(font);

        retranslateUi(FCFS2);

        QMetaObject::connectSlotsByName(FCFS2);
    } // setupUi

    void retranslateUi(QDialog *FCFS2)
    {
        FCFS2->setWindowTitle(QCoreApplication::translate("FCFS2", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FCFS2", "Add", nullptr));
        label->setText(QCoreApplication::translate("FCFS2", "number of processes", nullptr));
        pushButton->setText(QCoreApplication::translate("FCFS2", "choose", nullptr));
        label_4->setText(QCoreApplication::translate("FCFS2", "burst time(sec):", nullptr));
        label_5->setText(QCoreApplication::translate("FCFS2", "arrival time(sec):", nullptr));
        label_6->setText(QCoreApplication::translate("FCFS2", "FCFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFS2: public Ui_FCFS2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS2_H

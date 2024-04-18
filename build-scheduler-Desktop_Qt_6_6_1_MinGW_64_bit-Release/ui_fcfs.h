/********************************************************************************
** Form generated from reading UI file 'fcfs.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FCFS
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *FCFS)
    {
        if (FCFS->objectName().isEmpty())
            FCFS->setObjectName("FCFS");
        FCFS->resize(400, 300);
        widget = new QWidget(FCFS);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 371, 31));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        horizontalLayout->addWidget(spinBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(FCFS);

        QMetaObject::connectSlotsByName(FCFS);
    } // setupUi

    void retranslateUi(QDialog *FCFS)
    {
        FCFS->setWindowTitle(QCoreApplication::translate("FCFS", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FCFS", "burst time:", nullptr));
        pushButton->setText(QCoreApplication::translate("FCFS", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFS: public Ui_FCFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS_H

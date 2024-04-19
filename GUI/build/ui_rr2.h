/********************************************************************************
** Form generated from reading UI file 'rr2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR2_H
#define UI_RR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RR2
{
public:
    QPushButton *pushButton;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label;
    QSpinBox *quantum;
    QSplitter *splitter_2;
    QLabel *label_2;
    QSpinBox *num;
    QSplitter *splitter_3;
    QLabel *label_5;
    QSpinBox *btime_2;
    QSplitter *splitter_4;
    QLabel *label_4;
    QSpinBox *btime;
    QSplitter *splitter_5;
    QLabel *label_7;
    QSpinBox *priority;

    void setupUi(QDialog *RR2)
    {
        if (RR2->objectName().isEmpty())
            RR2->setObjectName("RR2");
        RR2->resize(627, 485);
        pushButton = new QPushButton(RR2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 440, 93, 29));
        label_6 = new QLabel(RR2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 0, 531, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(43);
        label_6->setFont(font);
        widget = new QWidget(RR2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 90, 261, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        quantum = new QSpinBox(splitter);
        quantum->setObjectName("quantum");
        splitter->addWidget(quantum);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName("label_2");
        splitter_2->addWidget(label_2);
        num = new QSpinBox(splitter_2);
        num->setObjectName("num");
        splitter_2->addWidget(num);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(widget);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_3);
        label_5->setObjectName("label_5");
        splitter_3->addWidget(label_5);
        btime_2 = new QSpinBox(splitter_3);
        btime_2->setObjectName("btime_2");
        splitter_3->addWidget(btime_2);

        verticalLayout->addWidget(splitter_3);

        splitter_4 = new QSplitter(widget);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName("label_4");
        splitter_4->addWidget(label_4);
        btime = new QSpinBox(splitter_4);
        btime->setObjectName("btime");
        splitter_4->addWidget(btime);

        verticalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(widget);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_5);
        label_7->setObjectName("label_7");
        splitter_5->addWidget(label_7);
        priority = new QSpinBox(splitter_5);
        priority->setObjectName("priority");
        splitter_5->addWidget(priority);

        verticalLayout->addWidget(splitter_5);


        retranslateUi(RR2);

        QMetaObject::connectSlotsByName(RR2);
    } // setupUi

    void retranslateUi(QDialog *RR2)
    {
        RR2->setWindowTitle(QCoreApplication::translate("RR2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RR2", "add", nullptr));
        label_6->setText(QCoreApplication::translate("RR2", "NOT LIVE", nullptr));
        label->setText(QCoreApplication::translate("RR2", "Time Quantum", nullptr));
        label_2->setText(QCoreApplication::translate("RR2", "number of processes", nullptr));
        label_5->setText(QCoreApplication::translate("RR2", "arrival Time", nullptr));
        label_4->setText(QCoreApplication::translate("RR2", "Burst Time", nullptr));
        label_7->setText(QCoreApplication::translate("RR2", "priority", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR2: public Ui_RR2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR2_H

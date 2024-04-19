/********************************************************************************
** Form generated from reading UI file 'live.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVE_H
#define UI_LIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_live
{
public:
    QPushButton *add;
    QLabel *label_4;
    QSplitter *splitter;
    QSpinBox *BurstTime;
    QLabel *label_2;
    QSpinBox *quantum;
    QLabel *label_3;
    QSpinBox *priority;
    QLabel *label_6;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *avgturnt_2;
    QLabel *label_5;
    QLineEdit *avgturnt;

    void setupUi(QDialog *live)
    {
        if (live->objectName().isEmpty())
            live->setObjectName("live");
        live->resize(800, 600);
        add = new QPushButton(live);
        add->setObjectName("add");
        add->setGeometry(QRect(350, 230, 93, 29));
        label_4 = new QLabel(live);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, -20, 751, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(55);
        label_4->setFont(font);
        splitter = new QSplitter(live);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(40, 180, 771, 26));
        splitter->setOrientation(Qt::Horizontal);
        BurstTime = new QSpinBox(splitter);
        BurstTime->setObjectName("BurstTime");
        splitter->addWidget(BurstTime);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        splitter->addWidget(label_2);
        quantum = new QSpinBox(splitter);
        quantum->setObjectName("quantum");
        splitter->addWidget(quantum);
        label_3 = new QLabel(splitter);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(9);
        label_3->setFont(font1);
        splitter->addWidget(label_3);
        priority = new QSpinBox(splitter);
        priority->setObjectName("priority");
        splitter->addWidget(priority);
        label_6 = new QLabel(splitter);
        label_6->setObjectName("label_6");
        splitter->addWidget(label_6);
        splitter_2 = new QSplitter(live);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(10, 110, 751, 26));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName("label");
        splitter_2->addWidget(label);
        avgturnt_2 = new QLineEdit(splitter_2);
        avgturnt_2->setObjectName("avgturnt_2");
        splitter_2->addWidget(avgturnt_2);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName("label_5");
        splitter_2->addWidget(label_5);
        avgturnt = new QLineEdit(splitter_2);
        avgturnt->setObjectName("avgturnt");
        splitter_2->addWidget(avgturnt);

        retranslateUi(live);

        QMetaObject::connectSlotsByName(live);
    } // setupUi

    void retranslateUi(QDialog *live)
    {
        live->setWindowTitle(QCoreApplication::translate("live", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("live", "add", nullptr));
        label_4->setText(QCoreApplication::translate("live", "LIVE UI", nullptr));
        label_2->setText(QCoreApplication::translate("live", "Burst Time", nullptr));
        label_3->setText(QCoreApplication::translate("live", "Quantum Time", nullptr));
        label_6->setText(QCoreApplication::translate("live", "Priority", nullptr));
        label->setText(QCoreApplication::translate("live", "average waiting time", nullptr));
        label_5->setText(QCoreApplication::translate("live", "average turnaround time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class live: public Ui_live {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVE_H

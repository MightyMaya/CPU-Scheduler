/********************************************************************************
** Form generated from reading UI file 'notlive.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTLIVE_H
#define UI_NOTLIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_notlive
{
public:
    QPushButton *add;
    QLabel *label_4;
    QSplitter *splitter_here;
    QSpinBox *btime;
    QLabel *label_2;
    QSpinBox *quantum;
    QLabel *quantum_label;
    QSpinBox *priority;
    QLabel *priority_label;
    QSpinBox *num;
    QLabel *label_5;
    QSpinBox *atime;
    QLabel *label;

    void setupUi(QDialog *notlive)
    {
        if (notlive->objectName().isEmpty())
            notlive->setObjectName("notlive");
        notlive->resize(800, 600);
        add = new QPushButton(notlive);
        add->setObjectName("add");
        add->setGeometry(QRect(360, 530, 93, 29));
        label_4 = new QLabel(notlive);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 0, 751, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(55);
        label_4->setFont(font);
        splitter_here = new QSplitter(notlive);
        splitter_here->setObjectName("splitter_here");
        splitter_here->setGeometry(QRect(50, 170, 771, 26));
        splitter_here->setOrientation(Qt::Horizontal);
        btime = new QSpinBox(splitter_here);
        btime->setObjectName("btime");
        splitter_here->addWidget(btime);
        label_2 = new QLabel(splitter_here);
        label_2->setObjectName("label_2");
        splitter_here->addWidget(label_2);
        quantum = new QSpinBox(splitter_here);
        quantum->setObjectName("quantum");
        splitter_here->addWidget(quantum);
        quantum_label = new QLabel(splitter_here);
        quantum_label->setObjectName("quantum_label");
        QFont font1;
        font1.setPointSize(9);
        quantum_label->setFont(font1);
        splitter_here->addWidget(quantum_label);
        priority = new QSpinBox(splitter_here);
        priority->setObjectName("priority");
        splitter_here->addWidget(priority);
        priority_label = new QLabel(splitter_here);
        priority_label->setObjectName("priority_label");
        splitter_here->addWidget(priority_label);
        num = new QSpinBox(notlive);
        num->setObjectName("num");
        num->setGeometry(QRect(490, 250, 92, 26));
        label_5 = new QLabel(notlive);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 250, 213, 26));
        label_5->setFont(font1);
        atime = new QSpinBox(notlive);
        atime->setObjectName("atime");
        atime->setGeometry(QRect(490, 310, 92, 26));
        label = new QLabel(notlive);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 320, 121, 20));

        retranslateUi(notlive);

        QMetaObject::connectSlotsByName(notlive);
    } // setupUi

    void retranslateUi(QDialog *notlive)
    {
        notlive->setWindowTitle(QCoreApplication::translate("notlive", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("notlive", "add", nullptr));
        label_4->setText(QCoreApplication::translate("notlive", "NotLIVE UIs", nullptr));
        label_2->setText(QCoreApplication::translate("notlive", "Burst Time", nullptr));
        quantum_label->setText(QCoreApplication::translate("notlive", "Quantum Time", nullptr));
        priority_label->setText(QCoreApplication::translate("notlive", "Priority", nullptr));
        label_5->setText(QCoreApplication::translate("notlive", "Number of processes", nullptr));
        label->setText(QCoreApplication::translate("notlive", "arrival time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notlive: public Ui_notlive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTLIVE_H

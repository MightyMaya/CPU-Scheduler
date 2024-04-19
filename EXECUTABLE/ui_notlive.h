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
    QSplitter *splitter;
    QSpinBox *btime;
    QLabel *label_2;
    QSpinBox *quantum;
    QLabel *label_3;
    QSpinBox *priority;
    QLabel *label_6;
    QPushButton *close;
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
        add->setGeometry(QRect(90, 530, 93, 29));
        label_4 = new QLabel(notlive);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 0, 751, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(55);
        label_4->setFont(font);
        splitter = new QSplitter(notlive);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(50, 170, 771, 26));
        splitter->setOrientation(Qt::Horizontal);
        btime = new QSpinBox(splitter);
        btime->setObjectName("btime");
        splitter->addWidget(btime);
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
        close = new QPushButton(notlive);
        close->setObjectName("close");
        close->setGeometry(QRect(360, 550, 93, 29));
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
        label_4->setText(QCoreApplication::translate("notlive", "NotLIVE UI", nullptr));
        label_2->setText(QCoreApplication::translate("notlive", "Burst Time", nullptr));
        label_3->setText(QCoreApplication::translate("notlive", "Quantum Time", nullptr));
        label_6->setText(QCoreApplication::translate("notlive", "Priority", nullptr));
        close->setText(QCoreApplication::translate("notlive", "close", nullptr));
        label_5->setText(QCoreApplication::translate("notlive", "Number of processes", nullptr));
        label->setText(QCoreApplication::translate("notlive", "arrival time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notlive: public Ui_notlive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTLIVE_H

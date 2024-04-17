/********************************************************************************
** Form generated from reading UI file 'sjfnl.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJFNL_H
#define UI_SJFNL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SJFNL
{
public:
    QSpinBox *Burst;
    QSpinBox *spinBox_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *SJFNL)
    {
        if (SJFNL->objectName().isEmpty())
            SJFNL->setObjectName("SJFNL");
        SJFNL->resize(790, 646);
        Burst = new QSpinBox(SJFNL);
        Burst->setObjectName("Burst");
        Burst->setGeometry(QRect(50, 40, 42, 26));
        spinBox_2 = new QSpinBox(SJFNL);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(50, 90, 42, 26));
        label = new QLabel(SJFNL);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 40, 63, 20));
        label_2 = new QLabel(SJFNL);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 90, 63, 20));
        pushButton = new QPushButton(SJFNL);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 130, 93, 29));
        label_3 = new QLabel(SJFNL);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 30, 441, 181));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(50);
        label_3->setFont(font);

        retranslateUi(SJFNL);

        QMetaObject::connectSlotsByName(SJFNL);
    } // setupUi

    void retranslateUi(QDialog *SJFNL)
    {
        SJFNL->setWindowTitle(QCoreApplication::translate("SJFNL", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SJFNL", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SJFNL", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("SJFNL", "add", nullptr));
        label_3->setText(QCoreApplication::translate("SJFNL", "SJFNON", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SJFNL: public Ui_SJFNL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJFNL_H

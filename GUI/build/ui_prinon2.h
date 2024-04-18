/********************************************************************************
** Form generated from reading UI file 'prinon2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINON2_H
#define UI_PRINON2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_prinon2
{
public:
    QSpinBox *spinBox;
    QLabel *label_3;
    QPushButton *choose;
    QSpinBox *btime_44;
    QLabel *label_4;
    QSpinBox *num;
    QLabel *label;
    QLabel *label_5;
    QSpinBox *btime;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *prinon2)
    {
        if (prinon2->objectName().isEmpty())
            prinon2->setObjectName("prinon2");
        prinon2->resize(800, 600);
        spinBox = new QSpinBox(prinon2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(360, 370, 42, 26));
        label_3 = new QLabel(prinon2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 330, 63, 20));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        choose = new QPushButton(prinon2);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(482, 110, 111, 31));
        QFont font1;
        font1.setPointSize(10);
        choose->setFont(font1);
        btime_44 = new QSpinBox(prinon2);
        btime_44->setObjectName("btime_44");
        btime_44->setGeometry(QRect(50, 370, 42, 26));
        label_4 = new QLabel(prinon2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(680, 330, 111, 20));
        label_4->setFont(font);
        num = new QSpinBox(prinon2);
        num->setObjectName("num");
        num->setGeometry(QRect(350, 110, 42, 26));
        label = new QLabel(prinon2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 190, 971, 111));
        label->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(44);
        label->setFont(font2);
        label_5 = new QLabel(prinon2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 100, 211, 41));
        QFont font3;
        font3.setPointSize(14);
        label_5->setFont(font3);
        btime = new QSpinBox(prinon2);
        btime->setObjectName("btime");
        btime->setGeometry(QRect(690, 370, 42, 26));
        pushButton = new QPushButton(prinon2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 470, 93, 41));
        pushButton->setFont(font);
        label_2 = new QLabel(prinon2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 330, 111, 20));
        label_2->setFont(font);

        retranslateUi(prinon2);

        QMetaObject::connectSlotsByName(prinon2);
    } // setupUi

    void retranslateUi(QDialog *prinon2)
    {
        prinon2->setWindowTitle(QCoreApplication::translate("prinon2", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("prinon2", "Priority", nullptr));
        choose->setText(QCoreApplication::translate("prinon2", "choose", nullptr));
        label_4->setText(QCoreApplication::translate("prinon2", "Burst Time", nullptr));
        label->setText(QCoreApplication::translate("prinon2", "Nonpreemptive Priority", nullptr));
        label_5->setText(QCoreApplication::translate("prinon2", "Number of process:", nullptr));
        pushButton->setText(QCoreApplication::translate("prinon2", "add", nullptr));
        label_2->setText(QCoreApplication::translate("prinon2", "Arrival time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prinon2: public Ui_prinon2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINON2_H

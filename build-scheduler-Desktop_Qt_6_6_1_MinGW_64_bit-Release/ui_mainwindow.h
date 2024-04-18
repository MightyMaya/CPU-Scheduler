/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, -40, 791, 261));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(60);
        label->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 180, 311, 184));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName("comboBox_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setPointSize(12);
        pushButton->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CPU Scheduler", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scheduler Type", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "live or not", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

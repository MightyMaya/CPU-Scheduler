/********************************************************************************
** Form generated from reading UI file 'fcfsl.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCFSL_H
#define UI_FCFSL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_FCFSL
{
public:

    void setupUi(QDialog *FCFSL)
    {
        if (FCFSL->objectName().isEmpty())
            FCFSL->setObjectName("FCFSL");
        FCFSL->resize(736, 626);

        retranslateUi(FCFSL);

        QMetaObject::connectSlotsByName(FCFSL);
    } // setupUi

    void retranslateUi(QDialog *FCFSL)
    {
        FCFSL->setWindowTitle(QCoreApplication::translate("FCFSL", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFSL: public Ui_FCFSL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFSL_H

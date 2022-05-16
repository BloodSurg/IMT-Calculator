/********************************************************************************
** Form generated from reading UI file 'IMTCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMTCALCULATOR_H
#define UI_IMTCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMTCalculatorClass
{
public:

    void setupUi(QWidget *IMTCalculatorClass)
    {
        if (IMTCalculatorClass->objectName().isEmpty())
            IMTCalculatorClass->setObjectName(QString::fromUtf8("IMTCalculatorClass"));
        IMTCalculatorClass->resize(600, 400);

        retranslateUi(IMTCalculatorClass);

        QMetaObject::connectSlotsByName(IMTCalculatorClass);
    } // setupUi

    void retranslateUi(QWidget *IMTCalculatorClass)
    {
        IMTCalculatorClass->setWindowTitle(QCoreApplication::translate("IMTCalculatorClass", "IMTCalculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMTCalculatorClass: public Ui_IMTCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMTCALCULATOR_H

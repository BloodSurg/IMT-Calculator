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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMTCalculatorClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_height;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer;
    QLabel *label_weight_1;
    QLabel *label_weight;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_result;

    void setupUi(QWidget *IMTCalculatorClass)
    {
        if (IMTCalculatorClass->objectName().isEmpty())
            IMTCalculatorClass->setObjectName(QString::fromUtf8("IMTCalculatorClass"));
        IMTCalculatorClass->resize(348, 146);
        verticalLayout = new QVBoxLayout(IMTCalculatorClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_height = new QLabel(IMTCalculatorClass);
        label_height->setObjectName(QString::fromUtf8("label_height"));

        gridLayout->addWidget(label_height, 0, 0, 1, 1);

        horizontalSlider = new QSlider(IMTCalculatorClass);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setMinimum(300);
        horizontalSlider->setMaximum(1200);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(50);

        gridLayout->addWidget(horizontalSlider, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_weight_1 = new QLabel(IMTCalculatorClass);
        label_weight_1->setObjectName(QString::fromUtf8("label_weight_1"));

        gridLayout->addWidget(label_weight_1, 1, 0, 1, 1);

        label_weight = new QLabel(IMTCalculatorClass);
        label_weight->setObjectName(QString::fromUtf8("label_weight"));

        gridLayout->addWidget(label_weight, 1, 3, 1, 1);

        pushButton = new QPushButton(IMTCalculatorClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        comboBox = new QComboBox(IMTCalculatorClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(10);

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        label_result = new QLabel(IMTCalculatorClass);
        label_result->setObjectName(QString::fromUtf8("label_result"));

        gridLayout->addWidget(label_result, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(IMTCalculatorClass);

        QMetaObject::connectSlotsByName(IMTCalculatorClass);
    } // setupUi

    void retranslateUi(QWidget *IMTCalculatorClass)
    {
        IMTCalculatorClass->setWindowTitle(QCoreApplication::translate("IMTCalculatorClass", "IMTCalculator", nullptr));
        label_height->setText(QCoreApplication::translate("IMTCalculatorClass", "Height (cm):", nullptr));
        label_weight_1->setText(QCoreApplication::translate("IMTCalculatorClass", "Weight (kg):", nullptr));
        label_weight->setText(QCoreApplication::translate("IMTCalculatorClass", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("IMTCalculatorClass", "Calculate", nullptr));
        label_result->setText(QCoreApplication::translate("IMTCalculatorClass", "Your IMT is: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMTCalculatorClass: public Ui_IMTCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMTCALCULATOR_H

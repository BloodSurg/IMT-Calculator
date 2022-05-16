#pragma once

#include <QtWidgets>
#include "ui_IMTCalculator.h"

class IMTCalculator : public QWidget
{
	Q_OBJECT

public:
	IMTCalculator(QWidget* parent = Q_NULLPTR);

private:
	Ui::IMTCalculatorClass ui;

	//Слоты
	void onWeightChange();
	void onHeightChange();
	void onCalculate();

	//Переменные класса
	double weight, height, result;
};

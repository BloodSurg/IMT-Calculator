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

	void onWeightChange();
	void onHeightChange();
	void onCalculate();


	double weight, height, result;
};

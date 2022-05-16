#include "IMTCalculator.h"

IMTCalculator::IMTCalculator(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//Заполнение комбобокса
	for (int i = 120; i <= 220; i++)
		ui.comboBox->addItem(QString::number(i));

	//Коннекты
	connect(ui.horizontalSlider, &QSlider::valueChanged, this, &IMTCalculator::onWeightChange);
	connect(ui.pushButton, &QPushButton::clicked, this, &IMTCalculator::onCalculate);
	connect(ui.comboBox, &QComboBox::currentTextChanged, this, &IMTCalculator::onHeightChange);

	//Задача начальных значений
	onWeightChange();
	onHeightChange();
}

//Изменение значения веса
void IMTCalculator::onWeightChange()
{
	//Перевод значения веса из int в double
	weight = ui.horizontalSlider->value();	//Диапазон слайдера 300-1200 (int)
	weight /= 10;	//Диапазон значений веса 30.0-120.0 (double)

	ui.label_weight->setText(QString::number(weight, 'f', 1) + " kg");
}

//Изменение значения роста
void IMTCalculator::onHeightChange()
{
	//Перевод роста из см в м
	height = ui.comboBox->currentText().toDouble() / 100;
}

//Расчет ИМТ
void IMTCalculator::onCalculate()
{
	result = weight / (height * height);
	//Вывод результата
	ui.label_result->setText("Your IMT is: " + QString::number(result, 'f', 2));
}



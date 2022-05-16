#include "IMTCalculator.h"

IMTCalculator::IMTCalculator(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	for (int i = 120; i <= 220; i++)
		ui.comboBox->addItem(QString::number(i));

	connect(ui.horizontalSlider, &QSlider::valueChanged, this, &IMTCalculator::onWeightChange);
	connect(ui.pushButton, &QPushButton::clicked, this, &IMTCalculator::onCalculate);
	connect(ui.comboBox, &QComboBox::currentTextChanged, this, &IMTCalculator::onHeightChange);

	onWeightChange();
	onHeightChange();
}

void IMTCalculator::onWeightChange()
{
	weight = ui.horizontalSlider->value();
	weight /= 10;
	ui.label_weight->setText(QString::number(weight, 'f', 1) + " kg");
}
void IMTCalculator::onHeightChange()
{
	height = ui.comboBox->currentText().toDouble() / 100;
}
void IMTCalculator::onCalculate()
{
	result = weight / (height * height);
	ui.label_result->setText("Your IMT is: " + QString::number(result, 'f', 2));
}



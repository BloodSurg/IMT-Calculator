#include "IMTCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IMTCalculator w;
    w.show();
    return a.exec();
}

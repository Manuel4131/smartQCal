#include "smartQCal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    smartQCAL smartqcal;
    smartqcal.show();

    return a.exec();
}

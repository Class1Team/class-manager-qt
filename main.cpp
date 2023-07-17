#include "classmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClassManager w;
    w.show();
    return a.exec();
}

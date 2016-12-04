#include "sketch.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sketch w;
    w.show();
    return a.exec();
}

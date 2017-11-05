#include "integ.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    integ w;
    w.show();

    return a.exec();
}

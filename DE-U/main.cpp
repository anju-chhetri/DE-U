#include "welcome.h"
#include "desktop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome w;
    Desktop d;
    d.showFullScreen();
    return a.exec();
}

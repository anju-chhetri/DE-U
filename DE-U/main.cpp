#include "welcome.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome w;
    w.showFullScreen();
    return a.exec();
}

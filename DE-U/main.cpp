#include "welcome.h"
#include "desktop.h"
#include <QApplication>
welcome *w;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Desktop *d =new Desktop;
     w =new welcome;
     d->showFullScreen();
    return a.exec();
}

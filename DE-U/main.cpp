#include "welcome.h"
#include "desktop.h"
#include <QApplication>
welcome *w; //creating a global welcome pointer
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//creating a QApplication object
   // Desktop *d =new Desktop;
     w =new welcome;
     w->showFullScreen(); //calling the welcome window in fullscreen mode
    return a.exec(); //starting the eventloop.
}

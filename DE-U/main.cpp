#include "welcome.h"
#include "desktop.h"
#include <QApplication>
//#include "z0game.h"
//z0Game *game;
int main(int argc, char *argv[])
{
    //  game = new z0Game;
       // Desktop *d=new Desktop;
    QApplication a(argc, argv);

      welcome *w=new welcome;


    w->showFullScreen();
    return a.exec();
}

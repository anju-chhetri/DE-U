#include "welcome.h"
#include "desktop.h"
#include <QApplication>
#include "z0game.h"
z0Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    welcome w;
//    Desktop d;
//    d.show();
    game = new z0Game;
    game->show();
    return a.exec();
}

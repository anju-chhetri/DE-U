#include "welcome.h"
#include "desktop.h"
#include <QApplication>
#include "z1game.h"
z1Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome w;
    Desktop d;
    d.show();
//    game = new z1Game;
//    game->showFullScreen();
    return a.exec();
}

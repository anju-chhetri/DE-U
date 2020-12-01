#include "z4enemy.h"
#include<stdlib.h>
#include<QGraphicsScene>
#include<QTimer>
#include"z0game.h"
extern z0Game *game;
extern z7GameOver *gameover;

z4Enemy::z4Enemy()
{
int random_num = rand()%1700;
setPos(random_num,-150);

setPixmap(QPixmap(":/Game/Game/airplane1.png"));
setTransformOriginPoint(45,45);
setRotation(180);
QTimer *timer= new QTimer(this);
connect(timer,SIGNAL(timeout()),this,SLOT(move()));
timer->start(70);
}

void z4Enemy::move()
{
    setPos(x(),y()+5);
    if(game->health->getHealth() <=0)
    {

        if(pos().y()>=0)
        {
            delete this;
        }

    }
    if (pos().y()>(950-45))
    {
        game->health->Decrease();
         gameover = new z7GameOver;
         scene()->addItem(gameover);
        scene()->removeItem(this);
        delete this;
    }
}

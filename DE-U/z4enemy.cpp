#include "z4enemy.h"
#include<stdlib.h>
#include<QGraphicsScene>
#include<QTimer>
#include"z0game.h"
extern z0Game *game;
extern z7GameOver *gameover;

z4Enemy::z4Enemy()
{
int random_num = rand()%1700; //creating a enemy inside window only
setPos(random_num,-150);

setPixmap(QPixmap(":/Game/Game/airplane1.png"));
setTransformOriginPoint(45,45); //changing the enemy's origin point and rotating it by 180 degree
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

        if(pos().y()>=-130)
        {
            delete this; //if health is <0  stopping the production of enemy
        }

    }
    if (pos().y()>(950-45))
    {
        game->health->Decrease();
         gameover = new z7GameOver; //if health is <0 display gameover
         scene()->addItem(gameover);
        scene()->removeItem(this);
        delete this;
    }
}

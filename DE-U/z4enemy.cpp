#include "z4enemy.h"
#include<stdlib.h>
#include<QGraphicsScene>
#include<QTimer>
z4Enemy::z4Enemy()
{
int random_num = rand()%1000;
setPos(random_num,0);

setPixmap(QPixmap(":/Game/Game/enemy1.png"));
setTransformOriginPoint(45,45);
setRotation(180);
QTimer *timer = new QTimer(this);
connect(timer,SIGNAL(timeout()),this,SLOT(move()));
timer->start(50);
}

void z4Enemy::move()
{
    setPos(x(),y()+5);
    if (pos().y()>(900-45))
    {
        scene()->removeItem(this);
        delete this;
    }
}

//QTimer *timer = new QTimer(this);
//connect(timer,SIGNAL(timeout()),this,SLOT(move()));
//timer->start(50);

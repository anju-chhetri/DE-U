#include "z3bullet.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include "z4enemy.h"
#include "z1game.h"

extern z1Game *game;
z3Bullet::z3Bullet()
{
setPos(x(),y());
setPixmap(QPixmap(":/Game/Game/bullet.png"));
QTimer *timer = new QTimer(this);
connect(timer, SIGNAL(timeout()),this, SLOT(move()));
timer->start(50);

}

void z3Bullet::move()
{
 QList <QGraphicsItem *> colliding_items = collidingItems();
 for(int i=0, n=colliding_items.size(); i<n; i++)
 {
     if(typeid(*(colliding_items[i]))==typeid (z4Enemy))
     {
         game->score->increase();
         scene()->removeItem(colliding_items[i]);
         scene()->removeItem(this);
         delete colliding_items[i];
         delete this;
         return;

     }
 }
 setPos(x(),y()-10);
 if (pos().y() + 50 < 0){
     scene()->removeItem(this);
     delete this;
 }
}




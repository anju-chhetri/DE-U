#include "z3bullet.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include "z4enemy.h"
#include "z0game.h"
#include <QMediaPlayer>
extern z0Game *game;

z3Bullet::z3Bullet()
{
setPos(x(),y());
setPixmap(QPixmap(":/Game/Game/bullet.png"));
QTimer *timer = new QTimer(this);
connect(timer, SIGNAL(timeout()),this, SLOT(move()));
timer->start(50);/*call move function in every 50ms*/

}

void z3Bullet::move()
{
    /*create a list of graphicsitem*/
 QList <QGraphicsItem *> colliding_items = collidingItems();
 for(int i=0, n=colliding_items.size(); i<n; i++)
 { /*if colliding item with bullet is of type z4enemy condition is true*/
     if(typeid(*(colliding_items[i]))==typeid (z4Enemy))
     {
         QMediaPlayer *collision_song=new QMediaPlayer;
         collision_song->setMedia(QUrl("qrc:/Game/Game/collision.mp3"));
         collision_song->play();
         game->score->increase();
         scene()->removeItem(colliding_items[i]);
         scene()->removeItem(this);

         delete colliding_items[i];//delete the item from list
         delete this; //delete enemy.
         return;

     }
 }
 setPos(x(),y()-10); //move vertically upward
 if (pos().y() + 50 < 0){
     scene()->removeItem(this);
     delete this;//if bullet goes out of screen delete it from memory
 }
}




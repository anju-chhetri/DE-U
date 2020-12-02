#include "z2player.h"
#include<QKeyEvent>
#include <QGraphicsScene>
#include "z3bullet.h"


z2Player::z2Player()
{
    bulletsound->setMedia(QUrl("qrc:/Game/Game/GunFiring.mp3"));
}

void z2Player::keyPressEvent(QKeyEvent *event)
{
   /*event handler for keypressevent*/
if(event->key()==Qt::Key_Left)
{
    if(pos().x()>0){
    setPos(x()-10,y());} //move towards left
}
else if(event->key()==Qt::Key_Right)
{
    if(pos().x()+10<1800){
    setPos(x()+10,y());}//move towards right
}
else if(event->key()==Qt::Key_Space)
{
    z3Bullet *bullet = new z3Bullet();
    bullet->setPos(x()+50,y());//setting the bullet positioin
    scene()->addItem(bullet);


    if(bulletsound->state() == QMediaPlayer::PlayingState)
    {
        bulletsound->setPosition(0); /*if song is playing play it from the begining*/
    }
    else if(bulletsound->state() == QMediaPlayer::StoppedState)
    {
        bulletsound->play();
    }
}

}
void z2Player::spawn() //creating a enemy and adding it to scene
{
 z4Enemy *enemy = new z4Enemy();
 scene()->addItem(enemy);
}

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
if(event->key()==Qt::Key_Left)
{
    setPos(x()-10,y());
}
else if(event->key()==Qt::Key_Right)
{
    setPos(x()+10,y());
}
else if(event->key()==Qt::Key_Space)
{
    z3Bullet *bullet = new z3Bullet();
    bullet->setPos(x(),y());
    scene()->addItem(bullet);


    if(bulletsound->state() == QMediaPlayer::PlayingState)
    {
        bulletsound->setPosition(0);
    }
    else if(bulletsound->state() == QMediaPlayer::StoppedState)
    {
        bulletsound->play();
    }
}

}
void z2Player::spawn()
{
 z4Enemy *enemy = new z4Enemy();
 scene()->addItem(enemy);
}

#include "z1game.h"
#include <QMediaPlayer>
#include <QImage>
#include<QBrush>
#include<QShortcut>
z1Game::z1Game(QWidget *parent)
{

QShortcut *f=new QShortcut(QKeySequence("ctrl+q"),this);
QObject::connect(f,SIGNAL(activated()),this,SLOT(delete_ptr()));
scene = new QGraphicsScene();
scene->setSceneRect(0,0,1000,900);
setBackgroundBrush(QBrush(QImage(":/Game/Game/background.jpg")));

setScene(scene);
setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
setFixedSize(1000,900);

player = new z2Player();
player->setPixmap(QPixmap(":/Game/Game/player1.png"));
player->setPos(height(),width()/2);

player->setFlag(QGraphicsItem::ItemIsFocusable);
player->setFocus();

score = new z5Score();
scene->addItem(score);
health = new z6Health();
health->setPos(health->x(),health->y()+18);
scene->addItem(health);

scene->addItem(player);
timer = new QTimer();
QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
timer->start(2000);

QMediaPlayer *music = new QMediaPlayer;
music->setMedia(QUrl("qrc:/Game/Game/BackgroundMusic.mp3"));
//qDebug()<<
music->play();

}

void z1Game::delete_ptr()
{
    qDebug()<<"delete here!";
    delete this;

}

//QTimer *timer= new QTimer();
//QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
//timer->start(2000);
//show();
//}

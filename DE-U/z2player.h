#ifndef Z2PLAYER_H
#define Z2PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "z3bullet.h"
#include "z4enemy.h"
#include <QMediaPlayer>
class z2Player:public QObject ,public QGraphicsPixmapItem{
    Q_OBJECT


QMediaPlayer *bulletsound = new QMediaPlayer;
public:
z2Player();
    void keyPressEvent(QKeyEvent * event);

public slots:
    void spawn();


};

#endif // Z2PLAYER_H

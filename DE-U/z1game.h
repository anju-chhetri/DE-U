#ifndef Z1GAME_H
#define Z1GAME_H
#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QTimer>
#include "z2player.h"
#include "z5score.h"
#include"z6health.h"
#include<QObject>
class z1Game:public QGraphicsView
{
    Q_OBJECT
public:
    z1Game(QWidget *parent = 0);
    QGraphicsScene *scene;
    z2Player *player;
    z5Score *score;
    z6Health *health;
    void delete_ptr();
};


#endif // Z1GAME_H


#ifndef Z4ENEMY_H
#define Z4ENEMY_H
#include<QGraphicsPixmapItem>
#include <QObject>

class z4Enemy:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    z4Enemy();
public slots:
    void move();
};

#endif // Z4ENEMY_H

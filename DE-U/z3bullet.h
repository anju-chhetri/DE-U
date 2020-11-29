#ifndef Z3BULLET_H
#define Z3BULLET_H
#include "QGraphicsPixmapItem"
#include <QObject>
class z3Bullet: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    z3Bullet();
public slots:
    void move();
};

#endif // Z3BULLET_H

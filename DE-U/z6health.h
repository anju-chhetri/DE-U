#ifndef Z6HEALTH_H
#define Z6HEALTH_H
#include <QGraphicsTextItem>

class z6Health: public QGraphicsTextItem
{
public:
    z6Health(QGraphicsItem *parent=0);
    void Decrease();
    int getHealth();
    void healthupdate();
private:
    int health;
    friend class z0Game;
};

#endif // Z3HEALTH_H


#include "z6health.h"
#include"QFont"
z6Health::z6Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
health = 3;
setPlainText(QString("Health: ")+QString::number(health)); //dispaly health on screen
setDefaultTextColor(Qt::red);
setFont(QFont("times", 16));
}

void z6Health::Decrease()
{
    health--;
    setPlainText(QString("Health: ")+QString::number(health));
}

int z6Health::getHealth()
{
    return health;
}

void z6Health::healthupdate()
{
    setPlainText(QString("Health: ")+QString::number(health));
}

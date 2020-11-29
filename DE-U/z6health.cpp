#include "z6health.h"
#include"QFont"
z6Health::z6Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
health = 3;
setPlainText(QString("Health: ")+QString::number(health));
setDefaultTextColor(Qt::red);
setFont(QFont("times", 16));
}

void z6Health::Decrease()
{
    health--;
    setPlainText(QString("Health: ")+QString::number(health));
}

//int Health::getHealth()
//{
//    return health;
//}

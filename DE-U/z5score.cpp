#include "z5score.h"
#include<QGraphicsTextItem>
#include<QFont>
z5Score::z5Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
score = 0;
setPlainText(QString("Score: ") + QString::number(score)); //display score on screen
setDefaultTextColor(Qt::green);
setFont(QFont("times",16));
}

void z5Score::increase()
{
    score++;
    setPlainText(QString("Score: ")+ QString::number(score));
}

void z5Score::scoreupdate()
{
    setPlainText(QString("Score: ")+ QString::number(score));
}




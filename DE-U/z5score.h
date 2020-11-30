#ifndef Z5SCORE_H
#define Z5SCORE_H
#include<QGraphicsTextItem>


class z5Score: public QGraphicsTextItem
{
public:
    z5Score(QGraphicsItem *parent = 0);
     void increase();
     void scoreupdate();
private:
     int score;
     friend class z0Game;
};

#endif // Z5SCORE_H

//class z6Health: public QGraphicsTextItem
//{
//public:
//    z6Health(QGraphicsItem *parent=0);
//    void Decrease();
//private:
//    int health;
//};

#include "z7gameover.h"
#include "z0game.h"
extern z0Game *game;
z7GameOver::z7GameOver(QGraphicsItem *parent):QGraphicsTextItem(parent)
{



        int k=game->health->getHealth();
        if(k==0){

            setPlainText("Game Over.");
            setFont(QFont("times",42));
            setDefaultTextColor(Qt::darkGreen);
            game->player->setEnabled(false);
            game->make_replay_visible();

//            game->timer->stop();

        }

    }



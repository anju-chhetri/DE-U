#include "z7gameover.h"
#include "z0game.h"
extern z0Game *game;
extern QMediaPlayer *music;
z7GameOver::z7GameOver(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
        int k=game->health->getHealth();
        if(k==0){ //checking for health

            setPlainText("Game Over.");
            setFont(QFont("times",42));
            setPos(900,300);
            setDefaultTextColor(Qt::darkGreen);
            game->player->setEnabled(false); //stoppping the player from taking keyboard input
            game->make_replay_visible();//make replay button visible
            music->stop();


        }

    }



#ifndef Z0GAME_H
#define Z0GAME_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QTimer>
#include "z2player.h"
#include "z5score.h"
#include"z6health.h"
#include "z7gameover.h"
#include <QTimer>
#include <QCloseEvent>
namespace Ui {
class z0Game;
}

class z0Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit z0Game(QWidget *parent = nullptr);
    ~z0Game();
    QGraphicsScene *scene;
    z2Player *player;
    z5Score *score;
    z6Health *health;
    QTimer *timer;
    void closeEvent(QCloseEvent *close);
void make_replay_visible();

public slots:
    void deletecalled();
    void on_replay_clicked();

private:
    Ui::z0Game *ui;
};

#endif // Z0GAME_H

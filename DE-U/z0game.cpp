#include "z0game.h"
#include "ui_z0game.h"
#include <QMediaPlayer>
#include <QImage>
#include<QBrush>
#include<QShortcut>
z7GameOver *gameover;
z0Game::z0Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::z0Game)
{
    ui->setupUi(this);
    QShortcut *f=new QShortcut(QKeySequence("ctrl+q"),this);
    connect(f,SIGNAL(activated()),this,SLOT(deletecalled()));

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/Game/Game/background.jpg")));
    ui->replay->setVisible(false);
//    if(health->health<=0)
//    {
//        ui->replay->setVisible(true);
//    }
//    else if (health->health>0)
//    {
//        ui->replay->setVisible(false);
//    }


    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    player = new z2Player();
    player->setPixmap(QPixmap(":/Game/Game/player1.png"));
    player->setPos(height(),width()/2);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    score = new z5Score();
    scene->addItem(score);
    health = new z6Health();
    health->setPos(health->x(),health->y()+18);
    scene->addItem(health);



    scene->addItem(player);

    timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    QMediaPlayer *music = new QMediaPlayer;
    music->setMedia(QUrl("qrc:/Game/Game/BackgroundMusic.mp3"));
    //qDebug()<<
    music->play();

//    if(health->health<=0)
//    {
//        ui->replay->setVisible(true);
//    }
//    else if (health->health>0)
//    {
//        ui->replay->setVisible(false);
//    }
}

z0Game::~z0Game()
{
    delete ui;
}

void z0Game::make_replay_visible()
{
    ui->replay->setVisible(true);
}




void z0Game::deletecalled()
{
    delete this;

}


void z0Game::on_replay_clicked()
{
//    z0Game *g = new z0Game;
//    delete_ptr();
//    g->showFullScreen();
//    qDebug()<<"delete here!";

    scene->removeItem(gameover);
    score->score = 0;
    score->scoreupdate();
    health->health = 3;
    health->healthupdate();
    player->setEnabled(true);
    ui->replay->setVisible(false);
//    delete game->gameover
}

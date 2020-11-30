#include "z0game.h"
#include "ui_z0game.h"
#include <QMediaPlayer>
#include <QImage>
#include<QBrush>
#include<QShortcut>
z7GameOver *gameover;
QMediaPlayer *music;
z0Game::z0Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::z0Game)
{
    ui->setupUi(this);
    ui->replay->setStyleSheet("color: rgb(0,0,0);font-size: 27px;font-weight:bold;");
    ui->statusbar->setStyleSheet("color: rgb(0,0,0);font-size: 15px;font-weight:bold;");
    ui->statusbar->showMessage("Press ctrl+t to exit the game.",5000);
    QShortcut *f=new QShortcut(QKeySequence("ctrl+q"),this);
    connect(f,SIGNAL(activated()),this,SLOT(deletecalled()));

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1800,950);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/Game/Game/background1.jpg")));
    ui->replay->setVisible(false);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    player = new z2Player();
    player->setPixmap(QPixmap(":/Game/Game/player1.png"));
    player->setPos(1800/2,800);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    score = new z5Score();
    scene->addItem(score);
    health = new z6Health();
    health->setPos(health->x(),health->y()+30);
    scene->addItem(health);
    scene->addItem(player);

    timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    music = new QMediaPlayer;
    music->setMedia(QUrl("qrc:/Game/Game/gameMusic.mp3"));
    //qDebug()<<
    music->play();
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

    scene->removeItem(gameover);
    score->score = 0;
    score->scoreupdate();
    health->health = 3;
    health->healthupdate();
    player->setEnabled(true);
    music->play();
    ui->replay->setVisible(false);
}

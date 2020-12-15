#include "z0game.h"
#include "ui_z0game.h"
#include <QMediaPlayer>
#include <QImage>
#include<QBrush>
#include<QShortcut>
z7GameOver *gameover;
QMediaPlayer *music;
QTimer *timers;
z0Game::z0Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::z0Game)
{
    ui->setupUi(this);
    this->setWindowTitle("Game");
    setWindowIcon(QIcon(":/Game/Game/joystick.png"));
    ui->replay->setStyleSheet("color: rgb(0,0,0);font-size: 27px;font-weight:bold;");
    ui->statusbar->setStyleSheet("color: rgb(0,0,0);font-size: 15px;font-weight:bold;");
    ui->statusbar->showMessage("Press ctrl+t to exit the game.",5000);
    QShortcut *f=new QShortcut(QKeySequence("ctrl+q"),this);//shortcut key for window termination
    connect(f,SIGNAL(activated()),this,SLOT(deletecalled()));//calling deletecalled when inbuild fucntion activated is called

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1800,950); //setting a scene window
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/Game/Game/background1.jpg")));
    ui->replay->setVisible(false);

    ui->graphicsView->setScene(scene);//setting the scene in grahicsview
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //setFixedSize(800,600);

    player = new z2Player(); //creating a player pointer
    player->setPixmap(QPixmap(":/Game/Game/player1.png"));
    player->setPos(1800/2,800); //setting the position of player in window

    player->setFlag(QGraphicsItem::ItemIsFocusable); //setting window focus in player object pointer
    player->setFocus();

    score = new z5Score();
    scene->addItem(score); //adding score to scene
    health = new z6Health();
    health->setPos(health->x(),health->y()+30);
    scene->addItem(health);
    scene->addItem(player);

    timers = new QTimer();
    QObject::connect(timers, SIGNAL(timeout()), player, SLOT(spawn()));
    timers->start(2000);

    music = new QMediaPlayer;
    music->setMedia(QUrl("qrc:/Game/Game/gameMusic.mp3"));/*playing the music*/
    music->play();
}

z0Game::~z0Game()
{
    delete ui;//deleting the ui when the z0Game class is destroyed
}

void z0Game::closeEvent(QCloseEvent *close)//event handler for window close
{
    delete music;
    timers->stop();
    delete this;
}

void z0Game::make_replay_visible()
{
    ui->replay->setVisible(true);
}




void z0Game::deletecalled()
{
    delete music;
    timers->stop();
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

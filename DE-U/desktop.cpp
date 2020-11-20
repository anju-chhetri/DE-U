#include "desktop.h"
#include "ui_desktop.h"
#include <QTimer>
#include<QTime>
#include<QTabBar>
void Desktop::resizeEvent(QResizeEvent *DesktopResize)
{
    QPalette p;
    QPixmap desktopback(":/Images/Images/inner_window.png");
    desktopback=desktopback.scaled(this->size(),Qt::IgnoreAspectRatio);
    p.setBrush(QPalette::Background,desktopback);
    this->setPalette(p);
}

Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    ui->label_time->setStyleSheet("color : rgb(120,124,123);font-size: 32px;");//7,182,191
    ui->label_date->setStyleSheet("color: rgb(120,124,123);font-size : 32px;");
    QTimer *time=new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(time_delay()));
    time->start(500);
    QDate current_date=QDate::currentDate();
    QString string_date=current_date.toString("dddd MMMM yyyy");
    ui->label_date->setText(string_date);
}
Desktop::~Desktop()
{
    delete ui;
}

void Desktop::time_delay()
{
 QTime current_time=QTime::currentTime();
 QString string_time=current_time.toString("hh:mm:ss");
 ui->label_time->setText(string_time);
}

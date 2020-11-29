#include "desktop.h"
#include "ui_desktop.h"
#include <QTimer>
#include<QTime>
#include <QMessageBox>
#include<QTextStream>
#include <QFontDialog>
#include <QShortcut>
#include"z1game.h"
 extern z1Game *game;
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
    to_do_list_button();

}
Desktop::~Desktop()
{
    delete ui;
}

void Desktop::to_do_list()
{/*
    QPixmap background_list(":/Images/Images/Desk.jpg");
    background_list=background_list.scaled(ui->plainTextEdit_list->size(),Qt::IgnoreAspectRatio);
    QPalette background_palette;
    background_palette.setBrush(QPalette::Background,background_list);
    ui->plainTextEdit_list->setPalette(background_palette);*/
    //ui->plainTextEdit_list->setStyleSheet("background-image: url(:/Images/Images/Desk.jpg);");
}

void Desktop::to_do_list_button()
{
    ui->commandLinkButton_append->setStyleSheet("color: rgb(255,255,255);");
    ui->commandLinkButton_font->setStyleSheet("color: rgb(255,255,255);");
    ui->commandLinkButton_new->setStyleSheet("color: rgb(255,255,255);");
    ui->commandLinkButton_view->setStyleSheet("color: rgb(255,255,255);");
    ui->commandLinkButton_undo->setStyleSheet("color: rgb(255,255,255);");
    ui->commandLinkButton_redo->setStyleSheet("color: rgb(255,255,255);");
    QPalette plaintextedit;
    plaintextedit.setColor(QPalette::Text,Qt::white);
    ui->plainTextEdit_list->setPalette(plaintextedit);
    QShortcut *for_list_view=new QShortcut(QKeySequence("ctrl+w"),this);
    connect(for_list_view,SIGNAL(activated()),this,SLOT(on_commandLinkButton_view_clicked()));
    QShortcut *for_list_append=new QShortcut(QKeySequence("ctrl+s"),this);
    connect(for_list_append,SIGNAL(activated()),this,SLOT(on_commandLinkButton_append_clicked()));
    QShortcut *for_list_new=new QShortcut(QKeySequence("ctrl+n"),this);
    connect(for_list_new,SIGNAL(activated()),this,SLOT(on_commandLinkButton_new_clicked()));
    QShortcut *for_list_font=new QShortcut(QKeySequence("ctrl+f"),this);
    connect(for_list_font,SIGNAL(activated()),this,SLOT(on_commandLinkButton_font_clicked()));
    QShortcut *for_list_undo=new QShortcut(QKeySequence("ctrl+u"),this);
    connect(for_list_undo,SIGNAL(activated()),this,SLOT(on_commandLinkButton_undo_clicked()));
    QShortcut *for_list_redo=new QShortcut(QKeySequence("ctrl+r"),this);
    connect(for_list_redo,SIGNAL(activated()),this,SLOT(on_commandLinkButton_redo_clicked()));
}

void Desktop::time_delay()
{
 QTime current_time=QTime::currentTime();
 QString string_time=current_time.toString("hh:mm:ss");
 ui->label_time->setText(string_time);
}


void Desktop::on_commandLinkButton_view_clicked()
{
QFile for_view("C:/Users/anju/OneDrive/Desktop/DE-U/DE-U/Images/to_do_list.txt");
if(!for_view.open(QFile::ReadOnly|QFile::Text)){
    QMessageBox::information(this,"error","to_do_list.txt file does not exist.");
}
QTextStream to_read(&for_view);
QString text=to_read.readAll();
ui->plainTextEdit_list->setPlainText(text);
for_view.close();
}

void Desktop::on_commandLinkButton_append_clicked()
{
QFile append("C:/Users/anju/OneDrive/Desktop/DE-U/DE-U/Images/to_do_list.txt");
if(!append.open(QFile::WriteOnly| QFile::Text)){
QMessageBox::information(this,"error", "to_do_list.txt file does not exist.");
}
QTextStream to_append(&append);
QString text= ui->plainTextEdit_list->toPlainText();
to_append<<text;
to_append.flush();
append.close();
}
void Desktop::on_commandLinkButton_new_clicked()
{
ui->plainTextEdit_list->clear();
QFile for_new("C:/Users/anju/OneDrive/Desktop/DE-U/DE-U/Images/to_do_list.txt");
for_new.resize(0);
if(!for_new.open(QFile::Text|QFile::WriteOnly| QFile::Truncate)){
    QMessageBox::information(this,"error", "to_do_list.txt file does not exist.");
}
QTextStream renew(&for_new);
QString text=ui->plainTextEdit_list->toPlainText();
renew<<text;
renew.flush();
for_new.close();
}


void Desktop::on_commandLinkButton_font_clicked()
{
bool to_check;
QFont font=QFontDialog::getFont(&to_check, this);
if(to_check){
    ui->plainTextEdit_list->setFont(font);
}
else
    return;
}

void Desktop::on_commandLinkButton_undo_clicked()
{
    ui->plainTextEdit_list->undo();
}

void Desktop::on_commandLinkButton_redo_clicked()
{
    ui->plainTextEdit_list->redo();
}

void Desktop::on_pushButton_clicked()
{
    game = new z1Game();
    game ->showFullScreen();
}

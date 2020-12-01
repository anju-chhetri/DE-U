#include "desktop.h"
#include "ui_desktop.h"
#include <QTimer>
#include<QTime>
#include <QMessageBox>
#include<QTextStream>
#include <QFontDialog>
#include <QShortcut>
#include"z0game.h"
#include <welcome.h>

z0Game *game; //creating a global game pointer
extern QMediaPlayer *music; //accessing the global pointer declared in another program
extern welcome *w;
Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    ui->label_time->setStyleSheet("color : rgb(14,215,255);font-size: 32px;");//7,182,191
    ui->label_date->setStyleSheet("color: rgb(14,215,255);font-size : 32px;");//120,124,123
   ui->pushButton_gameplay->setStyleSheet("background-image:url(:/Images/Images/Desk2.jpg);font-weight:bold;color:rgb(255,255,255);");
    QTimer *time=new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(time_delay())); //connecting the inbuild function timeout() with program function time_delay()
    time->start(500);  //accessing the time_delay() funciton in every 0.5seconds
    QDate current_date=QDate::currentDate();
    QString string_date=current_date.toString("dddd MMMM yyyy");
    ui->label_date->setText(string_date);//setting the string_date in label
    to_do_list_button();
    ui->pushButton_desktop_log_out->setStyleSheet("background-image:url(:/Images/Images/inner_window.png);color:rgb(255,255,255);font-size:20px");
    ui->pushButton_restart->setStyleSheet("background-image:url(:/Images/Images/inner_window.png);color:rgb(255,255,255);font-size:20px");

}
Desktop::~Desktop()
{
    delete ui;
}
void Desktop::resizeEvent(QResizeEvent *DesktopResize) //event handler for fullscreen mode.
{
    QPalette p;
    QPixmap desktopback(":/Images/Images/inner_window.png");
    desktopback=desktopback.scaled(this->size(),Qt::IgnoreAspectRatio);
    p.setBrush(QPalette::Background,desktopback);
    this->setPalette(p);
}


void Desktop::to_do_list_button()
{
    /*here we are setting the stylesheet for commandlink button and creating  shortcut
    key for all the buttons. each activated() function is calling its respective program function
    when the shortkey is pressed.*/
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
 /*creating a slot for view button in to_do_list.*/
QFile for_view("C:/Users/anju/OneDrive/Desktop/DE-U/DE-U/Images/to_do_list.txt");
if(!for_view.open(QFile::ReadOnly|QFile::Text)){
    QMessageBox::information(this,"error","to_do_list.txt file does not exist.");
}
QTextStream to_read(&for_view);
QString text=to_read.readAll();//conversion from QtextStream to QString.
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
QString text= ui->plainTextEdit_list->toPlainText();//conversion from plaintext to QString.
to_append<<text; //writing in file
to_append.flush(); //clearing the buffer
append.close();
}
void Desktop::on_commandLinkButton_new_clicked()
{
ui->plainTextEdit_list->clear();
QFile for_new("C:/Users/anju/OneDrive/Desktop/DE-U/DE-U/Images/to_do_list.txt");
for_new.resize(0); // clearing the content of text file.
if(!for_new.open(QFile::Text|QFile::WriteOnly| QFile::Truncate)){
    QMessageBox::information(this,"error", "to_do_list.txt file does not exist.");
}
QTextStream renew(&for_new);
QString text=ui->plainTextEdit_list->toPlainText();
renew<<text;
renew.flush(); //clearing the buffer
for_new.close();//closing the file
}


void Desktop::on_commandLinkButton_font_clicked()
{
bool to_check;
QFont font=QFontDialog::getFont(&to_check, this);// calling the getfont function from QfontDialog namespace
if(to_check){
    ui->plainTextEdit_list->setFont(font);//setting the font in plaintextedit
}
else
    return;
}

void Desktop::on_commandLinkButton_undo_clicked()
{
    ui->plainTextEdit_list->undo();//calling the undo function using plainTextEdit_list object
}

void Desktop::on_commandLinkButton_redo_clicked()
{
    ui->plainTextEdit_list->redo();//calling the redo function using plainTextEdit_list object
}


void Desktop::on_pushButton_gameplay_clicked()
{
    /*on play button clicked creating a game pointer to call another ui window*/

    game=new z0Game;
    game->move(50,30); //setting its poistion in window
    game->setFixedSize(1800,950);
    game->show();

}

void Desktop::on_pushButton_desktop_log_out_clicked()
{
    //creating a messagebox for confirmation for logout button.
    QMessageBox::StandardButton confirm;
    confirm=QMessageBox::question(this,"Confirm","Log out from this device",QMessageBox::Yes|QMessageBox::No);
    if(QMessageBox::Yes==confirm){
    QApplication::quit(); //exit the whole window
}}

void Desktop::on_pushButton_restart_clicked()
{
    //creating a messagebox for confirmation for restart button.

    QMessageBox::StandardButton restart;
    restart=QMessageBox::question(this,"Confirm","Restart?",QMessageBox::Yes|QMessageBox::No);
    if(restart==QMessageBox::Yes){
    this->hide(); //hiding the current window.
    w->showFullScreen();} //opening the login window in fullscreenmode
}

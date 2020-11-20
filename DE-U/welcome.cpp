#include "welcome.h"
#include "ui_welcome.h"
#include <QPixmap>
#include<QLineEdit>
#include <QMessageBox>
welcome::welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
    QPixmap background_color(":/Images/Images/background.jpg");
    background_color=background_color.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette for_login;
    for_login.setBrush(QPalette::Background,background_color);
    this->setPalette(for_login);
    loginpicture();
    text_username();
    text_password();
    ui->label_welcome->setStyleSheet("QLabel {color : rgb(4, 136, 172);}");
    ui->commandLinkButton->setStyleSheet("color : rgb(255, 255, 255);font-size: 27px;");
    ui->pushButton_out->setStyleSheet("color: rgb(255, 255, 255);background-image:url(:/Images/Images/textedit.jpg);border: rgb(4,136,180);font-size:23px");
    ui->statusbar->setStyleSheet("font-size: 22px;");
}

welcome::~welcome()
{
    delete ui;
}

void welcome::resizeEvent(QResizeEvent *initial_window)
{

    QPixmap background_color(":/Images/Images/background.jpg");
    background_color=background_color.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette for_login;
    for_login.setBrush(QPalette::Background,background_color);
    this->setPalette(for_login);
}

void welcome::loginpicture()
{
    QPixmap login(":/Images/Images/login1_resize.jpg");
    ui->userpicture->setPixmap(login.scaled(ui->userpicture->size(),Qt::KeepAspectRatioByExpanding));

}

void welcome::text_username()
{
    QPalette p;
    p.setColor(QPalette::PlaceholderText,Qt::white);
    ui->lineEdit_username->setPlaceholderText("Username");
    ui->lineEdit_username->setStyleSheet("color: white;background-image:url(:/Images/Images/textedit.jpg);border: rgb(4,136,180);");
    ui->lineEdit_username->setPalette(p);

}

void welcome::text_password()
{
    QPalette p;
    p.setColor(QPalette::PlaceholderText,Qt::white);
    ui->lineEdit_password->setPlaceholderText("Password");
    ui->lineEdit_password->setStyleSheet("color: white;background-image:url(:/Images/Images/textedit.jpg);border: rgb(4,136,180);");
    ui->lineEdit_password->setPalette(p);

}


void welcome::on_pushButton_out_clicked()
{
QMessageBox::StandardButton option;
option= QMessageBox::question(this,"Confirm","DO you wish to quit?",QMessageBox::Yes|QMessageBox::No);
if(option==QMessageBox::Yes){QApplication::quit();}
}

void welcome::on_commandLinkButton_clicked()
{
    if(ui->lineEdit_username->text()=="project" && ui->lineEdit_password->text()=="HelloWorld") {
        this->hide();
        goDesktop=new Desktop;
        goDesktop->showFullScreen();
    }
    else if(ui->lineEdit_password->text()=="" && ui->lineEdit_password->text()==""){
        ui->statusbar->showMessage("Please enter your username and password.",4000);
        ui->statusbar->setStyleSheet("color:white;");
    }
    else{
        ui->statusbar->showMessage("Either username or password wrong.",4000);
        ui->statusbar->setStyleSheet("color:white;");
    }
}
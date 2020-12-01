#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>
#include <desktop.h>
QT_BEGIN_NAMESPACE
namespace Ui { class welcome; }
QT_END_NAMESPACE

class welcome : public QMainWindow
{
    Q_OBJECT //macro declaration for meta object compiler

public:
    welcome(QWidget *parent = nullptr);
    ~welcome();
    void resizeEvent(QResizeEvent *initial_window);
    void loginpicture();
    void text_username();
    void text_password();
    Desktop *goDesktop;
private slots:  //slots compiled using MOC
    void on_pushButton_out_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::welcome *ui;
};
#endif // WELCOME_H

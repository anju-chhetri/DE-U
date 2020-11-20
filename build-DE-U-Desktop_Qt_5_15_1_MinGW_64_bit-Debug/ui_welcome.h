/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *centralwidget;
    QLabel *userpicture;
    QFrame *line;
    QLabel *label_welcome;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_out;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->resize(1824, 1152);
        centralwidget = new QWidget(welcome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        userpicture = new QLabel(centralwidget);
        userpicture->setObjectName(QString::fromUtf8("userpicture"));
        userpicture->setGeometry(QRect(780, 425, 170, 150));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(970, 480, 361, 21));
        QFont font;
        font.setItalic(true);
        line->setFont(font);
        line->setStyleSheet(QString::fromUtf8("color: rgb(4, 136, 172);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(720, 320, 511, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Small"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        label_welcome->setFont(font1);
        label_welcome->setStyleSheet(QString::fromUtf8("font: 20pt \"Sitka Small\";"));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(970, 440, 241, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("font: 9pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(970, 500, 241, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8(""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_out = new QPushButton(centralwidget);
        pushButton_out->setObjectName(QString::fromUtf8("pushButton_out"));
        pushButton_out->setGeometry(QRect(1660, 1000, 141, 31));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(970, 550, 251, 71));
        welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1824, 21));
        welcome->setMenuBar(menubar);
        statusbar = new QStatusBar(welcome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        welcome->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, pushButton_out);

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QMainWindow *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "welcome", nullptr));
        userpicture->setText(QString());
        label_welcome->setText(QCoreApplication::translate("welcome", "Welcome To Universe", nullptr));
        lineEdit_username->setText(QString());
        pushButton_out->setText(QCoreApplication::translate("welcome", "Log Out", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("welcome", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H

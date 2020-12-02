/********************************************************************************
** Form generated from reading UI file 'desktop.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOP_H
#define UI_DESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QWidget *centralwidget;
    QLabel *label_time;
    QLabel *label_date;
    QPlainTextEdit *plainTextEdit_list;
    QCommandLinkButton *commandLinkButton_view;
    QCommandLinkButton *commandLinkButton_append;
    QCommandLinkButton *commandLinkButton_new;
    QCommandLinkButton *commandLinkButton_font;
    QCommandLinkButton *commandLinkButton_undo;
    QCommandLinkButton *commandLinkButton_redo;
    QLabel *label_name_list;
    QLabel *label;
    QPushButton *pushButton_gameplay;
    QPushButton *pushButton_desktop_log_out;
    QPushButton *pushButton_restart;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QString::fromUtf8("Desktop"));
        Desktop->resize(2078, 1434);
        centralwidget = new QWidget(Desktop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(930, 910, 371, 71));
        label_date = new QLabel(centralwidget);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(825, 950, 451, 91));
        plainTextEdit_list = new QPlainTextEdit(centralwidget);
        plainTextEdit_list->setObjectName(QString::fromUtf8("plainTextEdit_list"));
        plainTextEdit_list->setGeometry(QRect(1053, 40, 800, 650));
        QFont font;
        font.setPointSize(14);
        plainTextEdit_list->setFont(font);
        plainTextEdit_list->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/Images/Desk2.jpg);"));
        commandLinkButton_view = new QCommandLinkButton(centralwidget);
        commandLinkButton_view->setObjectName(QString::fromUtf8("commandLinkButton_view"));
        commandLinkButton_view->setGeometry(QRect(1770, 30, 81, 51));
        commandLinkButton_append = new QCommandLinkButton(centralwidget);
        commandLinkButton_append->setObjectName(QString::fromUtf8("commandLinkButton_append"));
        commandLinkButton_append->setGeometry(QRect(1770, 70, 81, 61));
        commandLinkButton_new = new QCommandLinkButton(centralwidget);
        commandLinkButton_new->setObjectName(QString::fromUtf8("commandLinkButton_new"));
        commandLinkButton_new->setGeometry(QRect(1770, 110, 81, 51));
        commandLinkButton_font = new QCommandLinkButton(centralwidget);
        commandLinkButton_font->setObjectName(QString::fromUtf8("commandLinkButton_font"));
        commandLinkButton_font->setGeometry(QRect(1770, 150, 81, 51));
        commandLinkButton_undo = new QCommandLinkButton(centralwidget);
        commandLinkButton_undo->setObjectName(QString::fromUtf8("commandLinkButton_undo"));
        commandLinkButton_undo->setGeometry(QRect(1769, 190, 91, 41));
        commandLinkButton_redo = new QCommandLinkButton(centralwidget);
        commandLinkButton_redo->setObjectName(QString::fromUtf8("commandLinkButton_redo"));
        commandLinkButton_redo->setGeometry(QRect(1770, 230, 81, 41));
        label_name_list = new QLabel(centralwidget);
        label_name_list->setObjectName(QString::fromUtf8("label_name_list"));
        label_name_list->setGeometry(QRect(1060, 690, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(9);
        label_name_list->setFont(font1);
        label_name_list->setStyleSheet(QString::fromUtf8("font: 75 italic 14pt \"Bahnschrift\";color:rgb(255,255,255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 800, 648));
        label->setStyleSheet(QString::fromUtf8("background-image:url(:/Game/Game/background.jpg);"));
        pushButton_gameplay = new QPushButton(centralwidget);
        pushButton_gameplay->setObjectName(QString::fromUtf8("pushButton_gameplay"));
        pushButton_gameplay->setGeometry(QRect(380, 310, 131, 51));
        pushButton_desktop_log_out = new QPushButton(centralwidget);
        pushButton_desktop_log_out->setObjectName(QString::fromUtf8("pushButton_desktop_log_out"));
        pushButton_desktop_log_out->setGeometry(QRect(1770, 920, 121, 51));
        pushButton_restart = new QPushButton(centralwidget);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));
        pushButton_restart->setGeometry(QRect(1770, 970, 121, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 690, 181, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift"));
        font2.setPointSize(14);
        font2.setItalic(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        Desktop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Desktop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2078, 21));
        Desktop->setMenuBar(menubar);
        statusbar = new QStatusBar(Desktop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Desktop->setStatusBar(statusbar);

        retranslateUi(Desktop);

        QMetaObject::connectSlotsByName(Desktop);
    } // setupUi

    void retranslateUi(QMainWindow *Desktop)
    {
        Desktop->setWindowTitle(QCoreApplication::translate("Desktop", "MainWindow", nullptr));
        label_time->setText(QCoreApplication::translate("Desktop", "Time", nullptr));
        label_date->setText(QCoreApplication::translate("Desktop", "day", nullptr));
        commandLinkButton_view->setText(QCoreApplication::translate("Desktop", "View", nullptr));
        commandLinkButton_append->setText(QCoreApplication::translate("Desktop", "Save", nullptr));
        commandLinkButton_new->setText(QCoreApplication::translate("Desktop", "New", nullptr));
        commandLinkButton_font->setText(QCoreApplication::translate("Desktop", "Font", nullptr));
        commandLinkButton_undo->setText(QCoreApplication::translate("Desktop", "Undo", nullptr));
        commandLinkButton_redo->setText(QCoreApplication::translate("Desktop", "Redo", nullptr));
        label_name_list->setText(QCoreApplication::translate("Desktop", "My to-do-list.", nullptr));
        label->setText(QString());
        pushButton_gameplay->setText(QCoreApplication::translate("Desktop", "Play", nullptr));
        pushButton_desktop_log_out->setText(QCoreApplication::translate("Desktop", "Log out", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("Desktop", "Restart", nullptr));
        label_2->setText(QCoreApplication::translate("Desktop", "Aero Shoot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H

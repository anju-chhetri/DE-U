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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QWidget *centralwidget;
    QLabel *label_time;
    QLabel *label_date;
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
        label_date->setGeometry(QRect(840, 950, 451, 91));
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
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H

/********************************************************************************
** Form generated from reading UI file 'z0game.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z0GAME_H
#define UI_Z0GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_z0Game
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QCommandLinkButton *replay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *z0Game)
    {
        if (z0Game->objectName().isEmpty())
            z0Game->setObjectName(QString::fromUtf8("z0Game"));
        z0Game->resize(1800, 950);
        centralwidget = new QWidget(z0Game);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1861, 951));
        replay = new QCommandLinkButton(centralwidget);
        replay->setObjectName(QString::fromUtf8("replay"));
        replay->setGeometry(QRect(860, 380, 172, 91));
        z0Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(z0Game);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1800, 21));
        z0Game->setMenuBar(menubar);
        statusbar = new QStatusBar(z0Game);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        z0Game->setStatusBar(statusbar);

        retranslateUi(z0Game);

        QMetaObject::connectSlotsByName(z0Game);
    } // setupUi

    void retranslateUi(QMainWindow *z0Game)
    {
        z0Game->setWindowTitle(QCoreApplication::translate("z0Game", "MainWindow", nullptr));
        replay->setText(QCoreApplication::translate("z0Game", "replay!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class z0Game: public Ui_z0Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z0GAME_H

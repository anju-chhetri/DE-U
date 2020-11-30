QT       += core gui \
            multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    desktop.cpp \
    main.cpp \
    welcome.cpp \
    z0game.cpp \
    z1game.cpp \
    z2player.cpp \
    z3bullet.cpp \
    z4enemy.cpp \
    z5score.cpp \
    z6health.cpp \
    z7gameover.cpp

HEADERS += \
    desktop.h \
    welcome.h \
    z0game.h \
    z1game.h \
    z2player.h \
    z3bullet.h \
    z4enemy.h \
    z5score.h \
    z6health.h \
    z7gameover.h

FORMS += \
    desktop.ui \
    welcome.ui \
    z0game.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

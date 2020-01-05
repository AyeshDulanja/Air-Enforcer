#-------------------------------------------------
#
# Project created by QtCreator 2019-12-23T18:52:58
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AirEnforcer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        about.cpp \
        bullet.cpp \
        enemy.cpp \
        game.cpp \
        health.cpp \
        howto.cpp \
        main.cpp \
        menu.cpp \
        myrect.cpp \
        player.cpp \
        score.cpp

HEADERS += \
    about.h \
    bullet.h \
    enemy.h \
    game.h \
    health.h \
    howto.h \
    menu.h \
    myrect.h \
    player.h \
    score.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

FORMS += \
    about.ui \
    howto.ui \
    menu.ui

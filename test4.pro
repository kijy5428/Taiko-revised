#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T01:06:12
#
#-------------------------------------------------

QT       += core gui    \

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = test4
TEMPLATE = app


SOURCES += main.cpp\
    drums.cpp \
    bigblue.cpp \
    bigred.cpp \
    smallblue.cpp \
    smallred.cpp \
    bigdrums.cpp \
    smalldrums.cpp \
    gamewindow.cpp \
    startwindow.cpp \
    resultwindow.cpp

HEADERS  += \
    drums.h \
    bigblue.h \
    bigred.h \
    smallblue.h \
    smallred.h \
    bigdrums.h \
    smalldrums.h \
    gamewindow.h \
    startwindow.h \
    resultwindow.h

FORMS    += \
    resultwindow.ui \
    startwindow.ui \
    gamewindow.ui

RESOURCES += \
    res.qrc

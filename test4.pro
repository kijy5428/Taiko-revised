#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T01:06:12
#
#-------------------------------------------------

QT       += core gui    \
            multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_LFLAGS_WINDOWS += -Wl,--stack,32000000
QMAKE_LFLAGS += /STACK:32000000


TARGET = test4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwindow2.cpp \
    drums.cpp \
    bigblue.cpp \
    bigred.cpp \
    smallblue.cpp \
    smallred.cpp \
    bigdrums.cpp \
    smalldrums.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    mainwindow2.h \
    drums.h \
    bigblue.h \
    bigred.h \
    smallblue.h \
    smallred.h \
    bigdrums.h \
    smalldrums.h \
    dialog.h

FORMS    += mainwindow.ui \
    mainwindow2.ui \
    text.ui \
    test.ui \
    result.ui \
    frame.ui \
    dialog.ui

RESOURCES += \
    res.qrc

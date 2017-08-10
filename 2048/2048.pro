#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T14:10:06
#
#-------------------------------------------------

#QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    blank.cpp

HEADERS  += mainwindow.h \
    blank.h

FORMS    += mainwindow.ui

RESOURCES += \
    pic.qrc

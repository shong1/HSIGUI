#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T10:42:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HSI_GUI

TEMPLATE = lib

CONFIG += plugin static

LIBS += /home/shong/Qt5.2.1/5.2.1/gcc_64/plugins/imageformats/libqtiff.so


TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui



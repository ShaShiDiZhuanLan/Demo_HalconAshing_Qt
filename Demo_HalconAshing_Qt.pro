#-------------------------------------------------
#
# Project created by QtCreator 2017-09-15T18:07:10 沙振宇
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Demo_HalconAshing_Qt
TEMPLATE = app

INCLUDEPATH += $$PWD/Halcon/Include
INCLUDEPATH += $$PWD/Halcon/Include/halconcpp

CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/bin_debug
    LIBS += -L$$PWD/lib -lhalconcpp
}
CONFIG(release, debug|release) {
    DESTDIR = $$PWD/bin_release
    LIBS += -L$$PWD/lib -lhalconcpp
}

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

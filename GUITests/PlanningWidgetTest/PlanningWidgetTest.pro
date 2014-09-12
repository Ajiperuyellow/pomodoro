#-------------------------------------------------
#
# Project created by QtCreator 2014-09-11T22:08:43
#
#-------------------------------------------------

QT       += widgets testlib gui

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += ../../

TARGET = tst_testplanningwidget
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += tst_testplanningwidget.cpp \
    ../../planningwidget.cpp \
    ../../moc_planningwidget.cpp \
    ../../tasklistmodel.cpp \
    ../../moc_tasklistmodel.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

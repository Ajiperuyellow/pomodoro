#-------------------------------------------------
#
# Project created by QtCreator 2014-09-09T14:55:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pomodoro
TEMPLATE = app
CONFIG        = qt warn_on debug
unix:LIBS   = -L../qcppunit -lqcppunit
INCLUDEPATH = ../qcppunit ../qcppunit/testlib

SOURCES += main.cpp\
        pomodorowidget.cpp \
    framework.cpp

HEADERS  += pomodorowidget.h \
    framework.h

FORMS    += pomodorowidget.ui



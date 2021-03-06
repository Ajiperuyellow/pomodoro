#-------------------------------------------------
#
# Project created by QtCreator 2014-09-09T14:55:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pomodoro

SOURCES += main.cpp\
    framework.cpp \
    pomodoroapplication.cpp \
    pomodorowidget.cpp \
    planningwidget.cpp \
    trackingwidget.cpp \
    tasklistmodel.cpp \
    database.cpp \
    Timer.cpp

HEADERS  += \
    framework.h \
    pomodoroapplication.h \
    pomodorowidget.h \
    planningwidget.h \
    trackingwidget.h \
    tasklistmodel.h \
    database.h \
    Timer.h

FORMS    += \
    pomodorowidget.ui \
    planningwidget.ui \
    trackingwidget.ui

QMAKE_CXXFLAGS += \
    -std=c++11

LIBS += \
    -lsqlite3

doc.commands = doxygen
QMAKE_EXTRA_TARGETS += doc

OTHER_FILES +=

RESOURCES += \
    icon_resources.qrc

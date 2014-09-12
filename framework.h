#ifndef FRAMEWORK_H
#define FRAMEWORK_H
#include<iostream>
#include"Timer.h"
#include<QString>
#include"database.h"

class Framework
{
public:
    Framework();

};

class TrackingWidget;
class Database;

class FrameworkTracking
{
public:
    FrameworkTracking(TrackingWidget & widget,Database & database);
    struct interrupt{
        QString interruptstring;
        int intextflag; //1: external, 2: internal
        int unplanned_urgent;
        bool void_or_not; // true: void, false: not void
    };
    int StartTimer();
    int StartTimerForPause();
    int TimerHasRunOut();
    int Interrupt(interrupt a_new_interrupt_item);

public slots:
    void TimerTick(int time_left);

private:
    TrackingWidget & gui_widget;
    Timer my_timer;
    Database & my_database;
};

class FrameworkPlanning
{
public:
    FrameworkPlanning(Database & database);

    struct task{
        QString taskstring;
        int number_of_pomodori;
    };


    int NewNameOfProject();
    int OpenExistingProject();
    int EnterListItem(task a_new_task_to_insert);
    int SetNumberOfPomodori(task a_new_task_to_insert);
    int SetTodaysObjects(task a_new_task_to_insert);

private:
  Database & my_database;
};


#endif // FRAMEWORK_H

#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include"Timer.h"


class Framework
{
public:
    Framework();

};

class TrackingWidget;

class FrameworkTracking
{
public:
    FrameworkTracking(TrackingWidget & widget);

    int StartTimer();
    int TimerHasRunOut();
    int Interrupt();

public slots:
    void TimerTick(int time_left);

private:
    TrackingWidget & gui_widget;
    Timer my_timer;
};

class FrameworkPlanning
{
public:
    FrameworkPlanning();

    int NewNameOfProject();
    int OpenExistingProject();
    int EnterListItem();
    int SetNumberOfPomodori();
    int SetTodaysObjects();
};


#endif // FRAMEWORK_H

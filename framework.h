#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include"Timer.h"

class Framework
{
public:
    Framework();

};

class FrameworkTracking
{
public:
    FrameworkTracking();

    int StartTimer();
    int TimerHasRunOut();
    int Interrupt();

private:
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

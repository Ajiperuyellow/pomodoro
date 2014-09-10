#ifndef FRAMEWORK_H
#define FRAMEWORK_H

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

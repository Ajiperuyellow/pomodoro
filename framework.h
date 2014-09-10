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
    void Interrupt();
};

class FrameworkPlanning
{
public:
    FrameworkPlanning();

    void EnterListItem();
    void SetNumberOfPomodori();
};




#endif // FRAMEWORK_H

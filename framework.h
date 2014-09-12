#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include"Timer.h"

class PomodoroApplication;
class Database;

class Framework
{
public:
  Framework();

public:
  void SetGUI(PomodoroApplication * gui);
  void StartGUI();

private:
  PomodoroApplication * gui_app;
  Database * task_database;
};

class FrameworkTracking
{
public:
  FrameworkTracking();

  int StartTimer();
  int TimerHasRunOut();
  int Interrupt();

public slots:
  void TimerTick(int time_left);

private:
  TrackingWidget * gui_tracking;
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

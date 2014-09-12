#ifndef FRAMEWORK_H
#define FRAMEWORK_H
#include<iostream>
#include"Timer.h"
#include <QString>

class PomodoroApplication;
class PlanningWidget;
class TrackingWidget;

class Database;

class FrameworkTracking
{
public:
  FrameworkTracking(Database * database = nullptr, TrackingWidget * widget = nullptr);

  struct interrupt
  {
    QString interruptstring;
    int intextflag; //1: external, 2: internal
    int unplanned_urgent;
    bool void_or_not; // true: void, false: not void
  };

  void ProvideDatabase(Database * database);
  void ProvideGUI(TrackingWidget * widget);

  int StartTimer();
  int StartTimerForPause();
  int TimerHasRunOut();
  int Interrupt(interrupt a_new_interrupt_item);

public slots:
  void TimerTick(int time_left);

private:
  Timer my_timer;
  Database * my_database;
  TrackingWidget * tracking_gui;
};

class FrameworkPlanning
{
public:
  explicit FrameworkPlanning(Database * database = nullptr, PlanningWidget * widget = nullptr);

  struct task
  {
    QString taskstring;
    int number_of_pomodori;
  };

  void ProvideDatabase(Database * database);
  void ProvideGUI(PlanningWidget * widget);

  int NewNameOfProject();
  int OpenExistingProject();
  int EnterListItem(task a_new_task_to_insert);
  int SetNumberOfPomodori(task a_new_task_to_insert);
  int SetTodaysObjects(task a_new_task_to_insert);

private:
  Database * my_database;
  PlanningWidget * planning_gui;
};

class Framework
{
public:
  Framework();

public:
  void ProvidePlanner(FrameworkPlanning * pf)
  {
    planning_framework = pf;
  }
  void ProvideTracker(FrameworkTracking * tf)
  {
    tracking_framework = tf;
  }

  void ProvideGUI(PomodoroApplication * gui);
  void ProvideDatabase(Database * database);
  void StartGUI();

  void LinkGUI();

private:
  FrameworkPlanning * planning_framework;
  FrameworkTracking * tracking_framework;

  PomodoroApplication * gui_app;
  Database * task_database;
};

#endif // FRAMEWORK_H

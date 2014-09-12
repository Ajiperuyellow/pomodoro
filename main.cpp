#include <QApplication>
#include"pomodoroapplication.h"

#include <sqlite3.h>
#include<iostream>
#include<stdexcept>
#include "framework.h"
#include "database.h"

using std::cout;
using std::endl;


int main(int argc, char *argv[])
{
  cout << "Start Pomodoro" << endl;

  QApplication a(argc,argv);

  PomodoroApplication app;
  Database task_database;

  FrameworkPlanning planning_instance(&task_database,app.GetPlanningWidget());
  FrameworkTracking tracking_instance(&task_database,app.GetTrackingWidget());

  /*
  aPlanningInstance.NewNameOfProject();

  FrameworkPlanning::task newtask;
  newtask.taskstring = "Ich steh mit beiden Beinen aufm Schlauch.";
  aPlanningInstance.EnterListItem(newtask);

  FrameworkTracking::interrupt newinterrupt;
  */

  Framework framework;
  framework.ProvideDatabase(&task_database);
  framework.ProvideGUI(&app);
  framework.ProvidePlanner(&planning_instance);
  framework.ProvideTracker(&tracking_instance);

  framework.LinkGUI();

  framework.StartGUI();

  return a.exec();
}

#include <QApplication>
#include"pomodoroapplication.h"

#include <sqlite3.h>
#include<iostream>
#include<stdexcept>
#include "framework.h"
#include "database.h"

using std::cout;
using std::endl;

/**@brief The Main Routine */
int main(int argc, char *argv[])
{
  cout << "Start Pomodoro" << endl;

  QApplication a(argc,argv);

  PomodoroApplication app;
  Database task_database;

  FrameworkPlanning planning_instance(&task_database,app.GetPlanningWidget());
  FrameworkTracking tracking_instance(&task_database,app.GetTrackingWidget());


  planning_instance.NewNameOfProject();

  FrameworkPlanning::task newtask;
  newtask.taskstring = "Ich steh mit beiden Beinen aufm Schlauch.";
  newtask.number_of_pomodori = 3;
  planning_instance.EnterListItem(newtask);
  planning_instance.SetNumberOfPomodori(newtask.number_of_pomodori);
  //FrameworkTracking::interrupt newinterrupt;



  Framework framework;
  framework.ProvideDatabase(&task_database);
  framework.ProvideGUI(&app);
  framework.ProvidePlanner(&planning_instance);
  framework.ProvideTracker(&tracking_instance);

  framework.LinkGUI();

  framework.StartGUI();

  return a.exec();
}

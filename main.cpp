#include <QApplication>
#include"pomodoroapplication.h"

#include <sqlite3.h>
#include "framework.h"
#include<iostream>
#include<stdexcept>
#include "Timer.h"

#include <sstream>

using std::cout;
using std::endl;


int main(int argc, char *argv[])
{
  cout << "Start Pomodoro" << endl;

  QApplication a(argc,argv);
  PomodoroApplication app;

  Database TheDatabaseInstance;
  TheDatabaseInstance.openDatabase();
  //TheDatabaseInstance.createTable();

  FrameworkPlanning aPlanningInstance(TheDatabaseInstance);
  FrameworkPlanning aTrackingInstance(TheDatabaseInstance);

  aPlanningInstance.NewNameOfProject();

  FrameworkPlanning::task newtask;
  newtask.taskstring = "Ich steh mit beiden Beinen aufm Schlauch.";
  aPlanningInstance.EnterListItem(newtask);

  FrameworkTracking::interrupt newinterrupt;


  /*
  FrameworkPlanning::EnterListItem();*/




  app.Start();
  return a.exec();
}

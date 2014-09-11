#include <QApplication>
#include"pomodoroapplication.h"
#include"database.h"
#include <sqlite3.h>
#include "framework.h"
#include<iostream>
#include<stdexcept>
#include "Timer.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
  cout << "Start Pomodoro" << endl;

  Database TheDatabaseInstance;
  TheDatabaseInstance.openDatabase();

  QApplication a(argc,argv);
  PomodoroApplication app;

  Timer T;
  T.Go();
  T.Stop();

  //FrameworkTracking TheFrameworkTrackingInstance;
  //TheFrameworkTrackingInstance.StartTimer();

  app.Start();
  return a.exec();
}

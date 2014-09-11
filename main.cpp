#include <QApplication>
#include "pomodoroapplication.h"

int main(int argc, char *argv[])
{
  QApplication a(argc,argv);
  PomodoroApplication app;

  app.Start();

  return a.exec();
}

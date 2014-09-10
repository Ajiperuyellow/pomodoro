#include "pomodorowidget.h"
#include <QApplication>
#include "framework.h"
#include<iostream>
#include<stdexcept>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    FrameworkTracking FrameworkTrackingInstance;

    //FrameworkTrackingInstance.StartTimer();
    cout << "Program starts" << endl;

    QApplication a(argc, argv);
    PomodoroWidget w;
    w.show();

  return a.exec();
}



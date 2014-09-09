#include "pomodorowidget.h"
#include <QApplication>
#include "framework.h"

int main(int argc, char *argv[])
{
    Framework f;
    f.startTimer();

    QApplication a(argc, argv);
    PomodoroWidget w;
    w.show();

  return a.exec();
}

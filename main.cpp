#include "pomodorowidget.h"
#include <QApplication>
#include "framework.h"

#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <qapplication.h>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    PomodoroWidget w;
    w.show();

  return a.exec();
}



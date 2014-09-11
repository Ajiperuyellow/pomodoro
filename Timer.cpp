#include "Timer.h"
#include <iostream>

Timer::Timer(QObject *parent) :
  QObject(parent),
  t(this)
{
  connect(&t,SIGNAL(timeout()),this,SLOT(Tick()));
  t.start(1000);
}

void Timer::Tick()
{
  std::cout << "tick" << std::endl;
}

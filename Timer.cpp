#include "Timer.h"
#include <iostream>

Timer::Timer(QObject *parent) :
  QObject(parent),
  aQTimerObject(this)
{
  connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
  //aQTimerObject.start(1000);
}

void Timer::Tick()
{
  std::cout << "tick" << std::endl;
}

void Timer::Go()
{
    //connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
    aQTimerObject.start(1000);
    std::cout << "Go" << std::endl;
}
void Timer::Stop()
{
    //connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
    if( aQTimerObject.interval() == 1001){
    aQTimerObject.stop();
    std::cout << "Stop" << std::endl;}
}

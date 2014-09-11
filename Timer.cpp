#include "Timer.h"
#include <iostream>
#include "framework.h"

Timer::Timer(FrameworkTracking & f, QObject *parent) :
  QObject(parent),
  aQTimerObject(this),
  seconds_counter(0),
  framework(f)
{
  connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
  //aQTimerObject.start(1000);
}

void Timer::Tick()
{
  seconds_counter++;
  if(seconds_counter==seconds_to_run)
  {
    framework.TimerHasRunOut();
  }
  std::cout << "tick" << std::endl;  
}

void Timer::Go(int seconds_to_run_arg)
{  
    //connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
    aQTimerObject.start(1000);
    std::cout << "Go" << seconds_to_run << std::endl;
    seconds_to_run=seconds_to_run_arg;
}

void Timer::Stop()
{
    //connect(&aQTimerObject,SIGNAL(timeout()),this,SLOT(Tick()));
    if( aQTimerObject.interval() == 1001){
    aQTimerObject.stop();
    std::cout << "Stop" << std::endl;}
}

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
}

void Timer::Tick()
{
  seconds_counter++;

  if(seconds_counter==seconds_to_run)
  {
    framework.TimerHasRunOut();
  }

  framework.TimerTick(seconds_to_run - seconds_counter);
}

void Timer::Go(int seconds_to_run_arg)
{  
    aQTimerObject.start(1000);
    seconds_to_run=seconds_to_run_arg;
}

void Timer::Stop()
{
  aQTimerObject.stop();
}

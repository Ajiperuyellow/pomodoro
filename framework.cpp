#include "framework.h"
#include<iostream>
#include<stdexcept>

#include "pomodoroapplication.h"

using std::cout;
using std::endl;

//CONSTRUCTORS
Framework::Framework()
{}

void Framework::SetGUI(PomodoroApplication *gui)
{
  gui_app = gui;
}

void Framework::StartGUI()
{
  gui_app->Start();
}

FrameworkPlanning::FrameworkPlanning()
{}

FrameworkTracking::FrameworkTracking(TrackingWidget & widget)
  : gui_widget(widget),
    my_timer(*this)
{}

//FUNCTIONS

//FrameworkTracking Functions
int FrameworkTracking::StartTimer(){
  my_timer.Go(5);
  gui_widget.ClockTick(5);
  return 7;
}

int FrameworkTracking::TimerHasRunOut()
{
  gui_widget.TimeUp();
  my_timer.Stop();
  return 7;
}

int FrameworkTracking::Interrupt(){
//throw std::runtime_error("Interrupt-Function call");
return 7;
}

void FrameworkTracking::TimerTick(int seconds_left)
{
  gui_widget.ClockTick(seconds_left);
}

//FrameworkPlanning Functions
int FrameworkPlanning::EnterListItem(){
//throw std::runtime_error("EnterListItem-Function call");
    return 7;
}

int FrameworkPlanning::SetNumberOfPomodori(){
//throw std::runtime_error("SetNumberOfPomodori-Function call");
    return 7;
}

int FrameworkPlanning::NewNameOfProject(){
//throw std::runtime_error("NewNameOfProject-Function call");r
    return 7;
}

int FrameworkPlanning::OpenExistingProject(){
//throw std::runtime_error("OpenExistingProject-Function call");
    return 7;
}

int FrameworkPlanning::SetTodaysObjects(){
//throw std::runtime_error("SetTodaysObjects-Function call");
    return 7;
}

#include "framework.h"
#include<iostream>
#include<stdexcept>

using std::cout;
using std::endl;

//CONSTRUCTORS
Framework::Framework()
{}

FrameworkPlanning::FrameworkPlanning()
{}

FrameworkTracking::FrameworkTracking()
  : my_timer(*this)
{}



//FUNCTIONS

//FrameworkTracking Functions
int FrameworkTracking::StartTimer(){
  my_timer.Go(20);
  cout << "Start Timer" << endl;
  return 7;
}

int FrameworkTracking::TimerHasRunOut(){

  cout << "Timer Has Run Out" << endl;
  return 7;
}



int FrameworkTracking::Interrupt(){
//throw std::runtime_error("Interrupt-Function call");
return 7;
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

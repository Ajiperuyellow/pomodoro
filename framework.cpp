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
{}

//FUNCTIONS

//FrameworkTracking Functions
int FrameworkTracking::StartTimer(){
//throw std::runtime_error("startTimer - Function call");
return 7;
}

int FrameworkTracking::TimerHasRunOut(){
//throw std::runtime_error("TimerHasRunOut - Function call");
//call new window
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

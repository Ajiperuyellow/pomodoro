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

FrameworkPlanning::FrameworkPlanning(Database &database)
    : my_database(database)
{}

FrameworkTracking::FrameworkTracking(TrackingWidget & widget,Database & database)
  : gui_widget(widget),
    my_timer(*this),
    my_database(database)
{}

//FUNCTIONS

//FrameworkTracking Functions
int FrameworkTracking::StartTimer(){
  my_timer.Go(25*60);
  gui_widget.ClockTick(25*60);
  return 7;
}
int FrameworkTracking::StartTimerForPause(){
  my_timer.Go(5*60);
  gui_widget.ClockTick(5*60);
  return 7;
}
int FrameworkTracking::TimerHasRunOut()
{
  gui_widget.TimeUp();
  my_timer.Stop();
  return 7;
  StartTimerForPause();
}

int FrameworkTracking::Interrupt(interrupt a_new_interrupt_item){
cout << "Interrupt! " << endl;

//my_database.insertActivityItem(a_new_task_to_insert.taskstring.toStdString());
cout << "added Interrupt item " << endl;

 if (a_new_interrupt_item.intextflag==1){
 //my_database.insertInternalInterrupt(int activity_index);
 cout << "Type: internal Interrupt"  << endl;
 }else{
 //my_database.insertExternalInterrupt(int activity_index);
 cout << "Type: external Interrupt"  << endl;
 }

 if (a_new_interrupt_item.unplanned_urgent==1){
//my_database.insertUnplannedUrgentActivity(int activity_index);
cout << "URGENT: Do sometimes today!"  << endl;
 }else{
// no flag unplanned & urgent! Can be done tomorrow.
cout << "Not urgent: Do sometimes..."  << endl;
 }




    bool success;
        try{


    //success = my_database.insertActivityItem(a_new_task_to_insert.taskstring.toStdString());
    return 100;
        }catch(int i){
    throw std::runtime_error("Error in EnterListItem-Function call");
    return 0;
        }
    my_timer.Stop();

//throw std::runtime_error("Interrupt-Function call");

return 7;
}

void FrameworkTracking::TimerTick(int seconds_left)
{
  gui_widget.ClockTick(seconds_left);
}

//FrameworkPlanning Functions
int FrameworkPlanning::EnterListItem(task a_new_task_to_insert){
bool success;
    try{
//success = my_database.insertActivityItem(a_new_task_to_insert.taskstring.toStdString());
return 100;
    }catch(int i){
throw std::runtime_error("Error in EnterListItem-Function call");
return 0;
    }
}

int FrameworkPlanning::SetNumberOfPomodori(task a_new_task_to_insert){
    int activity_index;
    bool success;
        try{
//success = my_database.updateEstimatedPromodoro(activity_index,a_new_task_to_insert.number_of_pomodori);
    return 100;
        }catch(int i){
    throw std::runtime_error("SetNumberOfPomodori-Function call");
    return 0;
        }
}

int FrameworkPlanning::NewNameOfProject(){
//throw std::runtime_error("NewNameOfProject-Function call");r
    return 7;
}

int FrameworkPlanning::OpenExistingProject(){
//throw std::runtime_error("OpenExistingProject-Function call");
    return 7;
}

int FrameworkPlanning::SetTodaysObjects(task a_new_task_to_insert){
  //throw std::runtime_error("SetTodaysObjects-Function call");

  //selectDayToDoTodayActivity
    return 7;
}

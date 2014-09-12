#include "framework.h"
#include<iostream>
#include<stdexcept>
#include "pomodoroapplication.h"

using std::cout;
using std::endl;

//CONSTRUCTORS
Framework::Framework()
{}

void Framework::ProvideGUI(PomodoroApplication *gui)
{
  gui_app = gui;
}
void Framework::ProvideDatabase(Database *database)
{
  task_database = database;
}

void Framework::StartGUI()
{
  gui_app->Start();
}

void Framework::LinkGUI()
{
  if(gui_app == nullptr)
    throw std::runtime_error("Must set GUI before Linking it");

  gui_app->ProvidePlanningFramework(planning_framework);
  gui_app->ProvideTrackingFramework(tracking_framework);
}


FrameworkPlanning::FrameworkPlanning(Database * database, PlanningWidget * widget)
    : my_database(database),
      planning_gui(widget)
{}

FrameworkTracking::FrameworkTracking(Database * database, TrackingWidget * widget)
  : my_timer(*this),
    my_database(database),
    tracking_gui(widget)
{}

//FUNCTIONS

//FrameworkTracking Functions

void FrameworkTracking::ProvideDatabase(Database *database)
{
  my_database = database;
}
void FrameworkTracking::ProvideGUI(TrackingWidget *widget)
{
  tracking_gui = widget;
}

int FrameworkTracking::StartTimer(){
  int seconds = 25*60;

  my_timer.Go(seconds);
  if(tracking_gui != nullptr)
        tracking_gui->ClockTick(seconds);

  return 7;
}
int FrameworkTracking::StartTimerForPause(){
  int seconds = 5*60;

  my_timer.Go(seconds);

  if(tracking_gui != nullptr)
    tracking_gui->ClockTick(seconds);

  return 7;
}
int FrameworkTracking::TimerHasRunOut()
{
  if(tracking_gui != nullptr)
    tracking_gui->TimeUp();

  my_timer.Stop();
  return 7;

  //Wont run!
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
  if(tracking_gui != nullptr)
    tracking_gui->ClockTick(seconds_left);
}

//FrameworkPlanning Functions

void FrameworkPlanning::ProvideDatabase(Database *database)
{
  my_database = database;
}

void FrameworkPlanning::ProvideGUI(PlanningWidget *widget)
{
  planning_gui = widget;
}

int FrameworkPlanning::EnterListItem(task a_new_task_to_insert){

  if(my_database == nullptr)
    throw std::runtime_error("No Database was provided the FrameworkPlanning");

  bool success;
  try{
    //success = my_database.insertActivityItem(a_new_task_to_insert.taskstring.toStdString());
    return 100;
  }catch(int i){
    throw std::runtime_error("Error in EnterListItem-Function call");
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

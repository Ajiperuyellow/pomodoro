#include "pomodoroapplication.h"
#include "pomodorowidget.h"
#include "planningwidget.h"

#include <iostream>

PomodoroApplication::PomodoroApplication()
  : main_window(*this),
    planning_window(*this),
    tracking_window(*this),
    active_window(&main_window)
{
}

void PomodoroApplication::Start()
{
  active_window->show();
}

void PomodoroApplication::SwitchToMainMenu()
{
  active_window->close();
  active_window = &main_window;
  active_window->show();
}

void PomodoroApplication::SwitchToPlanningWindow()
{
  active_window->close();
  active_window = &planning_window;
  active_window->show();
}

void PomodoroApplication::SwitchToTrackingWindow()
{
  active_window->close();
  active_window = &tracking_window;
  active_window->show();
}

void PomodoroApplication::QuitApplication()
{
  active_window->close();
}


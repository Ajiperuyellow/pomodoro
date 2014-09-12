#ifndef POMODOROAPPLICATION_H
#define POMODOROAPPLICATION_H

#include <QObject>

#include "database.h"

#include "pomodorowidget.h"
#include "planningwidget.h"
#include "trackingwidget.h"

class PomodoroApplication : public QObject
{

  Q_OBJECT

public:
  PomodoroApplication();
  void Start();

public slots:
  void SwitchToMainMenu();
  void SwitchToPlanningWindow();
  void SwitchToTrackingWindow();
  void QuitApplication();

private:
  Database task_database;

  PomodoroWidget main_window;
  PlanningWidget planning_window;
  TrackingWidget tracking_window;

  QWidget * active_window;
};

#endif // POMODOROAPPLICATION_H

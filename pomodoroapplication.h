#ifndef POMODOROAPPLICATION_H
#define POMODOROAPPLICATION_H

#include <QObject>

#include "pomodorowidget.h"
#include "planningwidget.h"
#include "trackingwidget.h"

class FrameworkTracking;
class FrameworkPlanning;

class PomodoroApplication : public QObject
{

  Q_OBJECT

public:
  PomodoroApplication();
  void Start();

  PlanningWidget * GetPlanningWidget()
  {
    return &planning_window;
  }
  TrackingWidget * GetTrackingWidget()
  {
    return &tracking_window;
  }

  void ProvideTrackingFramework(FrameworkTracking * fr)
  {
    tracking_window.ProvideFramework(fr);
  };
  void ProvidePlanningFramework(FrameworkPlanning * fr) {};

public slots:
  void SwitchToMainMenu();
  void SwitchToPlanningWindow();
  void SwitchToTrackingWindow();
  void QuitApplication();

private:
  PomodoroWidget main_window;
  PlanningWidget planning_window;
  TrackingWidget tracking_window;

  QWidget * active_window;
};

#endif // POMODOROAPPLICATION_H

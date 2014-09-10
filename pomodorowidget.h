#ifndef POMODOROWIDGET_H
#define POMODOROWIDGET_H

#include <QMainWindow>
#include "framework.h"

namespace Ui {
class PomodoroWidget;
}

class PomodoroWidget : public QMainWindow
{
  Q_OBJECT

public:
  explicit PomodoroWidget(QWidget *parent = 0);
  ~PomodoroWidget();

private slots:
  void on_killSwitch_clicked();

private:
  Ui::PomodoroWidget *ui;
  Framework FrameworkInstance;
  FrameworkPlanning FrameworkPlanningInstance;
  FrameworkTracking FrameworkTrackingInstance;
};

#endif // POMODOROWIDGET_H

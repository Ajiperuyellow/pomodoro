#ifndef TRACKINGWIDGET_H
#define TRACKINGWIDGET_H

#include <QWidget>
#include "framework.h"

class PomodoroApplication;
class Database;

namespace Ui {
class TrackingWidget;
}

class TrackingWidget : public QWidget
{
  Q_OBJECT

public:
  explicit TrackingWidget(PomodoroApplication * parent, Database * d);
  ~TrackingWidget();

public slots:
  void TimeUp();
  void ClockTick(int display_seconds);

private slots:
  void on_start_pomodoro_button_clicked();

private:
  Ui::TrackingWidget *ui;
  PomodoroApplication * parent_app;
  Database * task_database;

  FrameworkTracking framework;
};

#endif // TRACKINGWIDGET_H

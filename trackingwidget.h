#ifndef TRACKINGWIDGET_H
#define TRACKINGWIDGET_H

#include <QWidget>
#include "framework.h"
#include "popuppicture.h"

class PomodoroApplication;

namespace Ui {
class TrackingWidget;
}

class TrackingWidget : public QWidget
{
  Q_OBJECT

public:
  explicit TrackingWidget(PomodoroApplication &parent);
  ~TrackingWidget();

public slots:
  void TimeUp();
  void ClockTick(int display_seconds);

private slots:
  void on_start_pomodoro_button_clicked();

private:
  Ui::TrackingWidget *ui;
  PomodoroApplication & parent_app;
  FrameworkTracking framework;

  PopUpPicture pop_up;
};

#endif // TRACKINGWIDGET_H

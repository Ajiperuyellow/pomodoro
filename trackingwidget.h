#ifndef TRACKINGWIDGET_H
#define TRACKINGWIDGET_H

#include <QWidget>

class PomodoroApplication;
class FrameworkTracking;

namespace Ui {
class TrackingWidget;
}

class TrackingWidget : public QWidget
{
  Q_OBJECT

public:
  explicit TrackingWidget(PomodoroApplication * parent, FrameworkTracking * manager = nullptr);
  ~TrackingWidget();

  void ProvideFramework(FrameworkTracking * fr)
  {
    framework = fr;
  }

public slots:
  void TimeUp();
  void ClockTick(int display_seconds);

private slots:
  void on_start_pomodoro_button_clicked();

private:
  Ui::TrackingWidget *ui;
  PomodoroApplication * parent_app;

  FrameworkTracking * framework;
};

#endif // TRACKINGWIDGET_H

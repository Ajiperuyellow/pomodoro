#ifndef TRACKINGWIDGET_H
#define TRACKINGWIDGET_H

#include <QWidget>

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

private:
  Ui::TrackingWidget *ui;
  PomodoroApplication & parent_app;
};

#endif // TRACKINGWIDGET_H

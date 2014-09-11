#ifndef POMODOROWIDGET_H
#define POMODOROWIDGET_H

#include <QWidget>
#include <QPixmap>

class PomodoroApplication;

namespace Ui {
class PomodoroWidget;
}

class PomodoroWidget : public QWidget
{
  Q_OBJECT

public:
  explicit PomodoroWidget(PomodoroApplication &parent);
  ~PomodoroWidget();

private:
  Ui::PomodoroWidget *ui;
  PomodoroApplication & parent_app;
  QPixmap pomodoro_pic;
};

#endif // POMODOROWIDGET_H

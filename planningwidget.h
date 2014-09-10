#ifndef PLANNINGWIDGET_H
#define PLANNINGWIDGET_H

#include <QStackedWidget>
#include <QListWidgetItem>

class PomodoroApplication;

namespace Ui {
class PlanningWidget;
}

class PlanningWidget : public QStackedWidget
{
  Q_OBJECT

public:
  explicit PlanningWidget(PomodoroApplication &parent);
  ~PlanningWidget();

private slots:
  void on_activity_list_itemActivated(QListWidgetItem *item);

private:
  Ui::PlanningWidget *ui;
  PomodoroApplication & parent_app;
};

#endif // PLANNINGWIDGET_H

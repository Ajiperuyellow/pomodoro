#ifndef PLANNINGWIDGET_H
#define PLANNINGWIDGET_H

#include <QStackedWidget>
#include <QListWidgetItem>

#include <QIcon>

#include "tasklistmodel.h"


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

public slots:
  void SubmitTask();

private slots:
  void on_first_continue_button_clicked();
  void on_back_button_clicked();
  void on_activity_list_view_2_clicked(const QModelIndex &index);

  void on_todo_list_view_doubleClicked(const QModelIndex &index);

private:
  void CopyItemToTODOList(int index);
  void RemoveItemTODOList(int index);

private:
  Ui::PlanningWidget *ui;
  PomodoroApplication & parent_app;

  QIcon tomato_icon;

  QList<QString> activity_list;
  QList<QString> todo_list;

  TaskListModel inventory_list_model;
  TaskListModel todo_list_model;
};

#endif // PLANNINGWIDGET_H

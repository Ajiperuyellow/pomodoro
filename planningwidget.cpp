#include "planningwidget.h"
#include "ui_planningwidget.h"
#include "pomodoroapplication.h"

#include <QMessageBox>
#include <iostream>

PlanningWidget::PlanningWidget(PomodoroApplication & parent)
  : QStackedWidget(0),
    ui(new Ui::PlanningWidget),
    parent_app(parent),
    tomato_icon("tomato.png"),
    inventory_list_model(activity_list,0),
    todo_list_model(todo_list,0)
{
  ui->setupUi(this);

  ui->activity_list_view->setModel(&inventory_list_model);
  ui->activity_list_view_2->setModel(&inventory_list_model);
  ui->todo_list_view->setModel(&todo_list_model);

  connect(ui->add_item_button,SIGNAL(clicked()),this,SLOT(SubmitTask()));
  connect(ui->new_item_edit,SIGNAL(returnPressed()),ui->add_item_button,SIGNAL(clicked()));
  connect(ui->quit_button,SIGNAL(clicked()),&parent_app,SLOT(SwitchToMainMenu()));
}

PlanningWidget::~PlanningWidget()
{
  delete ui;
}

void PlanningWidget::SubmitTask()
{
  QString new_task = ui->new_item_edit->text();
  ui->new_item_edit->clear();

  if(new_task.isEmpty()) {
    QMessageBox::critical(this,"Error","Cannot add empty task");
    return;
  }

  activity_list.push_back(new_task);
  inventory_list_model.ListAppended();
}

void PlanningWidget::CopyItemToTODOList(int index)
{
  todo_list.push_back(activity_list[index]);
  todo_list_model.ListAppended();
}

void PlanningWidget::RemoveItemTODOList(int index)
{
  if(index >= todo_list.size())
    return;

  todo_list.removeAt(index);
  todo_list_model.ListAppended();
}

void PlanningWidget::on_first_continue_button_clicked()
{
  setCurrentIndex(1);
}

void PlanningWidget::on_back_button_clicked()
{
  setCurrentIndex(0);
}

void PlanningWidget::on_activity_list_view_2_clicked(const QModelIndex &index)
{
  CopyItemToTODOList(index.row());
}

void PlanningWidget::on_todo_list_view_doubleClicked(const QModelIndex &index)
{
  RemoveItemTODOList(index.row());
}

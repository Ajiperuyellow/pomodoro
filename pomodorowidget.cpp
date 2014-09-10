#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

#include "pomodoroapplication.h"

PomodoroWidget::PomodoroWidget(PomodoroApplication & parent)
  : QWidget(0),
    ui(new Ui::PomodoroWidget),
    parent_app(parent)
{
  ui->setupUi(this);
  connect(ui->planning_button,SIGNAL(clicked()),&parent_app,SLOT(SwitchToPlanningWindow()));
  //connect(ui->planning_button,SIGNAL(clicked()),this,SLOT(close()));
}

PomodoroWidget::~PomodoroWidget()
{
  delete ui;
}

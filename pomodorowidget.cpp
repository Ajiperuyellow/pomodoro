#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

#include "pomodoroapplication.h"

PomodoroWidget::PomodoroWidget(PomodoroApplication & parent)
  : QWidget(0),
    ui(new Ui::PomodoroWidget),
    parent_app(parent),
    tomato_icon(":/tomato.png")
{
  ui->setupUi(this);

  ui->image_label->setPixmap(tomato_icon);

  connect(ui->planning_button,SIGNAL(clicked()),&parent_app,SLOT(SwitchToPlanningWindow()));
  connect(ui->tracking_button,SIGNAL(clicked()),&parent_app,SLOT(SwitchToTrackingWindow()));
  connect(ui->quit_button,SIGNAL(clicked()),&parent_app,SLOT(QuitApplication()));
}

PomodoroWidget::~PomodoroWidget()
{
  delete ui;
}

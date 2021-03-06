#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

#include "pomodoroapplication.h"

PomodoroWidget::PomodoroWidget(PomodoroApplication * parent)
  : QWidget(0),
    ui(new Ui::PomodoroWidget),
    parent_app(parent),
    pomodoro_pic(":/pomo.png")
{
  ui->setupUi(this);

  ui->image_label->setPixmap(pomodoro_pic.scaled(QSize(100,100),Qt::KeepAspectRatio));

  connect(ui->planning_button,SIGNAL(clicked()),parent_app,SLOT(SwitchToPlanningWindow()));
  connect(ui->tracking_button,SIGNAL(clicked()),parent_app,SLOT(SwitchToTrackingWindow()));
  connect(ui->quit_button,SIGNAL(clicked()),parent_app,SLOT(QuitApplication()));
}

PomodoroWidget::~PomodoroWidget()
{
  delete ui;
}

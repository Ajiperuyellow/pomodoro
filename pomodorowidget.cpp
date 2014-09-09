#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

PomodoroWidget::PomodoroWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PomodoroWidget)
{
  ui->setupUi(this);
}

PomodoroWidget::~PomodoroWidget()
{
  delete ui;
}

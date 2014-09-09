#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

#include<QMessageBox>

PomodoroWidget::PomodoroWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PomodoroWidget),
    f()
{
  ui->setupUi(this);
}

PomodoroWidget::~PomodoroWidget()
{
  delete ui;
}

void PomodoroWidget::on_killSwitch_clicked()
{
  try{
    f.startTimer();
  }catch(std::exception &e){
        QMessageBox::critical(this,"Doom & Gloom",e.what());
  }
}

#include "pomodorowidget.h"
#include "ui_pomodorowidget.h"

#include<QMessageBox>

PomodoroWidget::PomodoroWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PomodoroWidget),
    FrameworkPlanningInstance(),FrameworkTrackingInstance()
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
        FrameworkPlanningInstance.EnterListItem();
        }catch(std::exception &e)
        {
        QMessageBox::critical(this,"Doom & Gloom",e.what());
        }
    try{
        FrameworkPlanningInstance.SetNumberOfPomodori();
        }catch(std::exception &e)
        {
        QMessageBox::critical(this,"Doom & Gloom",e.what());
        }
    try{
        FrameworkTrackingInstance.Interrupt();
        }catch(std::exception &e)
        {
        QMessageBox::critical(this,"Doom & Gloom",e.what());
        }
    try{
        FrameworkTrackingInstance.StartTimer();
        }catch(std::exception &e)
        {
        QMessageBox::critical(this,"Doom & Gloom",e.what());
        }

}

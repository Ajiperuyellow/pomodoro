#include "planningwidget.h"
#include "ui_planningwidget.h"

#include<QMessageBox>

PlanningWidget::PlanningWidget(PomodoroApplication & parent)
  : QStackedWidget(0),
    ui(new Ui::PlanningWidget),
    parent_app(parent)
{
  ui->setupUi(this);
}

PlanningWidget::~PlanningWidget()
{
  delete ui;
}

void PlanningWidget::on_activity_list_itemActivated(QListWidgetItem *item)
{
   QMessageBox::information(this,"Title",item->text());
}

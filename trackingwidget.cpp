#include "trackingwidget.h"
#include "ui_trackingwidget.h"

TrackingWidget::TrackingWidget(PomodoroApplication & parent)
  : QWidget(0),
    ui(new Ui::TrackingWidget),
    parent_app(parent)
{
  ui->setupUi(this);
}

TrackingWidget::~TrackingWidget()
{
  delete ui;
}

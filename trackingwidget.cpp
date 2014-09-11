#include "trackingwidget.h"
#include "ui_trackingwidget.h"
#include <QMessageBox>
#include <QDateTime>

TrackingWidget::TrackingWidget(PomodoroApplication * parent)
  : QWidget(0),
    ui(new Ui::TrackingWidget),
    parent_app(parent),
    framework(*this)
{
  ui->setupUi(this);
}

TrackingWidget::~TrackingWidget()
{
  delete ui;
}

void TrackingWidget::TimeUp()
{
  QMessageBox::information(this,"Time up","Pomodoro out, time for a break");
  pop_up.show();
}

void TrackingWidget::ClockTick(int display_seconds)
{
  int minutes = display_seconds/60;
  int seconds = display_seconds%60;

  QString time_string = QString::number(minutes);
  time_string += " : ";

  if(seconds/10 == 0)
    time_string += " ";

  time_string += QString::number(seconds);

  ui->time_left_lcd->display(time_string);
}

void TrackingWidget::on_start_pomodoro_button_clicked()
{
   framework.StartTimer();
}

#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>

class FrameworkTracking;
class FrameworkPlanning;

class Timer : public QObject
{

  Q_OBJECT

public:
  explicit Timer(FrameworkTracking & FrTr, QObject *parent = 0);
 
  void Go(int seconds_to_run_arg);
  void Stop();

public slots:
  void Tick();
  
private:
  QTimer aQTimerObject;
  int seconds_counter;
  FrameworkTracking & FrameworkTrackingInstance;
  int seconds_to_run;
};

#endif // FRAMEWORK_H

#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>

class Timer : public QObject
{
  Q_OBJECT
public:
  explicit Timer(QObject *parent = 0);

public slots:
  void Tick();

private:
  QTimer t;

};

#endif // FRAMEWORK_H

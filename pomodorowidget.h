#ifndef POMODOROWIDGET_H
#define POMODOROWIDGET_H

#include <QMainWindow>

namespace Ui {
class PomodoroWidget;
}

class PomodoroWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit PomodoroWidget(QWidget *parent = 0);
    ~PomodoroWidget();

private:
    Ui::PomodoroWidget *ui;
};

#endif // POMODOROWIDGET_H

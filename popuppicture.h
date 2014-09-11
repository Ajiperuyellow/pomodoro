#ifndef POPUPPICTURE_H
#define POPUPPICTURE_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class PopUpPicture;
}

class PopUpPicture : public QWidget
{
  Q_OBJECT

public:
  explicit PopUpPicture(QWidget *parent = 0);
  ~PopUpPicture();

private:
  Ui::PopUpPicture *ui;
  QPixmap pop_up_picture;
};

#endif // POPUPPICTURE_H

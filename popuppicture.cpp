#include "popuppicture.h"
#include "ui_popuppicture.h"

PopUpPicture::PopUpPicture(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::PopUpPicture),
  pop_up_picture(":/melon.png")
{
  ui->setupUi(this);
  ui->label->setPixmap(pop_up_picture);
}

PopUpPicture::~PopUpPicture()
{
  delete ui;
}

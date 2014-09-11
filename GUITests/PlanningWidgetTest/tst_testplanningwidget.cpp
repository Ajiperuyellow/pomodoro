#include <QtGui>
#include <QtTest>

#include "planningwidget.h"
#include "ui_planningwidget.h"

class TestPlanningWidget : public QObject
{
  Q_OBJECT

public:
  TestPlanningWidget();

private Q_SLOTS:
  void initTestCase();
  void cleanupTestCase();
  void testCase1();

private:
  PlanningWidget pw;

  QLineEdit * new_item_line_edit;
  QPushButton * add_item_button;
  QListView * activity_list_view;
};

TestPlanningWidget::TestPlanningWidget()
  : pw(nullptr)
{
}

void TestPlanningWidget::initTestCase()
{

  new_item_line_edit = pw.findChild<QLineEdit*>("new_item_edit");
  add_item_button = pw.findChild<QPushButton*>("add_item_button");
  activity_list_view = pw.findChild<QListView*>("activity_list_view");

  QTest::keyClicks(new_item_line_edit,"New item");
  QTest::mouseClick(add_item_button,Qt::LeftButton);
}

void TestPlanningWidget::cleanupTestCase()
{
}

void TestPlanningWidget::testCase1()
{
  QVERIFY(new_item_line_edit->text().isEmpty());
  QCOMPARE(QString("New item"),activity_list_view->data());
}

QTEST_MAIN(TestPlanningWidget)

#include "tst_testplanningwidget.moc"

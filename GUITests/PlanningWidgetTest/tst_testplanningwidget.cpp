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
  void testEditEmpty();
  void testNumberOfItems1();
  void testFirstItemInventory();
  void testSecondItemInventory();
  void testTodoSize();
  void testTodoItem1();
  void testTodoItem2();

private:
  PlanningWidget pw;

  QLineEdit * new_item_line_edit;
  QPushButton * add_item_button;
  QListView * activity_list_view_2;
  QListView * todo_list_view;

  QString item1;
  QString item2;
};

TestPlanningWidget::TestPlanningWidget()
  : pw(nullptr),
    new_item_line_edit(pw.findChild<QLineEdit*>("new_item_edit")),
    add_item_button(pw.findChild<QPushButton*>("add_item_button")),
    activity_list_view_2(pw.findChild<QListView*>("activity_list_list_view_2")),
    todo_list_view(pw.findChild<QListView*>("todo_list_view")),
    item1("New item"),
    item2("Second item")
{
}

void TestPlanningWidget::initTestCase()
{
  QTest::keyClicks(new_item_line_edit,item1);
  QTest::mouseClick(add_item_button,Qt::LeftButton);

  QTest::keyClicks(new_item_line_edit,item2);
  QTest::mouseClick(add_item_button,Qt::LeftButton);

  pw.on_activity_list_view_2_clicked(pw.inventory_list_model.getItemIndex(1));
  pw.on_activity_list_view_2_clicked(pw.inventory_list_model.getItemIndex(0));
  pw.on_activity_list_view_2_clicked(pw.inventory_list_model.getItemIndex(0));

  pw.on_todo_list_view_doubleClicked(pw.todo_list_model.getItemIndex(1));
}

void TestPlanningWidget::cleanupTestCase()
{
}

void TestPlanningWidget::testEditEmpty()
{
  QVERIFY(new_item_line_edit->text().isEmpty());
}

void TestPlanningWidget::testNumberOfItems1()
{
  QVERIFY(pw.activity_list.size() == 2);
}

void TestPlanningWidget::testFirstItemInventory()
{
  QCOMPARE(item1,pw.activity_list.at(0));
}

void TestPlanningWidget::testSecondItemInventory()
{
  QCOMPARE(item2,pw.activity_list.at(1));
}

void TestPlanningWidget::testTodoSize()
{
  QVERIFY(pw.todo_list.size() == 2);
}

void TestPlanningWidget::testTodoItem1()
{
  QCOMPARE(item2,pw.todo_list.at(0));
}

void TestPlanningWidget::testTodoItem2()
{
  QCOMPARE(item1,pw.todo_list.at(1));
}

QTEST_MAIN(TestPlanningWidget)

#include "tst_testplanningwidget.moc"

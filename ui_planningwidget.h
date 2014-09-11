/********************************************************************************
** Form generated from reading UI file 'planningwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNINGWIDGET_H
#define UI_PLANNINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanningWidget
{
public:
    QWidget *new_task_page;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *activity_list_label;
    QListView *activity_list_view;
    QHBoxLayout *horizontalLayout;
    QLineEdit *new_item_edit;
    QPushButton *add_item_button;
    QPushButton *first_continue_button;
    QWidget *todo_editing_page;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *today_todo_list_label;
    QListView *activity_list_view_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *activity_list_label_2;
    QListView *todo_list_view;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *quit_button;
    QPushButton *back_button;
    QPushButton *continue_button;

    void setupUi(QStackedWidget *PlanningWidget)
    {
        if (PlanningWidget->objectName().isEmpty())
            PlanningWidget->setObjectName(QStringLiteral("PlanningWidget"));
        PlanningWidget->resize(660, 240);
        new_task_page = new QWidget();
        new_task_page->setObjectName(QStringLiteral("new_task_page"));
        new_task_page->setEnabled(true);
        horizontalLayout_6 = new QHBoxLayout(new_task_page);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        activity_list_label = new QLabel(new_task_page);
        activity_list_label->setObjectName(QStringLiteral("activity_list_label"));
        activity_list_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(activity_list_label);

        activity_list_view = new QListView(new_task_page);
        activity_list_view->setObjectName(QStringLiteral("activity_list_view"));

        verticalLayout->addWidget(activity_list_view);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        new_item_edit = new QLineEdit(new_task_page);
        new_item_edit->setObjectName(QStringLiteral("new_item_edit"));

        horizontalLayout->addWidget(new_item_edit);

        add_item_button = new QPushButton(new_task_page);
        add_item_button->setObjectName(QStringLiteral("add_item_button"));

        horizontalLayout->addWidget(add_item_button);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        first_continue_button = new QPushButton(new_task_page);
        first_continue_button->setObjectName(QStringLiteral("first_continue_button"));

        horizontalLayout_2->addWidget(first_continue_button);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        PlanningWidget->addWidget(new_task_page);
        todo_editing_page = new QWidget();
        todo_editing_page->setObjectName(QStringLiteral("todo_editing_page"));
        horizontalLayout_5 = new QHBoxLayout(todo_editing_page);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        today_todo_list_label = new QLabel(todo_editing_page);
        today_todo_list_label->setObjectName(QStringLiteral("today_todo_list_label"));
        today_todo_list_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(today_todo_list_label);

        activity_list_view_2 = new QListView(todo_editing_page);
        activity_list_view_2->setObjectName(QStringLiteral("activity_list_view_2"));

        verticalLayout_3->addWidget(activity_list_view_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activity_list_label_2 = new QLabel(todo_editing_page);
        activity_list_label_2->setObjectName(QStringLiteral("activity_list_label_2"));
        activity_list_label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(activity_list_label_2);

        todo_list_view = new QListView(todo_editing_page);
        todo_list_view->setObjectName(QStringLiteral("todo_list_view"));

        verticalLayout_2->addWidget(todo_list_view);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        quit_button = new QPushButton(todo_editing_page);
        quit_button->setObjectName(QStringLiteral("quit_button"));

        horizontalLayout_3->addWidget(quit_button);

        back_button = new QPushButton(todo_editing_page);
        back_button->setObjectName(QStringLiteral("back_button"));

        horizontalLayout_3->addWidget(back_button);

        continue_button = new QPushButton(todo_editing_page);
        continue_button->setObjectName(QStringLiteral("continue_button"));

        horizontalLayout_3->addWidget(continue_button);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        PlanningWidget->addWidget(todo_editing_page);

        retranslateUi(PlanningWidget);

        PlanningWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PlanningWidget);
    } // setupUi

    void retranslateUi(QStackedWidget *PlanningWidget)
    {
        PlanningWidget->setWindowTitle(QApplication::translate("PlanningWidget", "StackedWidget", 0));
        activity_list_label->setText(QApplication::translate("PlanningWidget", "Activity Inventory List", 0));
        add_item_button->setText(QApplication::translate("PlanningWidget", "Add Item", 0));
        first_continue_button->setText(QApplication::translate("PlanningWidget", "Continue", 0));
        today_todo_list_label->setText(QApplication::translate("PlanningWidget", "Activity Inventory List", 0));
        activity_list_label_2->setText(QApplication::translate("PlanningWidget", "Today TODO List", 0));
        quit_button->setText(QApplication::translate("PlanningWidget", "Quit", 0));
        back_button->setText(QApplication::translate("PlanningWidget", "Back", 0));
        continue_button->setText(QApplication::translate("PlanningWidget", "Continue", 0));
    } // retranslateUi

};

namespace Ui {
    class PlanningWidget: public Ui_PlanningWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNINGWIDGET_H

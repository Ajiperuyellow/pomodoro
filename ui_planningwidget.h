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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanningWidget
{
public:
    QWidget *page_2;
    QWidget *page;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *activity_list;
    QHBoxLayout *horizontalLayout;
    QLineEdit *new_item_edit;
    QPushButton *add_item_button;
    QPushButton *first_continue_button;

    void setupUi(QStackedWidget *PlanningWidget)
    {
        if (PlanningWidget->objectName().isEmpty())
            PlanningWidget->setObjectName(QStringLiteral("PlanningWidget"));
        PlanningWidget->resize(660, 240);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setEnabled(true);
        PlanningWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 641, 225));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        activity_list = new QListWidget(widget);
        new QListWidgetItem(activity_list);
        activity_list->setObjectName(QStringLiteral("activity_list"));

        verticalLayout->addWidget(activity_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        new_item_edit = new QLineEdit(widget);
        new_item_edit->setObjectName(QStringLiteral("new_item_edit"));

        horizontalLayout->addWidget(new_item_edit);

        add_item_button = new QPushButton(widget);
        add_item_button->setObjectName(QStringLiteral("add_item_button"));

        horizontalLayout->addWidget(add_item_button);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        first_continue_button = new QPushButton(widget);
        first_continue_button->setObjectName(QStringLiteral("first_continue_button"));

        horizontalLayout_2->addWidget(first_continue_button);

        PlanningWidget->addWidget(page);

        retranslateUi(PlanningWidget);

        PlanningWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PlanningWidget);
    } // setupUi

    void retranslateUi(QStackedWidget *PlanningWidget)
    {
        PlanningWidget->setWindowTitle(QApplication::translate("PlanningWidget", "StackedWidget", 0));

        const bool __sortingEnabled = activity_list->isSortingEnabled();
        activity_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = activity_list->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PlanningWidget", "The first item in the list", 0));
        activity_list->setSortingEnabled(__sortingEnabled);

        add_item_button->setText(QApplication::translate("PlanningWidget", "Add Item", 0));
        first_continue_button->setText(QApplication::translate("PlanningWidget", "Continue", 0));
    } // retranslateUi

};

namespace Ui {
    class PlanningWidget: public Ui_PlanningWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNINGWIDGET_H

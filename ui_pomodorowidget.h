/********************************************************************************
** Form generated from reading UI file 'pomodorowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POMODOROWIDGET_H
#define UI_POMODOROWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PomodoroWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *planning_button;
    QPushButton *tracking_button;

    void setupUi(QWidget *PomodoroWidget)
    {
        if (PomodoroWidget->objectName().isEmpty())
            PomodoroWidget->setObjectName(QStringLiteral("PomodoroWidget"));
        PomodoroWidget->resize(200, 200);
        verticalLayout_2 = new QVBoxLayout(PomodoroWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        planning_button = new QPushButton(PomodoroWidget);
        planning_button->setObjectName(QStringLiteral("planning_button"));

        verticalLayout->addWidget(planning_button);

        tracking_button = new QPushButton(PomodoroWidget);
        tracking_button->setObjectName(QStringLiteral("tracking_button"));

        verticalLayout->addWidget(tracking_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(PomodoroWidget);

        QMetaObject::connectSlotsByName(PomodoroWidget);
    } // setupUi

    void retranslateUi(QWidget *PomodoroWidget)
    {
        PomodoroWidget->setWindowTitle(QApplication::translate("PomodoroWidget", "Form", 0));
        planning_button->setText(QApplication::translate("PomodoroWidget", "Planning", 0));
        tracking_button->setText(QApplication::translate("PomodoroWidget", "Tracking", 0));
    } // retranslateUi

};

namespace Ui {
    class PomodoroWidget: public Ui_PomodoroWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODOROWIDGET_H

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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PomodoroWidget
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PomodoroWidget)
    {
        if (PomodoroWidget->objectName().isEmpty())
            PomodoroWidget->setObjectName(QStringLiteral("PomodoroWidget"));
        PomodoroWidget->resize(400, 300);
        centralWidget = new QWidget(PomodoroWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 391, 251));
        PomodoroWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PomodoroWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 18));
        PomodoroWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PomodoroWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PomodoroWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PomodoroWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PomodoroWidget->setStatusBar(statusBar);

        retranslateUi(PomodoroWidget);

        QMetaObject::connectSlotsByName(PomodoroWidget);
    } // setupUi

    void retranslateUi(QMainWindow *PomodoroWidget)
    {
        PomodoroWidget->setWindowTitle(QApplication::translate("PomodoroWidget", "PomodoroWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class PomodoroWidget: public Ui_PomodoroWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODOROWIDGET_H

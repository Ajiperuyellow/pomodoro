/********************************************************************************
** Form generated from reading UI file 'pomodorowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POMODOROWIDGET_H
#define UI_POMODOROWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PomodoroWidget
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *killSwitch;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PomodoroWidget)
    {
        if (PomodoroWidget->objectName().isEmpty())
            PomodoroWidget->setObjectName(QStringLiteral("PomodoroWidget"));
        PomodoroWidget->resize(467, 368);
        centralWidget = new QWidget(PomodoroWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 381, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        killSwitch = new QPushButton(layoutWidget);
        killSwitch->setObjectName(QStringLiteral("killSwitch"));
        killSwitch->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(killSwitch);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(150, 260, 97, 22));
        PomodoroWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PomodoroWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 467, 25));
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
        killSwitch->setText(QApplication::translate("PomodoroWidget", "Do Not Press!", 0));
        checkBox->setText(QApplication::translate("PomodoroWidget", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class PomodoroWidget: public Ui_PomodoroWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODOROWIDGET_H

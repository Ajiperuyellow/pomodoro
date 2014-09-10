/********************************************************************************
** Form generated from reading UI file 'trackingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKINGWIDGET_H
#define UI_TRACKINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackingWidget
{
public:

    void setupUi(QWidget *TrackingWidget)
    {
        if (TrackingWidget->objectName().isEmpty())
            TrackingWidget->setObjectName(QStringLiteral("TrackingWidget"));
        TrackingWidget->resize(320, 240);

        retranslateUi(TrackingWidget);

        QMetaObject::connectSlotsByName(TrackingWidget);
    } // setupUi

    void retranslateUi(QWidget *TrackingWidget)
    {
        TrackingWidget->setWindowTitle(QApplication::translate("TrackingWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TrackingWidget: public Ui_TrackingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKINGWIDGET_H

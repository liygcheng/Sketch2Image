/********************************************************************************
** Form generated from reading UI file 'sketch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCH_H
#define UI_SKETCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SketchClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SketchClass)
    {
        if (SketchClass->objectName().isEmpty())
            SketchClass->setObjectName(QStringLiteral("SketchClass"));
        SketchClass->resize(600, 400);
        menuBar = new QMenuBar(SketchClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SketchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SketchClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SketchClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SketchClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SketchClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SketchClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SketchClass->setStatusBar(statusBar);

        retranslateUi(SketchClass);

        QMetaObject::connectSlotsByName(SketchClass);
    } // setupUi

    void retranslateUi(QMainWindow *SketchClass)
    {
        SketchClass->setWindowTitle(QApplication::translate("SketchClass", "Sketch", 0));
    } // retranslateUi

};

namespace Ui {
    class SketchClass: public Ui_SketchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCH_H

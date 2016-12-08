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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SketchClass
{
public:
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionImage_Folder;
    QAction *actionImage_Configure;
    QWidget *centralWidget;
    QGraphicsView *m_SketchPlane;
    QComboBox *m_Tag;
    QComboBox *m_FunctionType;
    QScrollArea *m_SearchScrollArea;
    QWidget *scrollAreaSketch;
    QScrollArea *m_SketchScrollArea;
    QWidget *scrollAreaSearch;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SketchClass)
    {
        if (SketchClass->objectName().isEmpty())
            SketchClass->setObjectName(QStringLiteral("SketchClass"));
        SketchClass->resize(692, 648);
        actionSave = new QAction(SketchClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(SketchClass);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionImage_Folder = new QAction(SketchClass);
        actionImage_Folder->setObjectName(QStringLiteral("actionImage_Folder"));
        actionImage_Configure = new QAction(SketchClass);
        actionImage_Configure->setObjectName(QStringLiteral("actionImage_Configure"));
        centralWidget = new QWidget(SketchClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_SketchPlane = new QGraphicsView(centralWidget);
        m_SketchPlane->setObjectName(QStringLiteral("m_SketchPlane"));
        m_SketchPlane->setGeometry(QRect(0, 0, 481, 421));
        m_Tag = new QComboBox(centralWidget);
        m_Tag->setObjectName(QStringLiteral("m_Tag"));
        m_Tag->setGeometry(QRect(590, 10, 91, 31));
        m_FunctionType = new QComboBox(centralWidget);
        m_FunctionType->setObjectName(QStringLiteral("m_FunctionType"));
        m_FunctionType->setGeometry(QRect(490, 10, 91, 31));
        m_SearchScrollArea = new QScrollArea(centralWidget);
        m_SearchScrollArea->setObjectName(QStringLiteral("m_SearchScrollArea"));
        m_SearchScrollArea->setGeometry(QRect(489, 60, 191, 521));
        m_SearchScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_SearchScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_SearchScrollArea->setWidgetResizable(true);
        scrollAreaSketch = new QWidget();
        scrollAreaSketch->setObjectName(QStringLiteral("scrollAreaSketch"));
        scrollAreaSketch->setGeometry(QRect(0, 0, 172, 519));
        m_SearchScrollArea->setWidget(scrollAreaSketch);
        m_SketchScrollArea = new QScrollArea(centralWidget);
        m_SketchScrollArea->setObjectName(QStringLiteral("m_SketchScrollArea"));
        m_SketchScrollArea->setGeometry(QRect(0, 429, 481, 151));
        m_SketchScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_SketchScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_SketchScrollArea->setWidgetResizable(true);
        scrollAreaSearch = new QWidget();
        scrollAreaSearch->setObjectName(QStringLiteral("scrollAreaSearch"));
        scrollAreaSearch->setGeometry(QRect(0, 0, 462, 149));
        m_SketchScrollArea->setWidget(scrollAreaSearch);
        SketchClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SketchClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 692, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        SketchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SketchClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SketchClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SketchClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        statusBar->setFont(font);
        statusBar->setAutoFillBackground(true);
        statusBar->setStyleSheet(QStringLiteral(""));
        statusBar->setInputMethodHints(Qt::ImhTime);
        SketchClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuOpen->addAction(actionImage_Folder);
        menuOpen->addAction(actionImage_Configure);

        retranslateUi(SketchClass);

        QMetaObject::connectSlotsByName(SketchClass);
    } // setupUi

    void retranslateUi(QMainWindow *SketchClass)
    {
        SketchClass->setWindowTitle(QApplication::translate("SketchClass", "Sketch", 0));
        actionSave->setText(QApplication::translate("SketchClass", "Save", 0));
        actionSave_as->setText(QApplication::translate("SketchClass", "Save as", 0));
        actionImage_Folder->setText(QApplication::translate("SketchClass", "Image Folder", 0));
        actionImage_Configure->setText(QApplication::translate("SketchClass", "Image Configure", 0));
#ifndef QT_NO_STATUSTIP
        m_Tag->setStatusTip(QApplication::translate("SketchClass", "Tag", 0));
#endif // QT_NO_STATUSTIP
        m_Tag->setCurrentText(QString());
#ifndef QT_NO_STATUSTIP
        m_FunctionType->setStatusTip(QApplication::translate("SketchClass", "functional type", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        m_FunctionType->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        m_FunctionType->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        m_FunctionType->setCurrentText(QString());
        menuFile->setTitle(QApplication::translate("SketchClass", "File", 0));
        menuOpen->setTitle(QApplication::translate("SketchClass", "Open", 0));
    } // retranslateUi

};

namespace Ui {
    class SketchClass: public Ui_SketchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCH_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
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
    QComboBox *m_Tag;
    QComboBox *m_FunctionType;
    QScrollArea *m_SearchScrollArea;
    QWidget *scrollAreaSketch;
    QScrollArea *m_SketchScrollArea;
    QWidget *scrollAreaSearch;
    QLabel *m_SketchPlane;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SketchClass)
    {
        if (SketchClass->objectName().isEmpty())
            SketchClass->setObjectName(QStringLiteral("SketchClass"));
        SketchClass->resize(755, 630);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(148, 220, 109, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(221, 255, 202, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(184, 237, 155, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(74, 110, 54, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(99, 147, 72, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(201, 237, 182, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SketchClass->setPalette(palette);
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
        QPalette palette1;
        QBrush brush9(QColor(219, 255, 251, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        QBrush brush10(QColor(213, 220, 190, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        centralWidget->setPalette(palette1);
        m_Tag = new QComboBox(centralWidget);
        m_Tag->setObjectName(QStringLiteral("m_Tag"));
        m_Tag->setGeometry(QRect(620, 10, 121, 31));
        m_FunctionType = new QComboBox(centralWidget);
        m_FunctionType->setObjectName(QStringLiteral("m_FunctionType"));
        m_FunctionType->setGeometry(QRect(490, 10, 121, 31));
        m_SearchScrollArea = new QScrollArea(centralWidget);
        m_SearchScrollArea->setObjectName(QStringLiteral("m_SearchScrollArea"));
        m_SearchScrollArea->setGeometry(QRect(489, 60, 251, 521));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        m_SearchScrollArea->setPalette(palette2);
        m_SearchScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_SearchScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_SearchScrollArea->setWidgetResizable(true);
        scrollAreaSketch = new QWidget();
        scrollAreaSketch->setObjectName(QStringLiteral("scrollAreaSketch"));
        scrollAreaSketch->setGeometry(QRect(0, 0, 232, 519));
        m_SearchScrollArea->setWidget(scrollAreaSketch);
        m_SketchScrollArea = new QScrollArea(centralWidget);
        m_SketchScrollArea->setObjectName(QStringLiteral("m_SketchScrollArea"));
        m_SketchScrollArea->setGeometry(QRect(0, 429, 481, 151));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        m_SketchScrollArea->setPalette(palette3);
        m_SketchScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_SketchScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_SketchScrollArea->setWidgetResizable(true);
        scrollAreaSearch = new QWidget();
        scrollAreaSearch->setObjectName(QStringLiteral("scrollAreaSearch"));
        scrollAreaSearch->setGeometry(QRect(0, 0, 479, 132));
        m_SketchScrollArea->setWidget(scrollAreaSearch);
        m_SketchPlane = new QLabel(centralWidget);
        m_SketchPlane->setObjectName(QStringLiteral("m_SketchPlane"));
        m_SketchPlane->setGeometry(QRect(10, 20, 461, 391));
        SketchClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SketchClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 21));
        QPalette palette4;
        QBrush brush11(QColor(252, 255, 229, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush11);
        QBrush brush12(QColor(199, 216, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        menuBar->setPalette(palette4);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        SketchClass->setMenuBar(menuBar);
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
        m_SketchPlane->setText(QString());
        menuFile->setTitle(QApplication::translate("SketchClass", "File", 0));
        menuOpen->setTitle(QApplication::translate("SketchClass", "Open", 0));
    } // retranslateUi

};

namespace Ui {
    class SketchClass: public Ui_SketchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCH_H

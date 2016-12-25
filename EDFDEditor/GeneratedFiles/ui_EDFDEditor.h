/********************************************************************************
** Form generated from reading UI file 'EDFDEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDFDEDITOR_H
#define UI_EDFDEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ADrawWidget.h"
#include "AWorkspaceWidget.h"
#include "sdpwidget.h"

QT_BEGIN_NAMESPACE

class Ui_EDFDEditor
{
public:
    QAction *actionAbout;
    QAction *ASave;
    QAction *ASaveAs;
    QAction *ALoad;
    QAction *AExit;
    QAction *ANewFile;
    QAction *ACover;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    AWorkspaceWidget *gvDocument;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuSDP;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    ADrawWidget *listWidget;
    QDockWidget *sdpDockWidget;
    QWidget *dockWidgetContents_2;
    SDPWidget *sdpListWidget;

    void setupUi(QMainWindow *EDFDEditor)
    {
        if (EDFDEditor->objectName().isEmpty())
            EDFDEditor->setObjectName(QStringLiteral("EDFDEditor"));
        EDFDEditor->resize(1052, 929);
        actionAbout = new QAction(EDFDEditor);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        ASave = new QAction(EDFDEditor);
        ASave->setObjectName(QStringLiteral("ASave"));
        ASaveAs = new QAction(EDFDEditor);
        ASaveAs->setObjectName(QStringLiteral("ASaveAs"));
        ALoad = new QAction(EDFDEditor);
        ALoad->setObjectName(QStringLiteral("ALoad"));
        AExit = new QAction(EDFDEditor);
        AExit->setObjectName(QStringLiteral("AExit"));
        ANewFile = new QAction(EDFDEditor);
        ANewFile->setObjectName(QStringLiteral("ANewFile"));
        ACover = new QAction(EDFDEditor);
        ACover->setObjectName(QStringLiteral("ACover"));
        centralWidget = new QWidget(EDFDEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gvDocument = new AWorkspaceWidget(centralWidget);
        gvDocument->setObjectName(QStringLiteral("gvDocument"));

        horizontalLayout->addWidget(gvDocument);

        EDFDEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EDFDEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1052, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSDP = new QMenu(menuBar);
        menuSDP->setObjectName(QStringLiteral("menuSDP"));
        EDFDEditor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EDFDEditor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        EDFDEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EDFDEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EDFDEditor->setStatusBar(statusBar);
        dockWidget = new QDockWidget(EDFDEditor);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new ADrawWidget(dockWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(0, 192));
        listWidget->setMaximumSize(QSize(16777215, 192));

        verticalLayout->addWidget(listWidget, 0, Qt::AlignTop);

        dockWidget->setWidget(dockWidgetContents);
        EDFDEditor->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        sdpDockWidget = new QDockWidget(EDFDEditor);
        sdpDockWidget->setObjectName(QStringLiteral("sdpDockWidget"));
        sdpDockWidget->setEnabled(true);
        sdpDockWidget->setMinimumSize(QSize(256, 658));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        dockWidgetContents_2->setEnabled(true);
        sdpListWidget = new SDPWidget(dockWidgetContents_2);
        sdpListWidget->setObjectName(QStringLiteral("sdpListWidget"));
        sdpListWidget->setEnabled(true);
        sdpListWidget->setGeometry(QRect(0, 0, 256, 441));
        sdpListWidget->setMaximumSize(QSize(16777215, 441));
        sdpDockWidget->setWidget(dockWidgetContents_2);
        EDFDEditor->addDockWidget(static_cast<Qt::DockWidgetArea>(1), sdpDockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSDP->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(ANewFile);
        menuFile->addAction(ASave);
        menuFile->addAction(ASaveAs);
        menuFile->addAction(ALoad);
        menuFile->addSeparator();
        menuFile->addAction(AExit);
        menuHelp->addAction(actionAbout);
        menuSDP->addAction(ACover);

        retranslateUi(EDFDEditor);

        QMetaObject::connectSlotsByName(EDFDEditor);
    } // setupUi

    void retranslateUi(QMainWindow *EDFDEditor)
    {
        EDFDEditor->setWindowTitle(QApplication::translate("EDFDEditor", "EDFDEditor", 0));
        actionAbout->setText(QApplication::translate("EDFDEditor", "About", 0));
        ASave->setText(QApplication::translate("EDFDEditor", "Save()", 0));
        ASaveAs->setText(QApplication::translate("EDFDEditor", "SaveAs()", 0));
        ALoad->setText(QApplication::translate("EDFDEditor", "Load()", 0));
        AExit->setText(QApplication::translate("EDFDEditor", "Exit", 0));
        ANewFile->setText(QApplication::translate("EDFDEditor", "New File", 0));
        ACover->setText(QApplication::translate("EDFDEditor", "Cover", 0));
        menuFile->setTitle(QApplication::translate("EDFDEditor", "File", 0));
        menuHelp->setTitle(QApplication::translate("EDFDEditor", "Help", 0));
        menuSDP->setTitle(QApplication::translate("EDFDEditor", "SDP", 0));
    } // retranslateUi

};

namespace Ui {
    class EDFDEditor: public Ui_EDFDEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDFDEDITOR_H

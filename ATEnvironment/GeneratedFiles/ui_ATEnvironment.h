/********************************************************************************
** Form generated from reading UI file 'ATEnvironment.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATENVIRONMENT_H
#define UI_ATENVIRONMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AConsoleWidget.h"
#include "AProjectExplorer.h"

QT_BEGIN_NAMESPACE

class Ui_ATEnvironmentClass
{
public:
    QAction *actionNewProject;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSave_Project;
    QAction *actionNewFile;
    QAction *actionPlugins;
    QAction *actionSaveFile;
    QAction *actionSaveAsFile;
    QAction *actionSave_all;
    QAction *actionOpenProject;
    QAction *actionOpenFile;
    QAction *actionBuildProject;
    QAction *actionBuildCleanProject;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuOpen;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuBuild;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dwProjectExplorer;
    AProjectExplorer *wdgProjectExplorer;
    QVBoxLayout *verticalLayout;
    QDockWidget *dockWidget_3;
    AConsoleWidget *wdgConsole;
    QDockWidget *dockPlanner;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *ATEnvironmentClass)
    {
        if (ATEnvironmentClass->objectName().isEmpty())
            ATEnvironmentClass->setObjectName(QStringLiteral("ATEnvironmentClass"));
        ATEnvironmentClass->resize(997, 717);
        actionNewProject = new QAction(ATEnvironmentClass);
        actionNewProject->setObjectName(QStringLiteral("actionNewProject"));
        actionExit = new QAction(ATEnvironmentClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(ATEnvironmentClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave_Project = new QAction(ATEnvironmentClass);
        actionSave_Project->setObjectName(QStringLiteral("actionSave_Project"));
        actionNewFile = new QAction(ATEnvironmentClass);
        actionNewFile->setObjectName(QStringLiteral("actionNewFile"));
        actionPlugins = new QAction(ATEnvironmentClass);
        actionPlugins->setObjectName(QStringLiteral("actionPlugins"));
        actionSaveFile = new QAction(ATEnvironmentClass);
        actionSaveFile->setObjectName(QStringLiteral("actionSaveFile"));
        actionSaveFile->setEnabled(false);
        actionSaveAsFile = new QAction(ATEnvironmentClass);
        actionSaveAsFile->setObjectName(QStringLiteral("actionSaveAsFile"));
        actionSaveAsFile->setEnabled(false);
        actionSave_all = new QAction(ATEnvironmentClass);
        actionSave_all->setObjectName(QStringLiteral("actionSave_all"));
        actionOpenProject = new QAction(ATEnvironmentClass);
        actionOpenProject->setObjectName(QStringLiteral("actionOpenProject"));
        actionOpenFile = new QAction(ATEnvironmentClass);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        actionBuildProject = new QAction(ATEnvironmentClass);
        actionBuildProject->setObjectName(QStringLiteral("actionBuildProject"));
        actionBuildCleanProject = new QAction(ATEnvironmentClass);
        actionBuildCleanProject->setObjectName(QStringLiteral("actionBuildCleanProject"));
        centralWidget = new QWidget(ATEnvironmentClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setDocumentMode(true);
        mdiArea->setTabsClosable(true);
        mdiArea->setTabsMovable(true);

        horizontalLayout->addWidget(mdiArea);

        ATEnvironmentClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ATEnvironmentClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 997, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QStringLiteral("menuBuild"));
        ATEnvironmentClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ATEnvironmentClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ATEnvironmentClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ATEnvironmentClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ATEnvironmentClass->setStatusBar(statusBar);
        dwProjectExplorer = new QDockWidget(ATEnvironmentClass);
        dwProjectExplorer->setObjectName(QStringLiteral("dwProjectExplorer"));
        dwProjectExplorer->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        wdgProjectExplorer = new AProjectExplorer();
        wdgProjectExplorer->setObjectName(QStringLiteral("wdgProjectExplorer"));
        verticalLayout = new QVBoxLayout(wdgProjectExplorer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dwProjectExplorer->setWidget(wdgProjectExplorer);
        ATEnvironmentClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dwProjectExplorer);
        dockWidget_3 = new QDockWidget(ATEnvironmentClass);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setAllowedAreas(Qt::BottomDockWidgetArea);
        wdgConsole = new AConsoleWidget();
        wdgConsole->setObjectName(QStringLiteral("wdgConsole"));
        dockWidget_3->setWidget(wdgConsole);
        ATEnvironmentClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_3);
        dockPlanner = new QDockWidget(ATEnvironmentClass);
        dockPlanner->setObjectName(QStringLiteral("dockPlanner"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        dockPlanner->setWidget(dockWidgetContents_2);
        ATEnvironmentClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockPlanner);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveFile);
        menuFile->addAction(actionSaveAsFile);
        menuFile->addAction(actionSave_all);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuNew->addAction(actionNewProject);
        menuNew->addAction(actionNewFile);
        menuOpen->addAction(actionOpenProject);
        menuOpen->addAction(actionOpenFile);
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionPlugins);
        menuBuild->addAction(actionBuildProject);
        menuBuild->addAction(actionBuildCleanProject);

        retranslateUi(ATEnvironmentClass);

        QMetaObject::connectSlotsByName(ATEnvironmentClass);
    } // setupUi

    void retranslateUi(QMainWindow *ATEnvironmentClass)
    {
        ATEnvironmentClass->setWindowTitle(QApplication::translate("ATEnvironmentClass", "ATEnvironment", 0));
        actionNewProject->setText(QApplication::translate("ATEnvironmentClass", "Project...", 0));
        actionExit->setText(QApplication::translate("ATEnvironmentClass", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("ATEnvironmentClass", "Alt+F4", 0));
        actionAbout->setText(QApplication::translate("ATEnvironmentClass", "About", 0));
        actionSave_Project->setText(QApplication::translate("ATEnvironmentClass", "Save Project", 0));
        actionNewFile->setText(QApplication::translate("ATEnvironmentClass", "File...", 0));
        actionPlugins->setText(QApplication::translate("ATEnvironmentClass", "Plugins", 0));
        actionSaveFile->setText(QApplication::translate("ATEnvironmentClass", "Save", 0));
        actionSaveAsFile->setText(QApplication::translate("ATEnvironmentClass", "Save as...", 0));
        actionSave_all->setText(QApplication::translate("ATEnvironmentClass", "Save all", 0));
        actionOpenProject->setText(QApplication::translate("ATEnvironmentClass", "Project...", 0));
        actionOpenFile->setText(QApplication::translate("ATEnvironmentClass", "File...", 0));
        actionBuildProject->setText(QApplication::translate("ATEnvironmentClass", "Build Project", 0));
        actionBuildCleanProject->setText(QApplication::translate("ATEnvironmentClass", "Clean", 0));
        menuFile->setTitle(QApplication::translate("ATEnvironmentClass", "File", 0));
        menuNew->setTitle(QApplication::translate("ATEnvironmentClass", "New", 0));
        menuOpen->setTitle(QApplication::translate("ATEnvironmentClass", "Open", 0));
        menuView->setTitle(QApplication::translate("ATEnvironmentClass", "View", 0));
        menuHelp->setTitle(QApplication::translate("ATEnvironmentClass", "Help", 0));
        menuTools->setTitle(QApplication::translate("ATEnvironmentClass", "Tools", 0));
        menuBuild->setTitle(QApplication::translate("ATEnvironmentClass", "Build", 0));
        dwProjectExplorer->setWindowTitle(QApplication::translate("ATEnvironmentClass", "Project Explorer", 0));
        dockWidget_3->setWindowTitle(QApplication::translate("ATEnvironmentClass", "AT Console", 0));
        dockPlanner->setWindowTitle(QApplication::translate("ATEnvironmentClass", "Planner", 0));
    } // retranslateUi

};

namespace Ui {
    class ATEnvironmentClass: public Ui_ATEnvironmentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATENVIRONMENT_H

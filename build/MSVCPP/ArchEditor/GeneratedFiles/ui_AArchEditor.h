/********************************************************************************
** Form generated from reading UI file 'AArchEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AARCHEDITOR_H
#define UI_AARCHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "AGDocumentView.h"

QT_BEGIN_NAMESPACE

class Ui_AArchEditor
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeItems;
    AGDocumentView *gvDocument;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AArchEditor)
    {
        if (AArchEditor->objectName().isEmpty())
            AArchEditor->setObjectName(QStringLiteral("AArchEditor"));
        AArchEditor->resize(800, 600);
        centralwidget = new QWidget(AArchEditor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeItems = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeItems->setHeaderItem(__qtreewidgetitem);
        treeItems->setObjectName(QStringLiteral("treeItems"));
        treeItems->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeItems->setEditTriggers(QAbstractItemView::SelectedClicked);
        treeItems->setSelectionMode(QAbstractItemView::NoSelection);
        treeItems->setIndentation(0);
        treeItems->setExpandsOnDoubleClick(false);
        treeItems->header()->setVisible(false);

        horizontalLayout->addWidget(treeItems);

        gvDocument = new AGDocumentView(centralwidget);
        gvDocument->setObjectName(QStringLiteral("gvDocument"));
        gvDocument->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gvDocument->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gvDocument->setDragMode(QGraphicsView::NoDrag);
        gvDocument->setTransformationAnchor(QGraphicsView::NoAnchor);
        gvDocument->setViewportUpdateMode(QGraphicsView::MinimalViewportUpdate);

        horizontalLayout->addWidget(gvDocument);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 80);
        AArchEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AArchEditor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        AArchEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(AArchEditor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AArchEditor->setStatusBar(statusbar);

        retranslateUi(AArchEditor);

        QMetaObject::connectSlotsByName(AArchEditor);
    } // setupUi

    void retranslateUi(QMainWindow *AArchEditor)
    {
        AArchEditor->setWindowTitle(QApplication::translate("AArchEditor", "AArchEditor", 0));
    } // retranslateUi

};

namespace Ui {
    class AArchEditor: public Ui_AArchEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AARCHEDITOR_H

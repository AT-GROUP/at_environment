/********************************************************************************
** Form generated from reading UI file 'AInstanceConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AINSTANCECONFIGDIALOG_H
#define UI_AINSTANCECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AInstanceConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableParams;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bnCancel;
    QPushButton *bnOK;

    void setupUi(QDialog *AInstanceConfigDialog)
    {
        if (AInstanceConfigDialog->objectName().isEmpty())
            AInstanceConfigDialog->setObjectName(QStringLiteral("AInstanceConfigDialog"));
        AInstanceConfigDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AInstanceConfigDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableParams = new QTableWidget(AInstanceConfigDialog);
        if (tableParams->columnCount() < 2)
            tableParams->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableParams->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableParams->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableParams->setObjectName(QStringLiteral("tableParams"));
        tableParams->setColumnCount(2);

        verticalLayout->addWidget(tableParams);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bnCancel = new QPushButton(AInstanceConfigDialog);
        bnCancel->setObjectName(QStringLiteral("bnCancel"));

        horizontalLayout->addWidget(bnCancel);

        bnOK = new QPushButton(AInstanceConfigDialog);
        bnOK->setObjectName(QStringLiteral("bnOK"));

        horizontalLayout->addWidget(bnOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AInstanceConfigDialog);

        QMetaObject::connectSlotsByName(AInstanceConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *AInstanceConfigDialog)
    {
        AInstanceConfigDialog->setWindowTitle(QApplication::translate("AInstanceConfigDialog", "AInstanceConfigDialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableParams->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AInstanceConfigDialog", "Parameter", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableParams->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AInstanceConfigDialog", "Value", 0));
        bnCancel->setText(QApplication::translate("AInstanceConfigDialog", "Cancel", 0));
        bnOK->setText(QApplication::translate("AInstanceConfigDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class AInstanceConfigDialog: public Ui_AInstanceConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AINSTANCECONFIGDIALOG_H

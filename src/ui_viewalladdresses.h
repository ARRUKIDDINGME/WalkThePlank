/********************************************************************************
** Form generated from reading UI file 'viewalladdresses.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWALLADDRESSES_H
#define UI_VIEWALLADDRESSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ViewAddressesDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *btnExportAll;
    QTableView *tblAddresses;

    void setupUi(QDialog *ViewAddressesDialog)
    {
        if (ViewAddressesDialog->objectName().isEmpty())
            ViewAddressesDialog->setObjectName(QStringLiteral("ViewAddressesDialog"));
        ViewAddressesDialog->resize(400, 300);
        gridLayout = new QGridLayout(ViewAddressesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(ViewAddressesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        btnExportAll = new QPushButton(ViewAddressesDialog);
        btnExportAll->setObjectName(QStringLiteral("btnExportAll"));

        gridLayout->addWidget(btnExportAll, 1, 0, 1, 1);

        tblAddresses = new QTableView(ViewAddressesDialog);
        tblAddresses->setObjectName(QStringLiteral("tblAddresses"));
        tblAddresses->setSelectionMode(QAbstractItemView::SingleSelection);
        tblAddresses->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tblAddresses, 0, 0, 1, 2);


        retranslateUi(ViewAddressesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewAddressesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewAddressesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewAddressesDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewAddressesDialog)
    {
        ViewAddressesDialog->setWindowTitle(QApplication::translate("ViewAddressesDialog", "All Addresses", Q_NULLPTR));
        btnExportAll->setText(QApplication::translate("ViewAddressesDialog", "Export All Keys", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewAddressesDialog: public Ui_ViewAddressesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWALLADDRESSES_H

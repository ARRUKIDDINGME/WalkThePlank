/********************************************************************************
** Form generated from reading UI file 'validateaddress.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDATEADDRESS_H
#define UI_VALIDATEADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ValidateAddress
{
public:
    QGridLayout *gridLayout;
    QLabel *lblAddress;
    QLabel *label;
    QTableView *tblProps;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ValidateAddress)
    {
        if (ValidateAddress->objectName().isEmpty())
            ValidateAddress->setObjectName(QStringLiteral("ValidateAddress"));
        ValidateAddress->resize(400, 300);
        gridLayout = new QGridLayout(ValidateAddress);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblAddress = new QLabel(ValidateAddress);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));

        gridLayout->addWidget(lblAddress, 0, 1, 1, 1);

        label = new QLabel(ValidateAddress);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tblProps = new QTableView(ValidateAddress);
        tblProps->setObjectName(QStringLiteral("tblProps"));
        tblProps->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tblProps, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ValidateAddress);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(ValidateAddress);
        QObject::connect(buttonBox, SIGNAL(accepted()), ValidateAddress, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ValidateAddress, SLOT(reject()));

        QMetaObject::connectSlotsByName(ValidateAddress);
    } // setupUi

    void retranslateUi(QDialog *ValidateAddress)
    {
        ValidateAddress->setWindowTitle(QApplication::translate("ValidateAddress", "Validate Address", Q_NULLPTR));
        lblAddress->setText(QApplication::translate("ValidateAddress", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("ValidateAddress", "Address:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ValidateAddress: public Ui_ValidateAddress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDATEADDRESS_H

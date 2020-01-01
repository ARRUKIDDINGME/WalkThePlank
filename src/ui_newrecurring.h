/********************************************************************************
** Form generated from reading UI file 'newrecurring.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWRECURRING_H
#define UI_NEWRECURRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include "addresscombo.h"

QT_BEGIN_NAMESPACE

class Ui_newRecurringDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSchedule;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *lblNextPayment;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtAmt;
    QComboBox *cmbCurrency;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *txtDesc;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    AddressCombo *cmbFromAddress;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtNumPayments;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QLineEdit *txtToAddr;
    QLabel *label_2;
    QPlainTextEdit *txtMemo;
    QLabel *label_4;

    void setupUi(QDialog *newRecurringDialog)
    {
        if (newRecurringDialog->objectName().isEmpty())
            newRecurringDialog->setObjectName(QStringLiteral("newRecurringDialog"));
        newRecurringDialog->resize(740, 403);
        gridLayout = new QGridLayout(newRecurringDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmbSchedule = new QComboBox(newRecurringDialog);
        cmbSchedule->setObjectName(QStringLiteral("cmbSchedule"));

        horizontalLayout->addWidget(cmbSchedule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 2, 1, 1);

        buttonBox = new QDialogButtonBox(newRecurringDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 2, 1, 1);

        label_3 = new QLabel(newRecurringDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        label_7 = new QLabel(newRecurringDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        lblNextPayment = new QLabel(newRecurringDialog);
        lblNextPayment->setObjectName(QStringLiteral("lblNextPayment"));

        gridLayout->addWidget(lblNextPayment, 8, 2, 1, 1);

        line = new QFrame(newRecurringDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        txtAmt = new QLineEdit(newRecurringDialog);
        txtAmt->setObjectName(QStringLiteral("txtAmt"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtAmt->sizePolicy().hasHeightForWidth());
        txtAmt->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(txtAmt);

        cmbCurrency = new QComboBox(newRecurringDialog);
        cmbCurrency->setObjectName(QStringLiteral("cmbCurrency"));

        horizontalLayout_3->addWidget(cmbCurrency);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 3, 2, 1, 1);

        txtDesc = new QLineEdit(newRecurringDialog);
        txtDesc->setObjectName(QStringLiteral("txtDesc"));

        gridLayout->addWidget(txtDesc, 0, 2, 1, 1);

        label = new QLabel(newRecurringDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_5 = new QLabel(newRecurringDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        label_6 = new QLabel(newRecurringDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 1, 1, 1);

        cmbFromAddress = new AddressCombo(newRecurringDialog);
        cmbFromAddress->setObjectName(QStringLiteral("cmbFromAddress"));

        gridLayout->addWidget(cmbFromAddress, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtNumPayments = new QLineEdit(newRecurringDialog);
        txtNumPayments->setObjectName(QStringLiteral("txtNumPayments"));

        horizontalLayout_2->addWidget(txtNumPayments);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 6, 2, 1, 1);

        label_8 = new QLabel(newRecurringDialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 1, 1, 1);

        txtToAddr = new QLineEdit(newRecurringDialog);
        txtToAddr->setObjectName(QStringLiteral("txtToAddr"));

        gridLayout->addWidget(txtToAddr, 2, 2, 1, 1);

        label_2 = new QLabel(newRecurringDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        txtMemo = new QPlainTextEdit(newRecurringDialog);
        txtMemo->setObjectName(QStringLiteral("txtMemo"));

        gridLayout->addWidget(txtMemo, 4, 2, 1, 1);

        label_4 = new QLabel(newRecurringDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        QWidget::setTabOrder(txtDesc, cmbFromAddress);
        QWidget::setTabOrder(cmbFromAddress, txtToAddr);
        QWidget::setTabOrder(txtToAddr, txtAmt);
        QWidget::setTabOrder(txtAmt, cmbCurrency);
        QWidget::setTabOrder(cmbCurrency, cmbSchedule);
        QWidget::setTabOrder(cmbSchedule, txtNumPayments);

        retranslateUi(newRecurringDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newRecurringDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newRecurringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(newRecurringDialog);
    } // setupUi

    void retranslateUi(QDialog *newRecurringDialog)
    {
        newRecurringDialog->setWindowTitle(QApplication::translate("newRecurringDialog", "Edit Schedule", Q_NULLPTR));
        label_3->setText(QApplication::translate("newRecurringDialog", "Schedule", Q_NULLPTR));
        label_7->setText(QApplication::translate("newRecurringDialog", "Payment Description", Q_NULLPTR));
        lblNextPayment->setText(QApplication::translate("newRecurringDialog", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("newRecurringDialog", "From", Q_NULLPTR));
        label_5->setText(QApplication::translate("newRecurringDialog", "Number of payments", Q_NULLPTR));
        label_6->setText(QApplication::translate("newRecurringDialog", "Amount", Q_NULLPTR));
        label_8->setText(QApplication::translate("newRecurringDialog", "Next Payment", Q_NULLPTR));
        label_2->setText(QApplication::translate("newRecurringDialog", "To", Q_NULLPTR));
        label_4->setText(QApplication::translate("newRecurringDialog", "Memo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class newRecurringDialog: public Ui_newRecurringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWRECURRING_H

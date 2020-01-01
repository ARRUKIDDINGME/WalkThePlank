/********************************************************************************
** Form generated from reading UI file 'requestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTDIALOG_H
#define UI_REQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "addresscombo.h"
#include "memoedit.h"

QT_BEGIN_NAMESPACE

class Ui_RequestDialog
{
public:
    QGridLayout *gridLayout;
    AddressCombo *cmbMyAddress;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddressBook;
    QFrame *line;
    QLabel *lblAddress;
    QLabel *label_2;
    QLabel *lblSaplingWarning;
    QLabel *lblAmount;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLineEdit *txtFrom;
    QFrame *line_3;
    MemoEdit *txtMemo;
    QLineEdit *txtAmount;
    QFrame *line_2;
    QLabel *lblAddressInfo;
    QLabel *lblMemoLen;
    QLabel *txtAmountUSD;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *lblPixmap;
    QLabel *lblHeader;

    void setupUi(QDialog *RequestDialog)
    {
        if (RequestDialog->objectName().isEmpty())
            RequestDialog->setObjectName(QStringLiteral("RequestDialog"));
        RequestDialog->resize(663, 529);
        gridLayout = new QGridLayout(RequestDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbMyAddress = new AddressCombo(RequestDialog);
        cmbMyAddress->setObjectName(QStringLiteral("cmbMyAddress"));

        gridLayout->addWidget(cmbMyAddress, 18, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAddressBook = new QPushButton(RequestDialog);
        btnAddressBook->setObjectName(QStringLiteral("btnAddressBook"));

        horizontalLayout->addWidget(btnAddressBook);


        gridLayout->addLayout(horizontalLayout, 2, 3, 1, 1);

        line = new QFrame(RequestDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 21, 0, 1, 4);

        lblAddress = new QLabel(RequestDialog);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));

        gridLayout->addWidget(lblAddress, 2, 1, 1, 1);

        label_2 = new QLabel(RequestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 15, 1, 1, 1);

        lblSaplingWarning = new QLabel(RequestDialog);
        lblSaplingWarning->setObjectName(QStringLiteral("lblSaplingWarning"));
        lblSaplingWarning->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout->addWidget(lblSaplingWarning, 5, 1, 1, 3);

        lblAmount = new QLabel(RequestDialog);
        lblAmount->setObjectName(QStringLiteral("lblAmount"));

        gridLayout->addWidget(lblAmount, 6, 1, 1, 1);

        label = new QLabel(RequestDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 10, 1, 1, 1);

        buttonBox = new QDialogButtonBox(RequestDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 24, 2, 1, 2);

        label_4 = new QLabel(RequestDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 14, 1, 1, 1);

        txtFrom = new QLineEdit(RequestDialog);
        txtFrom->setObjectName(QStringLiteral("txtFrom"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtFrom->sizePolicy().hasHeightForWidth());
        txtFrom->setSizePolicy(sizePolicy);
        txtFrom->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(txtFrom, 4, 1, 1, 3);

        line_3 = new QFrame(RequestDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 1, 1, 3);

        txtMemo = new MemoEdit(RequestDialog);
        txtMemo->setObjectName(QStringLiteral("txtMemo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtMemo->sizePolicy().hasHeightForWidth());
        txtMemo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(txtMemo, 12, 1, 1, 3);

        txtAmount = new QLineEdit(RequestDialog);
        txtAmount->setObjectName(QStringLiteral("txtAmount"));
        txtAmount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(txtAmount, 7, 1, 1, 3);

        line_2 = new QFrame(RequestDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 13, 1, 1, 3);

        lblAddressInfo = new QLabel(RequestDialog);
        lblAddressInfo->setObjectName(QStringLiteral("lblAddressInfo"));
        lblAddressInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblAddressInfo, 15, 3, 1, 1);

        lblMemoLen = new QLabel(RequestDialog);
        lblMemoLen->setObjectName(QStringLiteral("lblMemoLen"));
        lblMemoLen->setText(QStringLiteral("0 / 512"));
        lblMemoLen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblMemoLen, 11, 3, 1, 1);

        txtAmountUSD = new QLabel(RequestDialog);
        txtAmountUSD->setObjectName(QStringLiteral("txtAmountUSD"));
        txtAmountUSD->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(txtAmountUSD, 9, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 20, 1, 1, 1);

        label_3 = new QLabel(RequestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 11, 1, 1, 1);

        lblPixmap = new QLabel(RequestDialog);
        lblPixmap->setObjectName(QStringLiteral("lblPixmap"));
        lblPixmap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPixmap, 0, 1, 1, 1);

        lblHeader = new QLabel(RequestDialog);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        lblHeader->setWordWrap(true);

        gridLayout->addWidget(lblHeader, 0, 2, 1, 2);

        QWidget::setTabOrder(txtAmount, txtMemo);

        retranslateUi(RequestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RequestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RequestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RequestDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestDialog)
    {
        RequestDialog->setWindowTitle(QApplication::translate("RequestDialog", "Payment Request", Q_NULLPTR));
        btnAddressBook->setText(QApplication::translate("RequestDialog", "AddressBook", Q_NULLPTR));
        lblAddress->setText(QApplication::translate("RequestDialog", "Request From", Q_NULLPTR));
        label_2->setText(QApplication::translate("RequestDialog", "My Address", Q_NULLPTR));
        lblSaplingWarning->setText(QString());
        lblAmount->setText(QApplication::translate("RequestDialog", "Amount in ", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QString());
        txtFrom->setPlaceholderText(QApplication::translate("RequestDialog", "z address", Q_NULLPTR));
        txtAmount->setPlaceholderText(QApplication::translate("RequestDialog", "Amount", Q_NULLPTR));
        lblAddressInfo->setText(QApplication::translate("RequestDialog", "The recipient will see this address in the \"to\" field when they pay your request.", Q_NULLPTR));
        txtAmountUSD->setText(QApplication::translate("RequestDialog", "Amount USD", Q_NULLPTR));
        label_3->setText(QApplication::translate("RequestDialog", "Memo", Q_NULLPTR));
        lblPixmap->setText(QApplication::translate("RequestDialog", "TextLabel", Q_NULLPTR));
        lblHeader->setText(QApplication::translate("RequestDialog", "Request payment from a Sapling address. You'll send a HUSH 0.0001 transaction to the address with a HUSH payment URI. The memo will be included in the transaction when the address pays you.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RequestDialog: public Ui_RequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTDIALOG_H

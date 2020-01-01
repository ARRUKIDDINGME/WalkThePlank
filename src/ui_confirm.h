/********************************************************************************
** Form generated from reading UI file 'confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_confirm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *sendFrom;
    QGroupBox *sendToAddrs;
    QGridLayout *gridLayout;
    QLabel *AmtUSD1;
    QLabel *Memo1;
    QLabel *Addr1;
    QLabel *minerFeeUSD;
    QLabel *labelMinerFee;
    QLabel *Amt1;
    QLabel *minerFee;
    QSpacerItem *verticalSpacer;
    QLabel *nopeersWarning;
    QLabel *syncingWarning;
    QLabel *warningLabel;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *confirm)
    {
        if (confirm->objectName().isEmpty())
            confirm->setObjectName(QStringLiteral("confirm"));
        confirm->resize(429, 371);
        verticalLayout = new QVBoxLayout(confirm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(confirm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        sendFrom = new QLabel(groupBox);
        sendFrom->setObjectName(QStringLiteral("sendFrom"));
        sendFrom->setWordWrap(true);

        verticalLayout_2->addWidget(sendFrom);


        verticalLayout->addWidget(groupBox);

        sendToAddrs = new QGroupBox(confirm);
        sendToAddrs->setObjectName(QStringLiteral("sendToAddrs"));
        gridLayout = new QGridLayout(sendToAddrs);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        AmtUSD1 = new QLabel(sendToAddrs);
        AmtUSD1->setObjectName(QStringLiteral("AmtUSD1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AmtUSD1->sizePolicy().hasHeightForWidth());
        AmtUSD1->setSizePolicy(sizePolicy);
        AmtUSD1->setText(QStringLiteral("TextLabel"));
        AmtUSD1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(AmtUSD1, 0, 2, 1, 1);

        Memo1 = new QLabel(sendToAddrs);
        Memo1->setObjectName(QStringLiteral("Memo1"));
        Memo1->setText(QStringLiteral("TextLabel"));
        Memo1->setWordWrap(true);

        gridLayout->addWidget(Memo1, 1, 0, 1, 3);

        Addr1 = new QLabel(sendToAddrs);
        Addr1->setObjectName(QStringLiteral("Addr1"));
        Addr1->setText(QStringLiteral("TextLabel"));
        Addr1->setWordWrap(true);

        gridLayout->addWidget(Addr1, 0, 0, 1, 1);

        minerFeeUSD = new QLabel(sendToAddrs);
        minerFeeUSD->setObjectName(QStringLiteral("minerFeeUSD"));
        sizePolicy.setHeightForWidth(minerFeeUSD->sizePolicy().hasHeightForWidth());
        minerFeeUSD->setSizePolicy(sizePolicy);
        minerFeeUSD->setText(QStringLiteral("TextLabel"));
        minerFeeUSD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(minerFeeUSD, 2, 2, 1, 1);

        labelMinerFee = new QLabel(sendToAddrs);
        labelMinerFee->setObjectName(QStringLiteral("labelMinerFee"));
        labelMinerFee->setText(QStringLiteral("Miner Textlabel"));

        gridLayout->addWidget(labelMinerFee, 2, 0, 1, 1);

        Amt1 = new QLabel(sendToAddrs);
        Amt1->setObjectName(QStringLiteral("Amt1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Amt1->sizePolicy().hasHeightForWidth());
        Amt1->setSizePolicy(sizePolicy1);
        Amt1->setText(QStringLiteral("TextLabel"));
        Amt1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Amt1, 0, 1, 1, 1);

        minerFee = new QLabel(sendToAddrs);
        minerFee->setObjectName(QStringLiteral("minerFee"));
        sizePolicy1.setHeightForWidth(minerFee->sizePolicy().hasHeightForWidth());
        minerFee->setSizePolicy(sizePolicy1);
        minerFee->setText(QStringLiteral("Miner Amount"));
        minerFee->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(minerFee, 2, 1, 1, 1);


        verticalLayout->addWidget(sendToAddrs);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        nopeersWarning = new QLabel(confirm);
        nopeersWarning->setObjectName(QStringLiteral("nopeersWarning"));
        nopeersWarning->setStyleSheet(QStringLiteral("color: red;"));
        nopeersWarning->setWordWrap(true);

        verticalLayout->addWidget(nopeersWarning);

        syncingWarning = new QLabel(confirm);
        syncingWarning->setObjectName(QStringLiteral("syncingWarning"));
        syncingWarning->setStyleSheet(QStringLiteral("color: red;"));
        syncingWarning->setWordWrap(true);

        verticalLayout->addWidget(syncingWarning);

        warningLabel = new QLabel(confirm);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setStyleSheet(QStringLiteral("color: red;"));
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        line = new QFrame(confirm);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(confirm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(confirm);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirm, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirm);
    } // setupUi

    void retranslateUi(QDialog *confirm)
    {
        confirm->setWindowTitle(QApplication::translate("confirm", "Confirm Transaction", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("confirm", "From", Q_NULLPTR));
        sendFrom->setText(QString());
        sendToAddrs->setTitle(QApplication::translate("confirm", "To", Q_NULLPTR));
        nopeersWarning->setText(QApplication::translate("confirm", "hushd doesn't seem to have any peers. You might not be connected to the internet, so this Transaction might not work.", Q_NULLPTR));
        syncingWarning->setText(QApplication::translate("confirm", "You are sending a transaction while your node is still syncing. This may not work.", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("confirm", "You are using a custom fee. Since fees are transparent, you are giving up some privacy. Please use this only if you know what you are doing!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class confirm: public Ui_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H

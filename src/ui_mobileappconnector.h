/********************************************************************************
** Form generated from reading UI file 'mobileappconnector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEAPPCONNECTOR_H
#define UI_MOBILEAPPCONNECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "qrcodelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MobileAppConnector
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *txtConnStr;
    QRCodeLabel *qrcode;
    QCheckBox *chkInternetConn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnDisconnect;
    QSpacerItem *verticalSpacer;
    QLabel *lblLastSeen;
    QLabel *label_3;
    QLabel *lblRemoteName;
    QLabel *label_4;
    QLabel *lblConnectionType;

    void setupUi(QDialog *MobileAppConnector)
    {
        if (MobileAppConnector->objectName().isEmpty())
            MobileAppConnector->setObjectName(QStringLiteral("MobileAppConnector"));
        MobileAppConnector->resize(800, 530);
        gridLayout = new QGridLayout(MobileAppConnector);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(MobileAppConnector);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 2);

        label = new QLabel(MobileAppConnector);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(MobileAppConnector);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        txtConnStr = new QLineEdit(groupBox_2);
        txtConnStr->setObjectName(QStringLiteral("txtConnStr"));
        QFont font;
        font.setPointSize(9);
        txtConnStr->setFont(font);
        txtConnStr->setReadOnly(true);

        gridLayout_3->addWidget(txtConnStr, 2, 0, 1, 1);

        qrcode = new QRCodeLabel(groupBox_2);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qrcode->sizePolicy().hasHeightForWidth());
        qrcode->setSizePolicy(sizePolicy1);
        qrcode->setStyleSheet(QStringLiteral("background-color: #fff"));

        gridLayout_3->addWidget(qrcode, 0, 0, 1, 1);

        chkInternetConn = new QCheckBox(groupBox_2);
        chkInternetConn->setObjectName(QStringLiteral("chkInternetConn"));

        gridLayout_3->addWidget(chkInternetConn, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(MobileAppConnector);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnDisconnect = new QPushButton(groupBox);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnDisconnect->sizePolicy().hasHeightForWidth());
        btnDisconnect->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(btnDisconnect, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        lblLastSeen = new QLabel(groupBox);
        lblLastSeen->setObjectName(QStringLiteral("lblLastSeen"));
        lblLastSeen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblLastSeen, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lblRemoteName = new QLabel(groupBox);
        lblRemoteName->setObjectName(QStringLiteral("lblRemoteName"));
        lblRemoteName->setText(QStringLiteral("TextLabel"));
        lblRemoteName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblRemoteName, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lblConnectionType = new QLabel(groupBox);
        lblConnectionType->setObjectName(QStringLiteral("lblConnectionType"));
        lblConnectionType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblConnectionType, 4, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 2, 2, 1);


        retranslateUi(MobileAppConnector);
        QObject::connect(buttonBox, SIGNAL(accepted()), MobileAppConnector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MobileAppConnector, SLOT(reject()));

        QMetaObject::connectSlotsByName(MobileAppConnector);
    } // setupUi

    void retranslateUi(QDialog *MobileAppConnector)
    {
        MobileAppConnector->setWindowTitle(QApplication::translate("MobileAppConnector", "Connect Mobile App", Q_NULLPTR));
        label->setText(QApplication::translate("MobileAppConnector", "Scan this QRCode in WalkThePlankAndroid to connect your device", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MobileAppConnector", "QR Code", Q_NULLPTR));
        label_2->setText(QApplication::translate("MobileAppConnector", "Connection String", Q_NULLPTR));
        qrcode->setText(QString());
        chkInternetConn->setText(QApplication::translate("MobileAppConnector", "Allow connections over the internet via WalkThePlank wormhole", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MobileAppConnector", "WalkThePlankAndroid", Q_NULLPTR));
        btnDisconnect->setText(QApplication::translate("MobileAppConnector", "Disconnect", Q_NULLPTR));
        lblLastSeen->setText(QApplication::translate("MobileAppConnector", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MobileAppConnector", "Last seen:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MobileAppConnector", "Connection type:", Q_NULLPTR));
        lblConnectionType->setText(QApplication::translate("MobileAppConnector", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileAppConnector: public Ui_MobileAppConnector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEAPPCONNECTOR_H

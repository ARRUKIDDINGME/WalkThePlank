/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QLabel *confMsg;
    QFrame *line;
    QLabel *label;
    QLineEdit *hostname;
    QLabel *label_2;
    QLineEdit *port;
    QLabel *label_3;
    QLineEdit *rpcuser;
    QLabel *label_4;
    QLineEdit *rpcpassword;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLabel *label_20;
    QComboBox *comboBoxTheme;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkTor;
    QCheckBox *chkCheckUpdates;
    QFrame *line_2;
    QCheckBox *chkSaveTxs;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *btnClearSaved;
    QLabel *label_5;
    QCheckBox *chkCustomFees;
    QCheckBox *chkAutoShield;
    QLabel *lblTor;
    QLabel *label_8;
    QLabel *label_10;
    QCheckBox *chkFetchPrices;
    QWidget *tab_4;
    QLabel *label_14;
    QFrame *line_5;
    QLineEdit *txExplorerUrl;
    QLabel *label_15;
    QLineEdit *addressExplorerUrl;
    QLabel *label_16;
    QLineEdit *testnetTxExplorerUrl;
    QLabel *label_17;
    QLineEdit *testnetAddressExplorerUrl;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QCheckBox *chkReindex;
    QLabel *label_9;
    QCheckBox *chkRescan;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_12;
    QLabel *label_11;
    QFrame *line_4;
    QLabel *label_13;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(540, 504);
        Settings->setMinimumSize(QSize(540, 500));
        Settings->setModal(true);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        confMsg = new QLabel(tab);
        confMsg->setObjectName(QStringLiteral("confMsg"));
        confMsg->setText(QStringLiteral("<html><head/><body><p><br/></p></body></html>"));
        confMsg->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(confMsg);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label);

        hostname = new QLineEdit(tab);
        hostname->setObjectName(QStringLiteral("hostname"));

        verticalLayout_3->addWidget(hostname);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_2);

        port = new QLineEdit(tab);
        port->setObjectName(QStringLiteral("port"));

        verticalLayout_3->addWidget(port);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_3);

        rpcuser = new QLineEdit(tab);
        rpcuser->setObjectName(QStringLiteral("rpcuser"));

        verticalLayout_3->addWidget(rpcuser);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_4);

        rpcpassword = new QLineEdit(tab);
        rpcpassword->setObjectName(QStringLiteral("rpcpassword"));

        verticalLayout_3->addWidget(rpcpassword);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 15, 0, 1, 1);

        comboBoxTheme = new QComboBox(tab_2);
        comboBoxTheme->setObjectName(QStringLiteral("comboBoxTheme"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxTheme->sizePolicy().hasHeightForWidth());
        comboBoxTheme->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxTheme, 15, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 14, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        chkTor = new QCheckBox(tab_2);
        chkTor->setObjectName(QStringLiteral("chkTor"));

        gridLayout->addWidget(chkTor, 7, 0, 1, 1);

        chkCheckUpdates = new QCheckBox(tab_2);
        chkCheckUpdates->setObjectName(QStringLiteral("chkCheckUpdates"));

        gridLayout->addWidget(chkCheckUpdates, 9, 0, 1, 2);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 13, 0, 1, 2);

        chkSaveTxs = new QCheckBox(tab_2);
        chkSaveTxs->setObjectName(QStringLiteral("chkSaveTxs"));

        gridLayout->addWidget(chkSaveTxs, 0, 0, 1, 2);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 6, 0, 1, 2);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        btnClearSaved = new QPushButton(tab_2);
        btnClearSaved->setObjectName(QStringLiteral("btnClearSaved"));

        gridLayout->addWidget(btnClearSaved, 2, 1, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        chkCustomFees = new QCheckBox(tab_2);
        chkCustomFees->setObjectName(QStringLiteral("chkCustomFees"));

        gridLayout->addWidget(chkCustomFees, 3, 0, 1, 1);

        chkAutoShield = new QCheckBox(tab_2);
        chkAutoShield->setObjectName(QStringLiteral("chkAutoShield"));

        gridLayout->addWidget(chkAutoShield, 5, 0, 1, 2);

        lblTor = new QLabel(tab_2);
        lblTor->setObjectName(QStringLiteral("lblTor"));
        lblTor->setWordWrap(true);

        gridLayout->addWidget(lblTor, 8, 0, 1, 2);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 10, 0, 1, 2);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 12, 0, 1, 2);

        chkFetchPrices = new QCheckBox(tab_2);
        chkFetchPrices->setObjectName(QStringLiteral("chkFetchPrices"));

        gridLayout->addWidget(chkFetchPrices, 11, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(9, 9, 491, 13));
        line_5 = new QFrame(tab_4);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(9, 105, 491, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        txExplorerUrl = new QLineEdit(tab_4);
        txExplorerUrl->setObjectName(QStringLiteral("txExplorerUrl"));
        txExplorerUrl->setGeometry(QRect(9, 28, 491, 20));
        txExplorerUrl->setText(QStringLiteral("http://45.76.84.111:17397/tx/"));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(9, 54, 491, 13));
        addressExplorerUrl = new QLineEdit(tab_4);
        addressExplorerUrl->setObjectName(QStringLiteral("addressExplorerUrl"));
        addressExplorerUrl->setGeometry(QRect(9, 73, 491, 20));
        addressExplorerUrl->setText(QStringLiteral("http://45.76.84.111:17397/address/"));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(9, 112, 491, 13));
        testnetTxExplorerUrl = new QLineEdit(tab_4);
        testnetTxExplorerUrl->setObjectName(QStringLiteral("testnetTxExplorerUrl"));
        testnetTxExplorerUrl->setGeometry(QRect(9, 131, 491, 20));
        testnetTxExplorerUrl->setText(QStringLiteral("https://explorer.testnet.z.cash/tx/"));
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(9, 160, 501, 16));
        testnetAddressExplorerUrl = new QLineEdit(tab_4);
        testnetAddressExplorerUrl->setObjectName(QStringLiteral("testnetAddressExplorerUrl"));
        testnetAddressExplorerUrl->setGeometry(QRect(9, 180, 491, 20));
        testnetAddressExplorerUrl->setText(QStringLiteral("http://45.76.84.111:17397/address/"));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkReindex = new QCheckBox(tab_3);
        chkReindex->setObjectName(QStringLiteral("chkReindex"));

        gridLayout_2->addWidget(chkReindex, 5, 0, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        chkRescan = new QCheckBox(tab_3);
        chkRescan->setObjectName(QStringLiteral("chkRescan"));

        gridLayout_2->addWidget(chkRescan, 0, 0, 1, 1);

        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 9, 0, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setWordWrap(true);

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        line_4 = new QFrame(tab_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 8, 0, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 7, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Host", Q_NULLPTR));
        hostname->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("Settings", "Port", Q_NULLPTR));
        port->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("Settings", "RPC Username", Q_NULLPTR));
        label_4->setText(QApplication::translate("Settings", "RPC Password", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "hushd connection", Q_NULLPTR));
        label_20->setText(QApplication::translate("Settings", "Theme", Q_NULLPTR));
        comboBoxTheme->clear();
        comboBoxTheme->insertItems(0, QStringList()
         << QApplication::translate("Settings", "default", Q_NULLPTR)
         << QApplication::translate("Settings", "blue", Q_NULLPTR)
         << QApplication::translate("Settings", "light", Q_NULLPTR)
         << QApplication::translate("Settings", "dark", Q_NULLPTR)
        );
        chkTor->setText(QApplication::translate("Settings", "Connect via Tor", Q_NULLPTR));
        chkCheckUpdates->setText(QApplication::translate("Settings", "Check github for updates at startup", Q_NULLPTR));
        chkSaveTxs->setText(QApplication::translate("Settings", "Remember shielded transactions", Q_NULLPTR));
        label_7->setText(QApplication::translate("Settings", "Normally, change from t-Addresses goes to another t-Address. Checking this option will send the change to your shielded sapling address instead. Check this option to increase your privacy.", Q_NULLPTR));
        label_6->setText(QApplication::translate("Settings", "Allow overriding the default fees when sending transactions. Enabling this option may compromise your privacy since fees are transparent. ", Q_NULLPTR));
        btnClearSaved->setText(QApplication::translate("Settings", "Clear History", Q_NULLPTR));
        label_5->setText(QApplication::translate("Settings", "Shielded transactions are saved locally and shown in the transactions tab.  If you uncheck this, shielded transactions will not appear in the transactions tab.", Q_NULLPTR));
        chkCustomFees->setText(QApplication::translate("Settings", "Allow custom fees", Q_NULLPTR));
        chkAutoShield->setText(QApplication::translate("Settings", "Shield change from t-Addresses to your sapling address", Q_NULLPTR));
        lblTor->setText(QApplication::translate("Settings", "Connect to the Tor network via SOCKS proxy running on 127.0.0.1:9050. Please note that you'll have to install and run the Tor service externally.", Q_NULLPTR));
        label_8->setText(QApplication::translate("Settings", "Connect to github on startup to check for updates", Q_NULLPTR));
        label_10->setText(QApplication::translate("Settings", "Connect to the internet to fetch ARRUKIDDINGME prices", Q_NULLPTR));
        chkFetchPrices->setText(QApplication::translate("Settings", "Fetch ARRUKIDDINGME / USD prices", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Options", Q_NULLPTR));
        label_14->setText(QApplication::translate("Settings", "Tx Explorer URL", Q_NULLPTR));
        label_15->setText(QApplication::translate("Settings", "Address Explorer URL", Q_NULLPTR));
        label_16->setText(QApplication::translate("Settings", "Testnet Tx Explorer URL", Q_NULLPTR));
        label_17->setText(QApplication::translate("Settings", "Testnet Address Explorer URL", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Settings", "Explorer", Q_NULLPTR));
        chkReindex->setText(QApplication::translate("Settings", "Reindex", Q_NULLPTR));
        label_9->setText(QApplication::translate("Settings", "Rescan the blockchain for any missing wallet transactions and to correct your wallet balance. This may take several hours. You need to restart WalkThePlank for this to take effect", Q_NULLPTR));
        chkRescan->setText(QApplication::translate("Settings", "Rescan", Q_NULLPTR));
        label_12->setText(QString());
        label_11->setText(QApplication::translate("Settings", "Rebuild the entire blockchain from the genesis block, by rescanning all the block files. This may take several hours to days, depending on your hardware. You need to restart WalkThePlank for this to take effect", Q_NULLPTR));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Settings", "Troubleshooting", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

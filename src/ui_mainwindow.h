/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addresscombo.h"
#include "fillediconlabel.h"
#include "qrcodelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSettings;
    QAction *actionDonate;
    QAction *actionDiscord;
    QAction *actionWebsite;
    QAction *actionCheck_for_Updates;
    QAction *actionTurnstile_Migration;
    QAction *actionImport_Private_Key;
    QAction *actionExport_All_Private_Keys;
    QAction *actionz_board_net;
    QAction *action_Address_Book;
    QAction *actionBackup_wallet_dat;
    QAction *actionExport_transactions;
    QAction *actionPay_URI;
    QAction *actionConnect_Mobile_App;
    QAction *actionRequest_zcash;
    QAction *actionValidate_Address;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *balSheilded;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *balTransparent;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *balTotal;
    QHBoxLayout *horizontalLayout_99;
    QLabel *label_99;
    QLabel *balUSDTotal;
    QSpacerItem *verticalSpacer;
    QLabel *unconfirmedWarning;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QTableView *balancesTable;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    AddressCombo *inputsCombo;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QLineEdit *sendAddressBalance;
    QLabel *sendAddressBalanceUSD;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *sendToScrollArea;
    QWidget *sendToWidgets;
    QVBoxLayout *sendToLayout;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *sendAddressLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QLineEdit *Address1;
    QPushButton *AddressBook1;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *Amount1;
    QLabel *AmtUSD1;
    QCheckBox *Max1;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *FileBtn;
    QPushButton *MemoBtn1;
    QLabel *MemoTxt1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addAddressButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *layoutSendRecurring;
    QCheckBox *chkRecurring;
    QLabel *lblRecurDesc;
    QPushButton *btnRecurSchedule;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *minerFeeLabel;
    QLineEdit *minerFeeAmt;
    QLabel *lblMinerFeeUSD;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendTransactionButton;
    QPushButton *cancelSendButton;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rdioZSAddr;
    QRadioButton *rdioTAddr;
    QHBoxLayout *horizontalLayout_10;
    AddressCombo *listReceiveAddresses;
    QPushButton *btnReceiveNewAddr;
    QPushButton *btnViewAllAddresses;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QPushButton *rcvUpdateLabel;
    QLabel *rcvBal;
    QLabel *label_21;
    QLineEdit *rcvLabel;
    QPlainTextEdit *txtReceive;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *exportKey;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_5;
    QRCodeLabel *qrcodeDisplay;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QTableView *transactionsTable;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    FilledIconLabel *hushlogo;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_4;
    QLabel *numconnections;
    QLabel *heightLabel;
    QLabel *notarizedhashlabel;
    QLabel *notarizedhashvalue;
    QLabel *notarizedhashspacer;
    QLabel *notarizedtxidlabel;
    QLabel *notarizedtxidvalue;
    QLabel *notarizedtxidspacer;
    QLabel *laglabel;
    QLabel *lagvalue;
    QLabel *lagspacer;
    QLabel *kmdversionlabel;
    QLabel *kmdversion;
    QLabel *kmdversionspacer;
    QLabel *protocolversionlabel;
    QLabel *protocolversion;
    QLabel *protocolversionspacer;
    QLabel *versionlabel;
    QLabel *version;
    QLabel *versionspacer;
    QLabel *p2pportlabel;
    QLabel *p2pport;
    QLabel *p2pportspacer;
    QLabel *rpcportlabel;
    QLabel *rpcport;
    QLabel *rpcportspacer;
    QLabel *clientnamelabel;
    QLabel *clientname;
    QLabel *clientnamespacer;
    QLabel *halvinglabel;
    QLabel *halving;
    QLabel *halvingspacer;
    QLabel *localserviceslabel;
    QLabel *localservices;
    QLabel *localservicesspacer;
    QLabel *longestchainlabel;
    QLabel *longestchain;
    QLabel *longestchainspacer;
    QLabel *txcountlabel;
    QLabel *txcount;
    QLabel *txcountspacer;
    QLabel *solrate;
    QLabel *label_12;
    QLabel *label_8;
    QLabel *blockheight;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuApps;
    QMenu *menu_Edit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(968, 616);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/res/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName(QStringLiteral("actionDonate"));
        actionDiscord = new QAction(MainWindow);
        actionDiscord->setObjectName(QStringLiteral("actionDiscord"));
        actionWebsite = new QAction(MainWindow);
        actionWebsite->setObjectName(QStringLiteral("actionWebsite"));
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        actionTurnstile_Migration = new QAction(MainWindow);
        actionTurnstile_Migration->setObjectName(QStringLiteral("actionTurnstile_Migration"));
        actionImport_Private_Key = new QAction(MainWindow);
        actionImport_Private_Key->setObjectName(QStringLiteral("actionImport_Private_Key"));
        actionExport_All_Private_Keys = new QAction(MainWindow);
        actionExport_All_Private_Keys->setObjectName(QStringLiteral("actionExport_All_Private_Keys"));
        actionz_board_net = new QAction(MainWindow);
        actionz_board_net->setObjectName(QStringLiteral("actionz_board_net"));
        action_Address_Book = new QAction(MainWindow);
        action_Address_Book->setObjectName(QStringLiteral("action_Address_Book"));
        actionBackup_wallet_dat = new QAction(MainWindow);
        actionBackup_wallet_dat->setObjectName(QStringLiteral("actionBackup_wallet_dat"));
        actionExport_transactions = new QAction(MainWindow);
        actionExport_transactions->setObjectName(QStringLiteral("actionExport_transactions"));
        actionPay_URI = new QAction(MainWindow);
        actionPay_URI->setObjectName(QStringLiteral("actionPay_URI"));
        actionConnect_Mobile_App = new QAction(MainWindow);
        actionConnect_Mobile_App->setObjectName(QStringLiteral("actionConnect_Mobile_App"));
        actionRequest_zcash = new QAction(MainWindow);
        actionRequest_zcash->setObjectName(QStringLiteral("actionRequest_zcash"));
        actionValidate_Address = new QAction(MainWindow);
        actionValidate_Address->setObjectName(QStringLiteral("actionValidate_Address"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(250, 0));
        groupBox->setFlat(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        balSheilded = new QLabel(groupBox);
        balSheilded->setObjectName(QStringLiteral("balSheilded"));
        balSheilded->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(balSheilded);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        balTransparent = new QLabel(groupBox);
        balTransparent->setObjectName(QStringLiteral("balTransparent"));
        balTransparent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(balTransparent);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        balTotal = new QLabel(groupBox);
        balTotal->setObjectName(QStringLiteral("balTotal"));
        balTotal->setFont(font);
        balTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(balTotal);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_99 = new QHBoxLayout();
        horizontalLayout_99->setSpacing(6);
        horizontalLayout_99->setObjectName(QStringLiteral("horizontalLayout_99"));
        label_99 = new QLabel(groupBox);
        label_99->setObjectName(QStringLiteral("label_99"));
        sizePolicy.setHeightForWidth(label_99->sizePolicy().hasHeightForWidth());
        label_99->setSizePolicy(sizePolicy);
        label_99->setFont(font);

        horizontalLayout_99->addWidget(label_99);

        balUSDTotal = new QLabel(groupBox);
        balUSDTotal->setObjectName(QStringLiteral("balUSDTotal"));
        balUSDTotal->setFont(font);
        balUSDTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_99->addWidget(balUSDTotal);


        verticalLayout->addLayout(horizontalLayout_99);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        unconfirmedWarning = new QLabel(groupBox);
        unconfirmedWarning->setObjectName(QStringLiteral("unconfirmedWarning"));
        sizePolicy.setHeightForWidth(unconfirmedWarning->sizePolicy().hasHeightForWidth());
        unconfirmedWarning->setSizePolicy(sizePolicy);
        unconfirmedWarning->setStyleSheet(QStringLiteral("color: red;"));

        verticalLayout->addWidget(unconfirmedWarning);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        balancesTable = new QTableView(groupBox_2);
        balancesTable->setObjectName(QStringLiteral("balancesTable"));
        balancesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        balancesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        balancesTable->setCornerButtonEnabled(false);
        balancesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        balancesTable->horizontalHeader()->setStretchLastSection(true);
        balancesTable->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(balancesTable);


        horizontalLayout_5->addWidget(groupBox_2);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setAutoFillBackground(false);
        groupBox_4->setFlat(false);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        inputsCombo = new AddressCombo(groupBox_4);
        inputsCombo->setObjectName(QStringLiteral("inputsCombo"));

        horizontalLayout_8->addWidget(inputsCombo);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_15->addWidget(label_5);

        sendAddressBalance = new QLineEdit(groupBox_4);
        sendAddressBalance->setObjectName(QStringLiteral("sendAddressBalance"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sendAddressBalance->sizePolicy().hasHeightForWidth());
        sendAddressBalance->setSizePolicy(sizePolicy2);
        sendAddressBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sendAddressBalance->setReadOnly(true);

        horizontalLayout_15->addWidget(sendAddressBalance);

        sendAddressBalanceUSD = new QLabel(groupBox_4);
        sendAddressBalanceUSD->setObjectName(QStringLiteral("sendAddressBalanceUSD"));

        horizontalLayout_15->addWidget(sendAddressBalanceUSD);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_15);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        sendToScrollArea = new QScrollArea(groupBox_3);
        sendToScrollArea->setObjectName(QStringLiteral("sendToScrollArea"));
        sendToScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        sendToScrollArea->setWidgetResizable(true);
        sendToWidgets = new QWidget();
        sendToWidgets->setObjectName(QStringLiteral("sendToWidgets"));
        sendToWidgets->setGeometry(QRect(0, 0, 920, 301));
        sendToLayout = new QVBoxLayout(sendToWidgets);
        sendToLayout->setSpacing(6);
        sendToLayout->setContentsMargins(11, 11, 11, 11);
        sendToLayout->setObjectName(QStringLiteral("sendToLayout"));
        verticalGroupBox = new QGroupBox(sendToWidgets);
        verticalGroupBox->setObjectName(QStringLiteral("verticalGroupBox"));
        sendAddressLayout = new QVBoxLayout(verticalGroupBox);
        sendAddressLayout->setSpacing(6);
        sendAddressLayout->setContentsMargins(11, 11, 11, 11);
        sendAddressLayout->setObjectName(QStringLiteral("sendAddressLayout"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_4 = new QLabel(verticalGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_12->addWidget(label_4);

        Address1 = new QLineEdit(verticalGroupBox);
        Address1->setObjectName(QStringLiteral("Address1"));

        horizontalLayout_12->addWidget(Address1);

        AddressBook1 = new QPushButton(verticalGroupBox);
        AddressBook1->setObjectName(QStringLiteral("AddressBook1"));

        horizontalLayout_12->addWidget(AddressBook1);


        sendAddressLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_6 = new QLabel(verticalGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_13->addWidget(label_6);

        Amount1 = new QLineEdit(verticalGroupBox);
        Amount1->setObjectName(QStringLiteral("Amount1"));
        Amount1->setBaseSize(QSize(200, 0));
        Amount1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(Amount1);

        AmtUSD1 = new QLabel(verticalGroupBox);
        AmtUSD1->setObjectName(QStringLiteral("AmtUSD1"));

        horizontalLayout_13->addWidget(AmtUSD1);

        Max1 = new QCheckBox(verticalGroupBox);
        Max1->setObjectName(QStringLiteral("Max1"));

        horizontalLayout_13->addWidget(Max1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        FileBtn = new QPushButton(verticalGroupBox);
        FileBtn->setObjectName(QStringLiteral("FileBtn"));
        FileBtn->setEnabled(true);

        horizontalLayout_13->addWidget(FileBtn);

        MemoBtn1 = new QPushButton(verticalGroupBox);
        MemoBtn1->setObjectName(QStringLiteral("MemoBtn1"));
        MemoBtn1->setEnabled(true);

        horizontalLayout_13->addWidget(MemoBtn1);


        sendAddressLayout->addLayout(horizontalLayout_13);

        MemoTxt1 = new QLabel(verticalGroupBox);
        MemoTxt1->setObjectName(QStringLiteral("MemoTxt1"));
        QFont font1;
        font1.setPointSize(10);
        MemoTxt1->setFont(font1);
        MemoTxt1->setWordWrap(true);

        sendAddressLayout->addWidget(MemoTxt1);


        sendToLayout->addWidget(verticalGroupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        addAddressButton = new QPushButton(sendToWidgets);
        addAddressButton->setObjectName(QStringLiteral("addAddressButton"));
        addAddressButton->setBaseSize(QSize(200, 0));

        horizontalLayout_7->addWidget(addAddressButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        sendToLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sendToLayout->addItem(verticalSpacer_2);

        sendToScrollArea->setWidget(sendToWidgets);

        verticalLayout_3->addWidget(sendToScrollArea);


        verticalLayout_4->addWidget(groupBox_3);

        layoutSendRecurring = new QHBoxLayout();
        layoutSendRecurring->setSpacing(6);
        layoutSendRecurring->setObjectName(QStringLiteral("layoutSendRecurring"));
        chkRecurring = new QCheckBox(tab_2);
        chkRecurring->setObjectName(QStringLiteral("chkRecurring"));

        layoutSendRecurring->addWidget(chkRecurring);

        lblRecurDesc = new QLabel(tab_2);
        lblRecurDesc->setObjectName(QStringLiteral("lblRecurDesc"));

        layoutSendRecurring->addWidget(lblRecurDesc);

        btnRecurSchedule = new QPushButton(tab_2);
        btnRecurSchedule->setObjectName(QStringLiteral("btnRecurSchedule"));
        btnRecurSchedule->setCheckable(false);
        btnRecurSchedule->setChecked(false);

        layoutSendRecurring->addWidget(btnRecurSchedule);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutSendRecurring->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(layoutSendRecurring);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        minerFeeLabel = new QLabel(tab_2);
        minerFeeLabel->setObjectName(QStringLiteral("minerFeeLabel"));

        horizontalLayout_6->addWidget(minerFeeLabel);

        minerFeeAmt = new QLineEdit(tab_2);
        minerFeeAmt->setObjectName(QStringLiteral("minerFeeAmt"));
        sizePolicy2.setHeightForWidth(minerFeeAmt->sizePolicy().hasHeightForWidth());
        minerFeeAmt->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(minerFeeAmt);

        lblMinerFeeUSD = new QLabel(tab_2);
        lblMinerFeeUSD->setObjectName(QStringLiteral("lblMinerFeeUSD"));

        horizontalLayout_6->addWidget(lblMinerFeeUSD);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setText(QStringLiteral(""));

        horizontalLayout_6->addWidget(label_17);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        sendTransactionButton = new QPushButton(tab_2);
        sendTransactionButton->setObjectName(QStringLiteral("sendTransactionButton"));
        sendTransactionButton->setBaseSize(QSize(100, 0));
        sendTransactionButton->setFlat(false);

        horizontalLayout_6->addWidget(sendTransactionButton);

        cancelSendButton = new QPushButton(tab_2);
        cancelSendButton->setObjectName(QStringLiteral("cancelSendButton"));
        cancelSendButton->setBaseSize(QSize(100, 0));

        horizontalLayout_6->addWidget(cancelSendButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(false);
        verticalLayout_9 = new QVBoxLayout(groupBox_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        rdioZSAddr = new QRadioButton(groupBox_6);
        rdioZSAddr->setObjectName(QStringLiteral("rdioZSAddr"));

        horizontalLayout_9->addWidget(rdioZSAddr);

        rdioTAddr = new QRadioButton(groupBox_6);
        rdioTAddr->setObjectName(QStringLiteral("rdioTAddr"));
        sizePolicy2.setHeightForWidth(rdioTAddr->sizePolicy().hasHeightForWidth());
        rdioTAddr->setSizePolicy(sizePolicy2);
        rdioTAddr->setVisible(false);

        horizontalLayout_9->addWidget(rdioTAddr);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        listReceiveAddresses = new AddressCombo(groupBox_6);
        listReceiveAddresses->setObjectName(QStringLiteral("listReceiveAddresses"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listReceiveAddresses->sizePolicy().hasHeightForWidth());
        listReceiveAddresses->setSizePolicy(sizePolicy3);
        listReceiveAddresses->setDuplicatesEnabled(false);

        horizontalLayout_10->addWidget(listReceiveAddresses);

        btnReceiveNewAddr = new QPushButton(groupBox_6);
        btnReceiveNewAddr->setObjectName(QStringLiteral("btnReceiveNewAddr"));

        horizontalLayout_10->addWidget(btnReceiveNewAddr);

        btnViewAllAddresses = new QPushButton(groupBox_6);
        btnViewAllAddresses->setObjectName(QStringLiteral("btnViewAllAddresses"));

        horizontalLayout_10->addWidget(btnViewAllAddresses);


        verticalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout_8->addWidget(groupBox_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        rcvUpdateLabel = new QPushButton(tab_3);
        rcvUpdateLabel->setObjectName(QStringLiteral("rcvUpdateLabel"));

        gridLayout_4->addWidget(rcvUpdateLabel, 1, 2, 1, 1);

        rcvBal = new QLabel(tab_3);
        rcvBal->setObjectName(QStringLiteral("rcvBal"));

        gridLayout_4->addWidget(rcvBal, 2, 1, 1, 2);

        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_4->addWidget(label_21, 2, 0, 1, 1);

        rcvLabel = new QLineEdit(tab_3);
        rcvLabel->setObjectName(QStringLiteral("rcvLabel"));
        rcvLabel->setMaxLength(40);

        gridLayout_4->addWidget(rcvLabel, 1, 1, 1, 1);

        txtReceive = new QPlainTextEdit(tab_3);
        txtReceive->setObjectName(QStringLiteral("txtReceive"));
        sizePolicy1.setHeightForWidth(txtReceive->sizePolicy().hasHeightForWidth());
        txtReceive->setSizePolicy(sizePolicy1);
        txtReceive->setReadOnly(true);

        gridLayout_4->addWidget(txtReceive, 0, 1, 1, 2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        exportKey = new QPushButton(tab_3);
        exportKey->setObjectName(QStringLiteral("exportKey"));

        horizontalLayout_16->addWidget(exportKey);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_16, 3, 1, 1, 2);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);


        horizontalLayout_11->addLayout(verticalLayout_10);

        qrcodeDisplay = new QRCodeLabel(tab_3);
        qrcodeDisplay->setObjectName(QStringLiteral("qrcodeDisplay"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(qrcodeDisplay->sizePolicy().hasHeightForWidth());
        qrcodeDisplay->setSizePolicy(sizePolicy4);
        qrcodeDisplay->setStyleSheet(QStringLiteral("background-color: #fff"));

        horizontalLayout_11->addWidget(qrcodeDisplay);


        verticalLayout_8->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(verticalLayout_8);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        transactionsTable = new QTableView(tab_4);
        transactionsTable->setObjectName(QStringLiteral("transactionsTable"));
        transactionsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        transactionsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(transactionsTable);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        hushlogo = new FilledIconLabel(tab_5);
        hushlogo->setObjectName(QStringLiteral("hushlogo"));
        sizePolicy4.setHeightForWidth(hushlogo->sizePolicy().hasHeightForWidth());
        hushlogo->setSizePolicy(sizePolicy4);
        hushlogo->setScaledContents(false);

        horizontalLayout_14->addWidget(hushlogo);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 5, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 6, 0, 1, 1);

        numconnections = new QLabel(groupBox_5);
        numconnections->setObjectName(QStringLiteral("numconnections"));

        gridLayout_5->addWidget(numconnections, 2, 2, 1, 1);

        heightLabel = new QLabel(groupBox_5);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        gridLayout_5->addWidget(heightLabel, 1, 0, 1, 1);

        notarizedhashlabel = new QLabel(groupBox_5);
        notarizedhashlabel->setObjectName(QStringLiteral("notarizedhashlabel"));

        gridLayout_5->addWidget(notarizedhashlabel, 7, 0, 1, 1);

        notarizedhashvalue = new QLabel(groupBox_5);
        notarizedhashvalue->setObjectName(QStringLiteral("notarizedhashvalue"));

        gridLayout_5->addWidget(notarizedhashvalue, 7, 2, 1, 1);

        notarizedhashspacer = new QLabel(groupBox_5);
        notarizedhashspacer->setObjectName(QStringLiteral("notarizedhashspacer"));

        gridLayout_5->addWidget(notarizedhashspacer, 7, 1, 1, 1);

        notarizedtxidlabel = new QLabel(groupBox_5);
        notarizedtxidlabel->setObjectName(QStringLiteral("notarizedtxidlabel"));

        gridLayout_5->addWidget(notarizedtxidlabel, 8, 0, 1, 1);

        notarizedtxidvalue = new QLabel(groupBox_5);
        notarizedtxidvalue->setObjectName(QStringLiteral("notarizedtxidvalue"));

        gridLayout_5->addWidget(notarizedtxidvalue, 8, 2, 1, 1);

        notarizedtxidspacer = new QLabel(groupBox_5);
        notarizedtxidspacer->setObjectName(QStringLiteral("notarizedtxidspacer"));

        gridLayout_5->addWidget(notarizedtxidspacer, 8, 1, 1, 1);

        laglabel = new QLabel(groupBox_5);
        laglabel->setObjectName(QStringLiteral("laglabel"));

        gridLayout_5->addWidget(laglabel, 9, 0, 1, 1);

        lagvalue = new QLabel(groupBox_5);
        lagvalue->setObjectName(QStringLiteral("lagvalue"));

        gridLayout_5->addWidget(lagvalue, 9, 2, 1, 1);

        lagspacer = new QLabel(groupBox_5);
        lagspacer->setObjectName(QStringLiteral("lagspacer"));

        gridLayout_5->addWidget(lagspacer, 9, 1, 1, 1);

        kmdversionlabel = new QLabel(groupBox_5);
        kmdversionlabel->setObjectName(QStringLiteral("kmdversionlabel"));

        gridLayout_5->addWidget(kmdversionlabel, 10, 0, 1, 1);

        kmdversion = new QLabel(groupBox_5);
        kmdversion->setObjectName(QStringLiteral("kmdversion"));

        gridLayout_5->addWidget(kmdversion, 10, 2, 1, 1);

        kmdversionspacer = new QLabel(groupBox_5);
        kmdversionspacer->setObjectName(QStringLiteral("kmdversionspacer"));

        gridLayout_5->addWidget(kmdversionspacer, 10, 1, 1, 1);

        protocolversionlabel = new QLabel(groupBox_5);
        protocolversionlabel->setObjectName(QStringLiteral("protocolversionlabel"));

        gridLayout_5->addWidget(protocolversionlabel, 11, 0, 1, 1);

        protocolversion = new QLabel(groupBox_5);
        protocolversion->setObjectName(QStringLiteral("protocolversion"));

        gridLayout_5->addWidget(protocolversion, 11, 2, 1, 1);

        protocolversionspacer = new QLabel(groupBox_5);
        protocolversionspacer->setObjectName(QStringLiteral("protocolversionspacer"));

        gridLayout_5->addWidget(protocolversionspacer, 11, 1, 1, 1);

        versionlabel = new QLabel(groupBox_5);
        versionlabel->setObjectName(QStringLiteral("versionlabel"));

        gridLayout_5->addWidget(versionlabel, 12, 0, 1, 1);

        version = new QLabel(groupBox_5);
        version->setObjectName(QStringLiteral("version"));

        gridLayout_5->addWidget(version, 12, 2, 1, 1);

        versionspacer = new QLabel(groupBox_5);
        versionspacer->setObjectName(QStringLiteral("versionspacer"));

        gridLayout_5->addWidget(versionspacer, 12, 1, 1, 1);

        p2pportlabel = new QLabel(groupBox_5);
        p2pportlabel->setObjectName(QStringLiteral("p2pportlabel"));

        gridLayout_5->addWidget(p2pportlabel, 13, 0, 1, 1);

        p2pport = new QLabel(groupBox_5);
        p2pport->setObjectName(QStringLiteral("p2pport"));

        gridLayout_5->addWidget(p2pport, 13, 2, 1, 1);

        p2pportspacer = new QLabel(groupBox_5);
        p2pportspacer->setObjectName(QStringLiteral("p2pportspacer"));

        gridLayout_5->addWidget(p2pportspacer, 13, 1, 1, 1);

        rpcportlabel = new QLabel(groupBox_5);
        rpcportlabel->setObjectName(QStringLiteral("rpcportlabel"));

        gridLayout_5->addWidget(rpcportlabel, 14, 0, 1, 1);

        rpcport = new QLabel(groupBox_5);
        rpcport->setObjectName(QStringLiteral("rpcport"));

        gridLayout_5->addWidget(rpcport, 14, 2, 1, 1);

        rpcportspacer = new QLabel(groupBox_5);
        rpcportspacer->setObjectName(QStringLiteral("rpcportspacer"));

        gridLayout_5->addWidget(rpcportspacer, 14, 1, 1, 1);

        clientnamelabel = new QLabel(groupBox_5);
        clientnamelabel->setObjectName(QStringLiteral("clientnamelabel"));

        gridLayout_5->addWidget(clientnamelabel, 15, 0, 1, 1);

        clientname = new QLabel(groupBox_5);
        clientname->setObjectName(QStringLiteral("clientname"));

        gridLayout_5->addWidget(clientname, 15, 2, 1, 1);

        clientnamespacer = new QLabel(groupBox_5);
        clientnamespacer->setObjectName(QStringLiteral("clientnamespacer"));

        gridLayout_5->addWidget(clientnamespacer, 15, 1, 1, 1);

        halvinglabel = new QLabel(groupBox_5);
        halvinglabel->setObjectName(QStringLiteral("halvinglabel"));

        gridLayout_5->addWidget(halvinglabel, 16, 0, 1, 1);

        halving = new QLabel(groupBox_5);
        halving->setObjectName(QStringLiteral("halving"));

        gridLayout_5->addWidget(halving, 16, 2, 1, 1);

        halvingspacer = new QLabel(groupBox_5);
        halvingspacer->setObjectName(QStringLiteral("halvingspacer"));

        gridLayout_5->addWidget(halvingspacer, 16, 1, 1, 1);

        localserviceslabel = new QLabel(groupBox_5);
        localserviceslabel->setObjectName(QStringLiteral("localserviceslabel"));

        gridLayout_5->addWidget(localserviceslabel, 17, 0, 1, 1);

        localservices = new QLabel(groupBox_5);
        localservices->setObjectName(QStringLiteral("localservices"));

        gridLayout_5->addWidget(localservices, 17, 2, 1, 1);

        localservicesspacer = new QLabel(groupBox_5);
        localservicesspacer->setObjectName(QStringLiteral("localservicesspacer"));

        gridLayout_5->addWidget(localservicesspacer, 17, 1, 1, 1);

        longestchainlabel = new QLabel(groupBox_5);
        longestchainlabel->setObjectName(QStringLiteral("longestchainlabel"));

        gridLayout_5->addWidget(longestchainlabel, 18, 0, 1, 1);

        longestchain = new QLabel(groupBox_5);
        longestchain->setObjectName(QStringLiteral("longestchain"));

        gridLayout_5->addWidget(longestchain, 18, 2, 1, 1);

        longestchainspacer = new QLabel(groupBox_5);
        longestchainspacer->setObjectName(QStringLiteral("longestchainspacer"));

        gridLayout_5->addWidget(longestchainspacer, 18, 1, 1, 1);

        txcountlabel = new QLabel(groupBox_5);
        txcountlabel->setObjectName(QStringLiteral("txcountlabel"));

        gridLayout_5->addWidget(txcountlabel, 19, 0, 1, 1);

        txcount = new QLabel(groupBox_5);
        txcount->setObjectName(QStringLiteral("txcount"));

        gridLayout_5->addWidget(txcount, 19, 2, 1, 1);

        txcountspacer = new QLabel(groupBox_5);
        txcountspacer->setObjectName(QStringLiteral("txcountspacer"));

        gridLayout_5->addWidget(txcountspacer, 19, 1, 1, 1);

        solrate = new QLabel(groupBox_5);
        solrate->setObjectName(QStringLiteral("solrate"));

        gridLayout_5->addWidget(solrate, 3, 2, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 3, 0, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 2, 0, 1, 1);

        blockheight = new QLabel(groupBox_5);
        blockheight->setObjectName(QStringLiteral("blockheight"));

        gridLayout_5->addWidget(blockheight, 1, 2, 1, 1);

        line_2 = new QFrame(groupBox_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 4, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 1, 1, 1, 1);


        horizontalLayout_14->addWidget(groupBox_5);


        verticalLayout_7->addLayout(horizontalLayout_14);

        tabWidget->addTab(tab_5, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 968, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuApps = new QMenu(menuBar);
        menuApps->setObjectName(QStringLiteral("menuApps"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, inputsCombo);
        QWidget::setTabOrder(inputsCombo, Address1);
        QWidget::setTabOrder(Address1, Amount1);
        QWidget::setTabOrder(Amount1, Max1);
        QWidget::setTabOrder(Max1, AddressBook1);
        QWidget::setTabOrder(AddressBook1, MemoBtn1);
        QWidget::setTabOrder(MemoBtn1, addAddressButton);
        QWidget::setTabOrder(addAddressButton, sendTransactionButton);
        QWidget::setTabOrder(sendTransactionButton, cancelSendButton);
        QWidget::setTabOrder(cancelSendButton, rdioZSAddr);
        QWidget::setTabOrder(rdioZSAddr, rdioTAddr);
        QWidget::setTabOrder(rdioTAddr, listReceiveAddresses);
        QWidget::setTabOrder(listReceiveAddresses, btnReceiveNewAddr);
        QWidget::setTabOrder(btnReceiveNewAddr, txtReceive);
        QWidget::setTabOrder(txtReceive, rcvLabel);
        QWidget::setTabOrder(rcvLabel, rcvUpdateLabel);
        QWidget::setTabOrder(rcvUpdateLabel, transactionsTable);
        QWidget::setTabOrder(transactionsTable, balancesTable);
        QWidget::setTabOrder(balancesTable, minerFeeAmt);
        QWidget::setTabOrder(minerFeeAmt, sendAddressBalance);
        QWidget::setTabOrder(sendAddressBalance, sendToScrollArea);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuApps->menuAction());
        menuFile->addAction(actionRequest_zcash);
        menuFile->addAction(actionPay_URI);
        menuFile->addSeparator();
        menuFile->addAction(actionImport_Private_Key);
        menuFile->addAction(actionExport_All_Private_Keys);
        menuFile->addAction(actionBackup_wallet_dat);
        menuFile->addSeparator();
        menuFile->addAction(actionExport_transactions);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionDiscord);
        menuHelp->addAction(actionWebsite);
        menuHelp->addAction(actionCheck_for_Updates);
        menuHelp->addAction(actionAbout);
        menuApps->addAction(actionConnect_Mobile_App);
        menuApps->addAction(actionValidate_Address);
        menuApps->addSeparator();
        menu_Edit->addAction(action_Address_Book);
        menu_Edit->addAction(actionSettings);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WalkThePlank", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "&Settings", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDonate->setText(QApplication::translate("MainWindow", "&Send Duke Feedback", Q_NULLPTR));
        actionDiscord->setText(QApplication::translate("MainWindow", "&Hush Discord", Q_NULLPTR));
        actionWebsite->setText(QApplication::translate("MainWindow", "&Hush Website", Q_NULLPTR));
        actionCheck_for_Updates->setText(QApplication::translate("MainWindow", "Check github.com for &updates", Q_NULLPTR));
        actionTurnstile_Migration->setText(QApplication::translate("MainWindow", "Sapling &turnstile", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionTurnstile_Migration->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionImport_Private_Key->setText(QApplication::translate("MainWindow", "&Import private key", Q_NULLPTR));
        actionExport_All_Private_Keys->setText(QApplication::translate("MainWindow", "&Export all private keys", Q_NULLPTR));
        actionz_board_net->setText(QApplication::translate("MainWindow", "&z-board.net", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionz_board_net->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Address_Book->setText(QApplication::translate("MainWindow", "Address &book", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Address_Book->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionBackup_wallet_dat->setText(QApplication::translate("MainWindow", "&Backup wallet.dat", Q_NULLPTR));
        actionExport_transactions->setText(QApplication::translate("MainWindow", "Export transactions", Q_NULLPTR));
        actionPay_URI->setText(QApplication::translate("MainWindow", "Pay HUSH &URI...", Q_NULLPTR));
        actionConnect_Mobile_App->setText(QApplication::translate("MainWindow", "Connect mobile &app", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConnect_Mobile_App->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRequest_zcash->setText(QApplication::translate("MainWindow", "Request HUSH...", Q_NULLPTR));
        actionValidate_Address->setText(QApplication::translate("MainWindow", "Validate Address", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Summary", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Shielded", Q_NULLPTR));
        balSheilded->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Transparent", Q_NULLPTR));
        balTransparent->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Total", Q_NULLPTR));
        balTotal->setText(QString());
        label_99->setText(QString());
        balUSDTotal->setText(QString());
        unconfirmedWarning->setText(QApplication::translate("MainWindow", "Some transactions are not yet confirmed", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Address Balances", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Balance", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Address Balance", Q_NULLPTR));
        sendAddressBalanceUSD->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Send To", Q_NULLPTR));
        verticalGroupBox->setTitle(QApplication::translate("MainWindow", "Recipient", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        Address1->setPlaceholderText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        AddressBook1->setText(QApplication::translate("MainWindow", "Address Book", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Amount", Q_NULLPTR));
        Amount1->setPlaceholderText(QApplication::translate("MainWindow", "Amount", Q_NULLPTR));
        AmtUSD1->setText(QString());
        Max1->setText(QApplication::translate("MainWindow", "Max Available", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FileBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FileBtn->setText(QApplication::translate("MainWindow", "Upload File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MemoBtn1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MemoBtn1->setText(QApplication::translate("MainWindow", "Memo", Q_NULLPTR));
        MemoTxt1->setText(QString());
        addAddressButton->setText(QApplication::translate("MainWindow", "Add Recipient", Q_NULLPTR));
        chkRecurring->setText(QApplication::translate("MainWindow", "Recurring payment", Q_NULLPTR));
        lblRecurDesc->setText(QApplication::translate("MainWindow", "Every month, starting 12-May-2012, for 6 payments", Q_NULLPTR));
        btnRecurSchedule->setText(QApplication::translate("MainWindow", "Edit Schedule", Q_NULLPTR));
        minerFeeLabel->setText(QApplication::translate("MainWindow", "Miner Fee", Q_NULLPTR));
        minerFeeAmt->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lblMinerFeeUSD->setText(QString());
        sendTransactionButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        cancelSendButton->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        rdioZSAddr->setText(QApplication::translate("MainWindow", "Shielded Address (Private, Anonymous)", Q_NULLPTR));
        rdioTAddr->setText(QApplication::translate("MainWindow", "Transparent Address (Public, Metadata-Leaking)", Q_NULLPTR));
        btnReceiveNewAddr->setText(QApplication::translate("MainWindow", "New Address", Q_NULLPTR));
        btnViewAllAddresses->setText(QApplication::translate("MainWindow", "View All Addresses", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        rcvUpdateLabel->setText(QApplication::translate("MainWindow", "Update Label", Q_NULLPTR));
        rcvBal->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Address balance", Q_NULLPTR));
        rcvLabel->setPlaceholderText(QApplication::translate("MainWindow", "Optional", Q_NULLPTR));
        exportKey->setText(QApplication::translate("MainWindow", "Export Private Key", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        qrcodeDisplay->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Receive", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Transactions", Q_NULLPTR));
        hushlogo->setText(QString());
        groupBox_5->setTitle(QString());
        label_14->setText(QApplication::translate("MainWindow", "You are currently not mining", Q_NULLPTR));
        numconnections->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        heightLabel->setText(QApplication::translate("MainWindow", "Block height", Q_NULLPTR));
        notarizedhashlabel->setText(QApplication::translate("MainWindow", "Notarized Hash", Q_NULLPTR));
        notarizedhashvalue->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        notarizedhashspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        notarizedtxidlabel->setText(QApplication::translate("MainWindow", "Notarized txid", Q_NULLPTR));
        notarizedtxidvalue->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        notarizedtxidspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        laglabel->setText(QApplication::translate("MainWindow", "Notarized Lag", Q_NULLPTR));
        lagvalue->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        lagspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        kmdversionlabel->setText(QApplication::translate("MainWindow", "KMD Version", Q_NULLPTR));
        kmdversion->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        kmdversionspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        protocolversionlabel->setText(QApplication::translate("MainWindow", "Protocol Version", Q_NULLPTR));
        protocolversion->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        protocolversionspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        versionlabel->setText(QApplication::translate("MainWindow", "Version", Q_NULLPTR));
        version->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        versionspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        p2pportlabel->setText(QApplication::translate("MainWindow", "P2P Port", Q_NULLPTR));
        p2pport->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        p2pportspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        rpcportlabel->setText(QApplication::translate("MainWindow", "RPC Port", Q_NULLPTR));
        rpcport->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        rpcportspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        clientnamelabel->setText(QApplication::translate("MainWindow", "Client Name", Q_NULLPTR));
        clientname->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        clientnamespacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        halvinglabel->setText(QApplication::translate("MainWindow", "Next Halving", Q_NULLPTR));
        halving->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        halvingspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        localserviceslabel->setText(QApplication::translate("MainWindow", "Local Services", Q_NULLPTR));
        localservices->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        localservicesspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        longestchainlabel->setText(QApplication::translate("MainWindow", "Longest Chain", Q_NULLPTR));
        longestchain->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        longestchainspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        txcountlabel->setText(QApplication::translate("MainWindow", "Wallet Transactions", Q_NULLPTR));
        txcount->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        txcountspacer->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        solrate->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Network solution rate", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Connections", Q_NULLPTR));
        blockheight->setText(QApplication::translate("MainWindow", "Loading...", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "|", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "ARRRUKIDDING Infos", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        menuApps->setTitle(QApplication::translate("MainWindow", "&Apps", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

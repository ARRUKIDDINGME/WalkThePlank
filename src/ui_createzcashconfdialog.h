/********************************************************************************
** Form generated from reading UI file 'createzcashconfdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEZCASHCONFDIALOG_H
#define UI_CREATEZCASHCONFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "fillediconlabel.h"

QT_BEGIN_NAMESPACE

class Ui_createZcashConf
{
public:
    QGridLayout *gridLayout;
    FilledIconLabel *lblTopIcon;
    QFrame *line;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAdvancedConfig;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QGroupBox *grpAdvanced;
    QGridLayout *gridLayout_2;
    QCheckBox *chkCustomDatadir;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPickDir;
    QLabel *lblDirName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QCheckBox *chkUseTor;
    QLabel *label_5;

    void setupUi(QDialog *createZcashConf)
    {
        if (createZcashConf->objectName().isEmpty())
            createZcashConf->setObjectName(QStringLiteral("createZcashConf"));
        createZcashConf->resize(508, 352);
        gridLayout = new QGridLayout(createZcashConf);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblTopIcon = new FilledIconLabel(createZcashConf);
        lblTopIcon->setObjectName(QStringLiteral("lblTopIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblTopIcon->sizePolicy().hasHeightForWidth());
        lblTopIcon->setSizePolicy(sizePolicy);
        lblTopIcon->setStyleSheet(QStringLiteral("background: #fff;"));
        lblTopIcon->setText(QStringLiteral(""));
        lblTopIcon->setScaledContents(true);

        gridLayout->addWidget(lblTopIcon, 0, 1, 1, 1);

        line = new QFrame(createZcashConf);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(createZcashConf);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnAdvancedConfig = new QPushButton(createZcashConf);
        btnAdvancedConfig->setObjectName(QStringLiteral("btnAdvancedConfig"));
        btnAdvancedConfig->setCheckable(true);

        horizontalLayout_3->addWidget(btnAdvancedConfig);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        label = new QLabel(createZcashConf);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        grpAdvanced = new QGroupBox(createZcashConf);
        grpAdvanced->setObjectName(QStringLiteral("grpAdvanced"));
        gridLayout_2 = new QGridLayout(grpAdvanced);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkCustomDatadir = new QCheckBox(grpAdvanced);
        chkCustomDatadir->setObjectName(QStringLiteral("chkCustomDatadir"));

        gridLayout_2->addWidget(chkCustomDatadir, 0, 0, 1, 1);

        label_2 = new QLabel(grpAdvanced);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnPickDir = new QPushButton(grpAdvanced);
        btnPickDir->setObjectName(QStringLiteral("btnPickDir"));

        horizontalLayout->addWidget(btnPickDir);

        lblDirName = new QLabel(grpAdvanced);
        lblDirName->setObjectName(QStringLiteral("lblDirName"));
        lblDirName->setText(QStringLiteral(""));

        horizontalLayout->addWidget(lblDirName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        label_4 = new QLabel(grpAdvanced);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setText(QStringLiteral(""));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        chkUseTor = new QCheckBox(grpAdvanced);
        chkUseTor->setObjectName(QStringLiteral("chkUseTor"));

        gridLayout_2->addWidget(chkUseTor, 4, 0, 1, 1);

        label_5 = new QLabel(grpAdvanced);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);


        gridLayout->addWidget(grpAdvanced, 4, 1, 1, 1);


        retranslateUi(createZcashConf);
        QObject::connect(buttonBox, SIGNAL(accepted()), createZcashConf, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), createZcashConf, SLOT(reject()));

        QMetaObject::connectSlotsByName(createZcashConf);
    } // setupUi

    void retranslateUi(QDialog *createZcashConf)
    {
        createZcashConf->setWindowTitle(QApplication::translate("createZcashConf", "Configure HUSH3.conf", Q_NULLPTR));
        btnAdvancedConfig->setText(QApplication::translate("createZcashConf", "Show Advanced Configuration", Q_NULLPTR));
        label->setText(QApplication::translate("createZcashConf", "Your Hush node will be configured for you automatically", Q_NULLPTR));
        grpAdvanced->setTitle(QString());
        chkCustomDatadir->setText(QApplication::translate("createZcashConf", "Use custom datadir", Q_NULLPTR));
        label_2->setText(QApplication::translate("createZcashConf", "Please choose a directory to store your wallet.dat and blockchain", Q_NULLPTR));
        btnPickDir->setText(QApplication::translate("createZcashConf", "Choose directory", Q_NULLPTR));
        chkUseTor->setText(QApplication::translate("createZcashConf", "Connect over Tor", Q_NULLPTR));
        label_5->setText(QApplication::translate("createZcashConf", "Please note that you'll need to already have a Tor service configured on port 9050", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createZcashConf: public Ui_createZcashConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEZCASHCONFDIALOG_H

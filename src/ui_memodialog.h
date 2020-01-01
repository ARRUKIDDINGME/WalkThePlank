/********************************************************************************
** Form generated from reading UI file 'memodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMODIALOG_H
#define UI_MEMODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "memoedit.h"

QT_BEGIN_NAMESPACE

class Ui_MemoDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *memoSize;
    QDialogButtonBox *buttonBox;
    MemoEdit *memoTxt;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInsertFrom;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *MemoDialog)
    {
        if (MemoDialog->objectName().isEmpty())
            MemoDialog->setObjectName(QStringLiteral("MemoDialog"));
        MemoDialog->resize(542, 202);
        gridLayout = new QGridLayout(MemoDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        memoSize = new QLabel(MemoDialog);
        memoSize->setObjectName(QStringLiteral("memoSize"));
        memoSize->setText(QStringLiteral("0 / 512"));
        memoSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(memoSize, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(MemoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 2);

        memoTxt = new MemoEdit(MemoDialog);
        memoTxt->setObjectName(QStringLiteral("memoTxt"));

        gridLayout->addWidget(memoTxt, 1, 0, 1, 3);

        label = new QLabel(MemoDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnInsertFrom = new QPushButton(MemoDialog);
        btnInsertFrom->setObjectName(QStringLiteral("btnInsertFrom"));

        horizontalLayout->addWidget(btnInsertFrom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(MemoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MemoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MemoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MemoDialog);
    } // setupUi

    void retranslateUi(QDialog *MemoDialog)
    {
        MemoDialog->setWindowTitle(QApplication::translate("MemoDialog", "Memo", Q_NULLPTR));
        label->setText(QApplication::translate("MemoDialog", "Memo", Q_NULLPTR));
        btnInsertFrom->setText(QApplication::translate("MemoDialog", "Include Reply Address", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MemoDialog: public Ui_MemoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMODIALOG_H

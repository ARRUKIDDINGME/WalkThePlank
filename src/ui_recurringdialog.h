/********************************************************************************
** Form generated from reading UI file 'recurringdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECURRINGDIALOG_H
#define UI_RECURRINGDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecurringDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RecurringDialog)
    {
        if (RecurringDialog->objectName().isEmpty())
            RecurringDialog->setObjectName(QStringLiteral("RecurringDialog"));
        RecurringDialog->resize(601, 438);
        gridLayout = new QGridLayout(RecurringDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(RecurringDialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(RecurringDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(RecurringDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(RecurringDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        buttonBox = new QDialogButtonBox(RecurringDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(RecurringDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RecurringDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RecurringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecurringDialog);
    } // setupUi

    void retranslateUi(QDialog *RecurringDialog)
    {
        RecurringDialog->setWindowTitle(QApplication::translate("RecurringDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RecurringDialog", "Add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RecurringDialog", "Edit", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("RecurringDialog", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RecurringDialog: public Ui_RecurringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECURRINGDIALOG_H

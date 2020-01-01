/********************************************************************************
** Form generated from reading UI file 'addressbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addressBook
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_1;
    QLineEdit *addr;
    QLabel *label_2;
    QLineEdit *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addNew;
    QTableView *addresses;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnImport;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addressBook)
    {
        if (addressBook->objectName().isEmpty())
            addressBook->setObjectName(QStringLiteral("addressBook"));
        addressBook->resize(690, 562);
        verticalLayout = new QVBoxLayout(addressBook);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(addressBook);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));

        verticalLayout_2->addWidget(label_1);

        addr = new QLineEdit(groupBox);
        addr->setObjectName(QStringLiteral("addr"));

        verticalLayout_2->addWidget(addr);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLineEdit(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMaxLength(40);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addNew = new QPushButton(groupBox);
        addNew->setObjectName(QStringLiteral("addNew"));

        horizontalLayout->addWidget(addNew);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        addresses = new QTableView(addressBook);
        addresses->setObjectName(QStringLiteral("addresses"));
        addresses->setSelectionMode(QAbstractItemView::SingleSelection);
        addresses->setSelectionBehavior(QAbstractItemView::SelectRows);
        addresses->horizontalHeader()->setStretchLastSection(true);
        addresses->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(addresses);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnImport = new QPushButton(addressBook);
        btnImport->setObjectName(QStringLiteral("btnImport"));

        horizontalLayout_2->addWidget(btnImport);

        buttonBox = new QDialogButtonBox(addressBook);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(addressBook);
        QObject::connect(buttonBox, SIGNAL(accepted()), addressBook, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addressBook, SLOT(reject()));

        QMetaObject::connectSlotsByName(addressBook);
    } // setupUi

    void retranslateUi(QDialog *addressBook)
    {
        addressBook->setWindowTitle(QApplication::translate("addressBook", "Address Book", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("addressBook", "Add New Address", Q_NULLPTR));
        label_1->setText(QApplication::translate("addressBook", "Address", Q_NULLPTR));
        label_2->setText(QApplication::translate("addressBook", "Label", Q_NULLPTR));
        addNew->setText(QApplication::translate("addressBook", "Add to Address Book", Q_NULLPTR));
        btnImport->setText(QApplication::translate("addressBook", "Import Address Book", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addressBook: public Ui_addressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H

/********************************************************************************
** Form generated from reading UI file 'connection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_H
#define UI_CONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "fillediconlabel.h"

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    FilledIconLabel *topIcon;
    QFrame *line_2;
    QLabel *status;
    QLabel *statusDetail;
    QFrame *line;

    void setupUi(QDialog *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QStringLiteral("ConnectionDialog"));
        ConnectionDialog->setWindowModality(Qt::ApplicationModal);
        ConnectionDialog->resize(513, 513);
        ConnectionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ConnectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topIcon = new FilledIconLabel(ConnectionDialog);
        topIcon->setObjectName(QStringLiteral("topIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topIcon->sizePolicy().hasHeightForWidth());
        topIcon->setSizePolicy(sizePolicy);
        topIcon->setText(QStringLiteral(""));

        verticalLayout->addWidget(topIcon);

        line_2 = new QFrame(ConnectionDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        status = new QLabel(ConnectionDialog);
        status->setObjectName(QStringLiteral("status"));
        status->setAlignment(Qt::AlignCenter);
        status->setWordWrap(true);

        verticalLayout->addWidget(status);

        statusDetail = new QLabel(ConnectionDialog);
        statusDetail->setObjectName(QStringLiteral("statusDetail"));
        statusDetail->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusDetail);

        line = new QFrame(ConnectionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(ConnectionDialog);

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QApplication::translate("ConnectionDialog", "WalkThePlank", Q_NULLPTR));
        status->setText(QApplication::translate("ConnectionDialog", "The Dragon Awakens...", Q_NULLPTR));
        statusDetail->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_H

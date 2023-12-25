/********************************************************************************
** Form generated from reading UI file 'printerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTERPAGE_H
#define UI_PRINTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrinterPage
{
public:
    QPushButton *cartButton;
    QLabel *printerfon;
    QLabel *printerfon2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;

    void setupUi(QWidget *PrinterPage)
    {
        if (PrinterPage->objectName().isEmpty())
            PrinterPage->setObjectName(QString::fromUtf8("PrinterPage"));
        PrinterPage->resize(698, 550);
        cartButton = new QPushButton(PrinterPage);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setGeometry(QRect(560, 20, 101, 28));
        printerfon = new QLabel(PrinterPage);
        printerfon->setObjectName(QString::fromUtf8("printerfon"));
        printerfon->setGeometry(QRect(-20, 0, 721, 71));
        printerfon2 = new QLabel(PrinterPage);
        printerfon2->setObjectName(QString::fromUtf8("printerfon2"));
        printerfon2->setGeometry(QRect(-10, 460, 721, 101));
        formLayoutWidget = new QWidget(PrinterPage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 80, 637, 377));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        printerfon->raise();
        cartButton->raise();
        printerfon2->raise();
        formLayoutWidget->raise();

        retranslateUi(PrinterPage);

        QMetaObject::connectSlotsByName(PrinterPage);
    } // setupUi

    void retranslateUi(QWidget *PrinterPage)
    {
        PrinterPage->setWindowTitle(QApplication::translate("PrinterPage", "\320\237\321\200\320\270\320\275\321\202\320\265\321\200", nullptr));
        cartButton->setText(QApplication::translate("PrinterPage", "\320\234\320\276\320\270 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        printerfon->setText(QString());
        printerfon2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PrinterPage: public Ui_PrinterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTERPAGE_H

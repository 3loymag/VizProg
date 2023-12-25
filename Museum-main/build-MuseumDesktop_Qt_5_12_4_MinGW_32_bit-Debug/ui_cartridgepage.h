/********************************************************************************
** Form generated from reading UI file 'cartridgepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTRIDGEPAGE_H
#define UI_CARTRIDGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartridgePage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *cartButton;
    QLabel *printerfon;
    QLabel *printerfon2;

    void setupUi(QWidget *CartridgePage)
    {
        if (CartridgePage->objectName().isEmpty())
            CartridgePage->setObjectName(QString::fromUtf8("CartridgePage"));
        CartridgePage->resize(698, 550);
        verticalLayoutWidget = new QWidget(CartridgePage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 80, 641, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cartButton = new QPushButton(CartridgePage);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setGeometry(QRect(560, 20, 101, 28));
        printerfon = new QLabel(CartridgePage);
        printerfon->setObjectName(QString::fromUtf8("printerfon"));
        printerfon->setGeometry(QRect(-20, 0, 721, 71));
        printerfon2 = new QLabel(CartridgePage);
        printerfon2->setObjectName(QString::fromUtf8("printerfon2"));
        printerfon2->setGeometry(QRect(-10, 460, 721, 111));
        printerfon->raise();
        verticalLayoutWidget->raise();
        cartButton->raise();
        printerfon2->raise();

        retranslateUi(CartridgePage);

        QMetaObject::connectSlotsByName(CartridgePage);
    } // setupUi

    void retranslateUi(QWidget *CartridgePage)
    {
        CartridgePage->setWindowTitle(QApplication::translate("CartridgePage", "\320\232\320\260\321\200\321\202\321\200\320\270\320\264\320\266", nullptr));
        cartButton->setText(QApplication::translate("CartridgePage", "\320\234\320\276\320\270 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        printerfon->setText(QString());
        printerfon2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CartridgePage: public Ui_CartridgePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTRIDGEPAGE_H

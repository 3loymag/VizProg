/********************************************************************************
** Form generated from reading UI file 'cartmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTMANAGER_H
#define UI_CARTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartManager
{
public:
    QListWidget *cartList;
    QPushButton *closeButton;
    QPushButton *removeButton;
    QPushButton *doneButton;
    QLabel *cartlabel;

    void setupUi(QWidget *CartManager)
    {
        if (CartManager->objectName().isEmpty())
            CartManager->setObjectName(QString::fromUtf8("CartManager"));
        CartManager->resize(698, 550);
        cartList = new QListWidget(CartManager);
        cartList->setObjectName(QString::fromUtf8("cartList"));
        cartList->setGeometry(QRect(20, 40, 651, 471));
        closeButton = new QPushButton(CartManager);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(120, 440, 93, 28));
        removeButton = new QPushButton(CartManager);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(440, 440, 93, 28));
        doneButton = new QPushButton(CartManager);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(280, 440, 93, 28));
        cartlabel = new QLabel(CartManager);
        cartlabel->setObjectName(QString::fromUtf8("cartlabel"));
        cartlabel->setGeometry(QRect(300, 0, 211, 31));

        retranslateUi(CartManager);

        QMetaObject::connectSlotsByName(CartManager);
    } // setupUi

    void retranslateUi(QWidget *CartManager)
    {
        CartManager->setWindowTitle(QApplication::translate("CartManager", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        closeButton->setText(QApplication::translate("CartManager", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        removeButton->setText(QApplication::translate("CartManager", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        doneButton->setText(QApplication::translate("CartManager", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214", nullptr));
        cartlabel->setText(QApplication::translate("CartManager", "\320\232\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CartManager: public Ui_CartManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTMANAGER_H

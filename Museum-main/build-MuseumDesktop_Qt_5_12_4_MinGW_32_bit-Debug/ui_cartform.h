/********************************************************************************
** Form generated from reading UI file 'cartform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTFORM_H
#define UI_CARTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartForm
{
public:

    void setupUi(QWidget *CartForm)
    {
        if (CartForm->objectName().isEmpty())
            CartForm->setObjectName(QString::fromUtf8("CartForm"));
        CartForm->resize(698, 533);

        retranslateUi(CartForm);

        QMetaObject::connectSlotsByName(CartForm);
    } // setupUi

    void retranslateUi(QWidget *CartForm)
    {
        CartForm->setWindowTitle(QApplication::translate("CartForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CartForm: public Ui_CartForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTFORM_H

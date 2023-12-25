/********************************************************************************
** Form generated from reading UI file 'receiptform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTFORM_H
#define UI_RECEIPTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receiptform
{
public:
    QTextEdit *receiptTextEdit;
    QLabel *label;
    QPushButton *savingButton;
    QPushButton *homeButton;

    void setupUi(QWidget *receiptform)
    {
        if (receiptform->objectName().isEmpty())
            receiptform->setObjectName(QString::fromUtf8("receiptform"));
        receiptform->resize(400, 300);
        receiptTextEdit = new QTextEdit(receiptform);
        receiptTextEdit->setObjectName(QString::fromUtf8("receiptTextEdit"));
        receiptTextEdit->setGeometry(QRect(30, 30, 331, 231));
        label = new QLabel(receiptform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(176, 2, 51, 21));
        savingButton = new QPushButton(receiptform);
        savingButton->setObjectName(QString::fromUtf8("savingButton"));
        savingButton->setGeometry(QRect(90, 270, 80, 23));
        homeButton = new QPushButton(receiptform);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(220, 270, 80, 23));

        retranslateUi(receiptform);

        QMetaObject::connectSlotsByName(receiptform);
    } // setupUi

    void retranslateUi(QWidget *receiptform)
    {
        receiptform->setWindowTitle(QApplication::translate("receiptform", "\320\247\320\265\320\272", nullptr));
        label->setText(QApplication::translate("receiptform", "\320\247\320\265\320\272", nullptr));
        savingButton->setText(QApplication::translate("receiptform", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        homeButton->setText(QApplication::translate("receiptform", "\320\232 \320\277\320\276\320\272\321\203\320\277\320\272\320\260\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receiptform: public Ui_receiptform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTFORM_H

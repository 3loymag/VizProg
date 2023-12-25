/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QCheckBox *userCheckBox;
    QCheckBox *adminCheckBox;
    QLineEdit *usernameLabel;
    QLineEdit *passwordLabel;
    QPushButton *loginButton;
    QLabel *login;
    QLabel *pass;
    QLabel *label;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(461, 245);
        userCheckBox = new QCheckBox(LoginForm);
        userCheckBox->setObjectName(QString::fromUtf8("userCheckBox"));
        userCheckBox->setGeometry(QRect(100, 60, 141, 21));
        adminCheckBox = new QCheckBox(LoginForm);
        adminCheckBox->setObjectName(QString::fromUtf8("adminCheckBox"));
        adminCheckBox->setGeometry(QRect(260, 60, 151, 21));
        usernameLabel = new QLineEdit(LoginForm);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(30, 120, 400, 21));
        passwordLabel = new QLineEdit(LoginForm);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(30, 160, 400, 21));
        loginButton = new QPushButton(LoginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(180, 200, 75, 23));
        login = new QLabel(LoginForm);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(30, 100, 47, 13));
        pass = new QLabel(LoginForm);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(30, 140, 47, 21));
        label = new QLabel(LoginForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 331, 31));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
        userCheckBox->setText(QApplication::translate("LoginForm", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        adminCheckBox->setText(QApplication::translate("LoginForm", "\320\220\320\264\320\274\320\270\320\275", nullptr));
        loginButton->setText(QApplication::translate("LoginForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        login->setText(QApplication::translate("LoginForm", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pass->setText(QApplication::translate("LoginForm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QApplication::translate("LoginForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\262\320\276\320\270 \320\277\321\200\320\260\320\262\320\260 \320\262 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H

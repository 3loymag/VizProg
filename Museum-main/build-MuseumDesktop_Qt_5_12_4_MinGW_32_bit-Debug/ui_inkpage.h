/********************************************************************************
** Form generated from reading UI file 'inkpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INKPAGE_H
#define UI_INKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InkPage
{
public:
    QPushButton *cartButton;
    QLabel *printerfon;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *printerfon2;

    void setupUi(QWidget *InkPage)
    {
        if (InkPage->objectName().isEmpty())
            InkPage->setObjectName(QString::fromUtf8("InkPage"));
        InkPage->resize(698, 550);
        cartButton = new QPushButton(InkPage);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setGeometry(QRect(560, 20, 101, 28));
        printerfon = new QLabel(InkPage);
        printerfon->setObjectName(QString::fromUtf8("printerfon"));
        printerfon->setGeometry(QRect(-20, 0, 721, 71));
        verticalLayoutWidget = new QWidget(InkPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 80, 641, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        printerfon2 = new QLabel(InkPage);
        printerfon2->setObjectName(QString::fromUtf8("printerfon2"));
        printerfon2->setGeometry(QRect(-10, 460, 721, 101));
        printerfon->raise();
        cartButton->raise();
        verticalLayoutWidget->raise();
        printerfon2->raise();

        retranslateUi(InkPage);

        QMetaObject::connectSlotsByName(InkPage);
    } // setupUi

    void retranslateUi(QWidget *InkPage)
    {
        InkPage->setWindowTitle(QApplication::translate("InkPage", "\320\247\320\265\321\200\320\275\320\270\320\273\320\260", nullptr));
        cartButton->setText(QApplication::translate("InkPage", "\320\234\320\276\320\270 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        printerfon->setText(QString());
        printerfon2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InkPage: public Ui_InkPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INKPAGE_H

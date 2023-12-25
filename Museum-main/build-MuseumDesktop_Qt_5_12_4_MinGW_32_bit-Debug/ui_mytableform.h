/********************************************************************************
** Form generated from reading UI file 'mytableform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTABLEFORM_H
#define UI_MYTABLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTableForm
{
public:
    QTableView *tableView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttonss;
    QPushButton *closeButton2;
    QPushButton *saveButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QLabel *labeltable;
    QLineEdit *searchLineEdit;

    void setupUi(QWidget *MyTableForm)
    {
        if (MyTableForm->objectName().isEmpty())
            MyTableForm->setObjectName(QString::fromUtf8("MyTableForm"));
        MyTableForm->resize(698, 550);
        tableView = new QTableView(MyTableForm);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 40, 671, 411));
        horizontalLayoutWidget = new QWidget(MyTableForm);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-30, 450, 772, 61));
        buttonss = new QHBoxLayout(horizontalLayoutWidget);
        buttonss->setSpacing(14);
        buttonss->setObjectName(QString::fromUtf8("buttonss"));
        buttonss->setContentsMargins(150, 0, 150, 0);
        closeButton2 = new QPushButton(horizontalLayoutWidget);
        closeButton2->setObjectName(QString::fromUtf8("closeButton2"));

        buttonss->addWidget(closeButton2);

        saveButton = new QPushButton(horizontalLayoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        buttonss->addWidget(saveButton);

        addButton = new QPushButton(horizontalLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        buttonss->addWidget(addButton);

        deleteButton = new QPushButton(horizontalLayoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        buttonss->addWidget(deleteButton);

        labeltable = new QLabel(MyTableForm);
        labeltable->setObjectName(QString::fromUtf8("labeltable"));
        labeltable->setGeometry(QRect(0, 1, 698, 550));
        searchLineEdit = new QLineEdit(MyTableForm);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(40, 10, 611, 21));
        labeltable->raise();
        tableView->raise();
        horizontalLayoutWidget->raise();
        searchLineEdit->raise();

        retranslateUi(MyTableForm);

        QMetaObject::connectSlotsByName(MyTableForm);
    } // setupUi

    void retranslateUi(QWidget *MyTableForm)
    {
        MyTableForm->setWindowTitle(QApplication::translate("MyTableForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        closeButton2->setText(QApplication::translate("MyTableForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        saveButton->setText(QApplication::translate("MyTableForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        addButton->setText(QApplication::translate("MyTableForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QApplication::translate("MyTableForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        labeltable->setText(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("MyTableForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216 \321\202\320\276\320\262\320\260\321\200\320\260 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTableForm: public Ui_MyTableForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTABLEFORM_H

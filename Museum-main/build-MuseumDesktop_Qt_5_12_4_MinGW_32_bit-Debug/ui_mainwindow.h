/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QLabel *NameShop;
    QPushButton *cartButton;
    QLabel *back;
    QPushButton *vkButton;
    QPushButton *ytButton;
    QPushButton *tgButton;
    QLabel *contakt;
    QLabel *contakt2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *printerButton;
    QPushButton *cartridgeButton;
    QPushButton *inkButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(698, 550);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../free-icon-palette-227035.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        NameShop = new QLabel(centralWidget);
        NameShop->setObjectName(QString::fromUtf8("NameShop"));
        NameShop->setGeometry(QRect(30, 20, 521, 41));
        cartButton = new QPushButton(centralWidget);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setGeometry(QRect(560, 20, 101, 28));
        back = new QLabel(centralWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(-10, 80, 711, 341));
        vkButton = new QPushButton(centralWidget);
        vkButton->setObjectName(QString::fromUtf8("vkButton"));
        vkButton->setGeometry(QRect(30, 452, 39, 39));
        ytButton = new QPushButton(centralWidget);
        ytButton->setObjectName(QString::fromUtf8("ytButton"));
        ytButton->setGeometry(QRect(100, 457, 41, 33));
        tgButton = new QPushButton(centralWidget);
        tgButton->setObjectName(QString::fromUtf8("tgButton"));
        tgButton->setGeometry(QRect(170, 452, 41, 41));
        contakt = new QLabel(centralWidget);
        contakt->setObjectName(QString::fromUtf8("contakt"));
        contakt->setGeometry(QRect(270, 430, 111, 51));
        contakt2 = new QLabel(centralWidget);
        contakt2->setObjectName(QString::fromUtf8("contakt2"));
        contakt2->setGeometry(QRect(390, 438, 301, 61));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 90, 621, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 310, 621, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        printerButton = new QPushButton(horizontalLayoutWidget);
        printerButton->setObjectName(QString::fromUtf8("printerButton"));

        horizontalLayout->addWidget(printerButton);

        cartridgeButton = new QPushButton(horizontalLayoutWidget);
        cartridgeButton->setObjectName(QString::fromUtf8("cartridgeButton"));
        cartridgeButton->setMouseTracking(false);
        cartridgeButton->setAutoRepeat(false);

        horizontalLayout->addWidget(cartridgeButton);

        inkButton = new QPushButton(horizontalLayoutWidget);
        inkButton->setObjectName(QString::fromUtf8("inkButton"));

        horizontalLayout->addWidget(inkButton);

        MainWindow->setCentralWidget(centralWidget);
        back->raise();
        NameShop->raise();
        cartButton->raise();
        vkButton->raise();
        ytButton->raise();
        tgButton->raise();
        contakt->raise();
        contakt2->raise();
        verticalLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 21));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy);
        menuBar->setDefaultUp(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(1300, 125, 183, 94));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy1);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_2->setGeometry(QRect(420, 116, 183, 50));
        sizePolicy1.setHeightForWidth(menu_2->sizePolicy().hasHeightForWidth());
        menu_2->setSizePolicy(sizePolicy1);
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        sizePolicy1.setHeightForWidth(menu_3->sizePolicy().hasHeightForWidth());
        menu_3->setSizePolicy(sizePolicy1);
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        sizePolicy1.setHeightForWidth(menu_4->sizePolicy().hasHeightForWidth());
        menu_4->setSizePolicy(sizePolicy1);
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::RightToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(MainWindow);
        QObject::connect(action_3, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\203\321\202\320\265\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214 \320\277\320\276 \320\274\321\203\320\267\320\265\321\217\320\274", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\276\320\262\320\260\321\200\321\213", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        NameShop->setText(QApplication::translate("MainWindow", "\320\236\320\275\320\273\320\260\320\271\320\275 \320\277\321\203\321\202\320\265\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214 \320\277\320\276 \320\274\321\203\320\267\320\265\321\217\320\274 \320\235\320\276\320\262\320\276\321\201\320\270\320\261\320\270\321\200\321\201\320\272\320\276\320\271 \320\276\320\261\320\273\320\260\321\201\321\202\320\270", nullptr));
        cartButton->setText(QApplication::translate("MainWindow", " \320\234\320\276\320\270 \320\261\320\270\320\273\320\265\321\202\321\213", nullptr));
        back->setText(QString());
        vkButton->setText(QString());
        ytButton->setText(QString());
        tgButton->setText(QString());
        contakt->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\321\213", nullptr));
        contakt2->setText(QApplication::translate("MainWindow", "+7 800 555 35 35      \320\237\320\275-\320\222\321\201, \321\201 9.00 \320\264\320\276 21:00\n"
"\n"
" \320\235\320\276\320\262\320\276\321\201\320\270\320\261\320\270\321\200\321\201\320\272\320\260\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\321\214, \320\263. \320\235\320\276\320\262\320\276\321\201\320\270\320\261\320\270\321\200\321\201\320\272", nullptr));
        printerButton->setText(QApplication::translate("MainWindow", "\320\234\321\203\320\267\320\265\320\270 \320\235\320\276\320\262\320\276\321\201\320\270\320\261\320\270\321\200\321\201\320\272\320\260", nullptr));
        cartridgeButton->setText(QApplication::translate("MainWindow", "\320\234\321\203\320\267\320\265\320\270 \320\221\320\265\321\200\320\264\321\201\320\272\320\260", nullptr));
        inkButton->setText(QApplication::translate("MainWindow", "\320\234\321\203\320\267\320\265\320\270 \320\220\320\272\320\260\320\264\320\265\320\274\320\263\320\276\321\200\320\276\320\264\320\272\320\260", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\225\320\235\320\256", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\236 \320\235\320\220\320\241", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\236\320\221\320\240\320\220\320\242\320\235\320\220\320\257 \320\241\320\222\320\257\320\227\320\254", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\234\320\243\320\227\320\225\320\230", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "\320\241\320\237\320\240\320\220\320\222\320\232\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

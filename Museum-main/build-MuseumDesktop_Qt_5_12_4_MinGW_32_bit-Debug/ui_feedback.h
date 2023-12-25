/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_feedback
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_2;
    QPushButton *sendButton;

    void setupUi(QWidget *feedback)
    {
        if (feedback->objectName().isEmpty())
            feedback->setObjectName(QString::fromUtf8("feedback"));
        feedback->resize(454, 410);
        textEdit = new QTextEdit(feedback);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(-17, 0, 481, 41));
        textEdit->setAutoFillBackground(false);
        comboBox = new QComboBox(feedback);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 70, 411, 31));
        textEdit_4 = new QTextEdit(feedback);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(20, 110, 411, 131));
        textEdit_5 = new QTextEdit(feedback);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(20, 250, 411, 31));
        textEdit_2 = new QTextEdit(feedback);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 290, 411, 31));
        sendButton = new QPushButton(feedback);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(160, 340, 111, 31));

        retranslateUi(feedback);

        QMetaObject::connectSlotsByName(feedback);
    } // setupUi

    void retranslateUi(QWidget *feedback)
    {
        feedback->setWindowTitle(QApplication::translate("feedback", "\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \321\201\320\262\321\217\320\267\321\214", nullptr));
        textEdit->setHtml(QApplication::translate("feedback", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \321\201\320\262\321\217\320\267\321\214</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("feedback", "<html><head/><body><p>\320\242\320\265\320\274\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBox->setWhatsThis(QApplication::translate("feedback", "<html><head/><body><p>\320\242\320\265\320\274\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        comboBox->setCurrentText(QString());
#ifndef QT_NO_ACCESSIBILITY
        textEdit_4->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        textEdit_4->setPlaceholderText(QApplication::translate("feedback", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265*", nullptr));
        textEdit_5->setHtml(QApplication::translate("feedback", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        textEdit_5->setPlaceholderText(QApplication::translate("feedback", "Email \320\264\320\273\321\217 \320\276\321\202\320\262\320\265\321\202\320\260*", nullptr));
        textEdit_2->setPlaceholderText(QApplication::translate("feedback", "\320\230\320\274\321\217", nullptr));
        sendButton->setText(QApplication::translate("feedback", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class feedback: public Ui_feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H

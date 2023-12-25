#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>
#include <QTextBrowser>
#include <QPushButton>

namespace Ui {
class HelpDialog;
}

class HelpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelpDialog(QWidget *parent = nullptr);
    ~HelpDialog();

private slots:
    void goBack();
    void goForward();
    void goHome();

private:
    void loadPage(const QString &page);

    Ui::HelpDialog *ui;
    QTextBrowser *textBrowser;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QPushButton *houmyButton;

    QStringList pages = {
        "index.html",
        "index1.html",
        "index2.html",
        "index3.html",
        "index4.html",
        "index5.html",
        "index6.html"
    };

    int currentIndex;
};

#endif // HELPDIALOG_H

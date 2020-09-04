#include "logindialog.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent)
{
    usrLabel = new QLabel(this);
    usrLabel->move(70, 80);
    usrLabel->setText(tr("User Name: "));

    usrLineEdit = new QLineEdit(this);
    usrLineEdit->move(140, 80);
    usrLineEdit->setPlaceholderText(tr("Please input user name"));

    pwdLabel = new QLabel(this);
    pwdLabel->move(70, 130);
    pwdLabel->setText(tr("Password: "));

    pwdLineEdit = new QLineEdit(this);
    pwdLineEdit->move(140, 130);
    pwdLineEdit->setPlaceholderText(tr("Please input password"));
    pwdLineEdit->setEchoMode(QLineEdit::Password);

    loginBtn = new QPushButton(this);
    loginBtn->move(50, 200);
    loginBtn->setText(tr("Login"));

    exitBtn = new QPushButton(this);
    exitBtn->move(210, 200);
    exitBtn->setText(tr("Exit"));

    connect(loginBtn, &QPushButton::clicked, this, &LoginDialog::login);
    connect(exitBtn, &QPushButton::clicked, this, &LoginDialog::close);
}

LoginDialog::~LoginDialog()
{

}

void LoginDialog::login()
{
    if (usrLineEdit->text().trimmed() == tr("yafeilinux")
            && pwdLineEdit->text() == tr("123456"))
    {
        accept();
    }
    else
    {
        QMessageBox::warning(this, tr("Warning! "), tr("Invalid user name or password! "), QMessageBox::Yes);

        usrLineEdit->clear();
        pwdLineEdit->clear();
        usrLineEdit->setFocus();
    }
}

#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QThread>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_exitBtn_clicked()
{
    accept();
}

void LoginDialog::on_loginBtn_clicked()
{
    //msleep(5000);
    accept();

    return;
    if (ui->usrLineEdit->text().trimmed() == tr("yafeilinux")
            && ui->pwdLineEdit->text() == tr("123456"))
    {
        accept();
    }
    else
    {
        QMessageBox::warning(this, tr("Warning"), tr("Invalid user name or password!"), QMessageBox::Yes);

        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();

    }
}

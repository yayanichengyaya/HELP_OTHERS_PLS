#include "admin.h"
#include "ui_admin.h"
#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    this->page4=new CHECK_APPLI;
    ui->password->setEchoMode(QLineEdit::Password);
    this->page5=new prop;
    connect
  (
    ui->BT11,
    &QPushButton::clicked,[=]()
    {
        on_loginBtn_clicked();
    }
  );
    connect
  (
    ui->BT12,
    &QPushButton::clicked,[=]()
    {
        this->page5->show();
    }
  );
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_loginBtn_clicked()
{
    if(ui->password->text()==tr("12315"))
    {
       this->close();
       this->page4->show();
    }
    else
    {
        QMessageBox::warning( this, tr("Warning"), tr(" password error!"), QMessageBox::Yes);
    }
}


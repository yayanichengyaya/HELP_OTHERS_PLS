#include "user.h"
#include "ui_user.h"
#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include <QString>
#include <QFile>
#include<QTextStream>
#include<QDebug>
#include<QMessageBox>
using namespace std;

User::User(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    this->page3=new REGI;
    this->page6=new OPTION;
    connect
  (
    ui->BT22,
    &QPushButton::clicked,[=]()
    {
        this->page3->show();
    }
  );
    connect
  (
    ui->BT21,
    &QPushButton::clicked,[=]()
    {
           QString NA = ui->username->text();
           string name = NA.toStdString();

           string line;
           ifstream file1;
           file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/USER.txt");
           bool find = false;
           while (getline(file1, line))
           {
               if (line == name)
               {
                   find = true;
                   this->page6->show();
               }
             }
           if (!find)
              {
                 QMessageBox::warning( this, tr("HELLO"), tr(" 请先注册账号或者检查拼写!"), QMessageBox::Yes);
                  file1.close();//关闭流
              }
              else
              {
                  file1.close();
              }
    }
  );
}

User::~User()
{
    delete ui;
}

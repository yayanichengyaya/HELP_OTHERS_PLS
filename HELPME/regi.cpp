#include "regi.h"
#include "ui_regi.h"
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include <QString>
#include <QFile>
#include<QTextStream>
#include<QDebug>
using namespace std;

REGI::REGI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::REGI)
{
    ui->setupUi(this);
    connect
  (
    ui->BT31,
    &QPushButton::clicked,[=]()
    {
         Appli();
         ui->NAME->clear();
         ui->ADRESS->clear();
         ui->NUMBER->clear();
         ui->ID->clear();
    }
  );
}

REGI::~REGI()
{
    delete ui;
}

void REGI::Appli()
{
//存入申请用户信息
//第一种方法
               string AD;
               string name;
               string number;
               string ID;
               ofstream file1;
               name = ui->NAME->text().toStdString();
               file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt", ios::app);
               file1 << name << "\t" ;
               number = ui->NUMBER->text().toStdString();
               file1 << number <<"\t";
               AD = ui->ADRESS->text().toStdString();
               file1 << AD <<"\t";
               ID = ui->ID->text().toStdString();
               file1 << ID <<"\t"<<"\n";
               file1.close();

               return;
}

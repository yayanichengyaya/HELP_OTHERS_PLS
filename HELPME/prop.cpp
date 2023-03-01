#include "prop.h"
#include "ui_prop.h"
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include <QString>
#include <QFile>
#include<QTextStream>
#include<QDebug>
using namespace  std;

prop::prop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::prop)
{
    ui->setupUi(this);
    connect
  (
    ui->BT,
    &QPushButton::clicked,[=]()
    {
        chang();
    }
  );

}

prop::~prop()
{
    delete ui;
}
void prop::chang()
{

               string V1;
               string V2;
               string V3;
               string PR1;
               string PR2;
               string PR3;
               ofstream file1;
               V1 = ui->D1->text().toStdString();
               file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/DIVID.txt", ios::out);
               file1 << V1 << "\t" ;
               V2 = ui->D2->text().toStdString();
               file1 << V2 <<"\t";
               V3 = ui->D3->text().toStdString();
               file1 << V3 <<"\t";
               file1.close();
               ofstream file2;
               file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/PROP.txt", ios::out);
               PR1 = ui->P1->text().toStdString();
               file2 << PR1 <<"\t";
               PR2 = ui->P2->text().toStdString();
               file2 << PR2 <<"\t";
               PR3 = ui->P3->text().toStdString();
               file2 << PR3 <<"\t";
               file2.close();
               return;
}

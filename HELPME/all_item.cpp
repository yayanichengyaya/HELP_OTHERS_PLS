#include "all_item.h"
#include "ui_all_item.h"
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

ALL_ITEM::ALL_ITEM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ALL_ITEM)
{
    ui->setupUi(this);
    ifstream file1;
    file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/DIVID.txt");
    string line;
    char* tmp;
    int len = 0;
    const char* split = "\t";//切割符号

    getline(file1, line);//读取一行

    tmp = new char[line.length()];
    while (len < line.length())
    {
        tmp[len] = line[len];
        len++;
    }//将string转换成char*
    char* next_token = NULL;
    char* name = strtok_s(tmp, split, &next_token);
    QString str1(name);

    ui->K1->setText(str1);
     name = strtok_s(NULL, split, &next_token);
    QString str2(name);
    ui->K2->setText(str2);
    name = strtok_s(NULL, split, &next_token);
    QString str3(name);
    ui->K3->setText(str3);
    delete[]tmp;
    file1.close();

    connect
  (
    ui->BT1,
    &QPushButton::clicked,[=]()
    {
        showall1();
    }
  );
    connect
  (
    ui->BT2,
    &QPushButton::clicked,[=]()
    {
        showall2();
    }
  );
    connect
  (
    ui->BT3,
    &QPushButton::clicked,[=]()
    {
        showall3();
    }
  );
}

ALL_ITEM::~ALL_ITEM()
{
    delete ui;
}
void ALL_ITEM::showall1()
{
   ifstream file1;
   fstream file2;
   file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K1.txt");
   file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt",ios::app);
   string line;
   char* tmp;
   int len = 0;
   const char* split = "\t";//切割符号
   while (getline(file1, line))
   {
       tmp = new char[line.length()];
       len = 0;
       while (len < line.length())
       {
           tmp[len] = line[len];
           len++;
       }//将string转换成char*
       char* next_token = NULL;
       char* list_item = strtok_s(tmp, split, &next_token);
      file2<<list_item<<"\t";

       delete[]tmp;
   }
    file1.close();
    file2.close();
    fstream in("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::in);
    istreambuf_iterator<char> beg(in), end;
    string strdata(beg, end);
    in.close();
    QString qstr2 = QString::fromStdString(strdata);
    ui->TB->setText(qstr2);
    fstream file("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::out);
}
void ALL_ITEM::showall2()
{
   ifstream file1;
   fstream file2;
   file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K2.txt");
   file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt",ios::app);
   string line;
   char* tmp;
   int len = 0;
   const char* split = "\t";//切割符号
   while (getline(file1, line))
   {
       tmp = new char[line.length()];
       len = 0;
       while (len < line.length())
       {
           tmp[len] = line[len];
           len++;
       }//将string转换成char*
       char* next_token = NULL;
       char* list_item = strtok_s(tmp, split, &next_token);
      file2<<list_item<<"\t";

       delete[]tmp;
   }
    file1.close();
    file2.close();
    fstream in("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::in);
    istreambuf_iterator<char> beg(in), end;
    string strdata(beg, end);
    in.close();
    QString qstr2 = QString::fromStdString(strdata);
    ui->TB->setText(qstr2);
    fstream file("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::out);
}
void ALL_ITEM::showall3()
{
   ifstream file1;
   fstream file2;
   file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K3.txt");
   file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt",ios::app);
   string line;
   char* tmp;
   int len = 0;
   const char* split = "\t";//切割符号
   while (getline(file1, line))
   {
       tmp = new char[line.length()];
       len = 0;
       while (len < line.length())
       {
           tmp[len] = line[len];
           len++;
       }//将string转换成char*
       char* next_token = NULL;
       char* list_item = strtok_s(tmp, split, &next_token);
      file2<<list_item<<"\t";

       delete[]tmp;
   }
    file1.close();
    file2.close();
    fstream in("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::in);
    istreambuf_iterator<char> beg(in), end;
    string strdata(beg, end);
    in.close();
    QString qstr2 = QString::fromStdString(strdata);
    ui->TB->setText(qstr2);
    fstream file("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_SEAR.txt", ios::out);
}

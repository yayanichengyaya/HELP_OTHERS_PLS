#include "search_item.h"
#include "ui_search_item.h"
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

SEARCH_ITEM::SEARCH_ITEM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SEARCH_ITEM)
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
       ui->B1,
    &QPushButton::clicked,[=]()
    {
        SEARCH_1();
    }
   );
    connect
  (
       ui->B2,
    &QPushButton::clicked,[=]()
    {
        SEARCH_2();
    }
   );
    connect
  (
       ui->B3,
    &QPushButton::clicked,[=]()
    {
        SEARCH_3();
    }
   );
    connect
  (
       ui->SURE,
    &QPushButton::clicked,[=]()
    {
        ui->P1->clear();
        ui->P2->clear();
        ui->P3->clear();
        ui->P4->clear();
        ui->P5->clear();
        ui->P6->clear();
        ui->name->clear();
    }
   );

}


SEARCH_ITEM::~SEARCH_ITEM()
{
    delete ui;
}


void SEARCH_ITEM::SEARCH_1()
{    ifstream file2;
    file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/PROP.txt");
    string line;
    char* tmp;
    int len = 0;
    const char* split = "\t";//切割符号

    getline(file2, line);//读取一行

    tmp = new char[line.length()];
    while (len < line.length())
    {
        tmp[len] = line[len];
        len++;
    }//将string转换成char*
    char* next_token = NULL;
    char* name = strtok_s(tmp, split, &next_token);
    QString str1(name);
    ui->P->setText(str1);
    delete[]tmp;
    file2.close();
//show the item's prop
       string goods;
       char* name_goods;
       QString NA;
       NA=ui->name->text();
       goods=NA.toStdString();
       ifstream file1;
       file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K1.txt");
       char* phone;
       bool find = false;
        len = 0;
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
           name_goods = strtok_s(tmp, split, &next_token);
           QString str1(name_goods);
           ui->P1->setText(str1);
           if (name_goods == goods)
           {
               find = true;
               phone = strtok_s(NULL, split, &next_token);
               QString str2(phone);
               ui->P2->setText(str2);
               phone = strtok_s(NULL, split, &next_token);
               QString str3(phone);
               ui->P3->setText(str3);
               phone = strtok_s(NULL, split, &next_token);
               QString str4(phone);
               ui->P4->setText(str4);
               phone = strtok_s(NULL, split, &next_token);
               QString str5(phone);
               ui->P5->setText(str5);
               phone = strtok_s(NULL, split, &next_token);
               QString str6(phone);
               ui->P6->setText(str6);
           }
           delete[]tmp;
        }
        if (!find)
         {
              QMessageBox::warning( this, tr("Warning"), tr(" 未找到物品"), QMessageBox::Yes);
             file1.close();//关闭流
         }
         else
         {
             file1.close();
         }
}
void SEARCH_ITEM::SEARCH_2()
{    ifstream file2;
    file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/PROP.txt");
    string line;
    char* tmp;
    int len = 0;
    const char* split = "\t";//切割符号

    getline(file2, line);//读取一行

    tmp = new char[line.length()];
    while (len < line.length())
    {
        tmp[len] = line[len];
        len++;
    }//将string转换成char*
    char* next_token = NULL;
    char* name = strtok_s(tmp, split, &next_token);
    name = strtok_s(NULL, split, &next_token);
    QString str1(name);
    ui->P->setText(str1);
    delete[]tmp;
    file2.close();
//show the item's prop
       string goods;
       char* name_goods;
       QString NA;
       NA=ui->name->text();
       goods=NA.toStdString();
       ifstream file1;
       file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K2.txt");
       char* phone;
       bool find = false;
        len = 0;
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
           name_goods = strtok_s(tmp, split, &next_token);
           QString str1(name_goods);
           ui->P1->setText(str1);
           if (name_goods == goods)
           {
               find = true;
               phone = strtok_s(NULL, split, &next_token);
               QString str2(phone);
               ui->P2->setText(str2);
               phone = strtok_s(NULL, split, &next_token);
               QString str3(phone);
               ui->P3->setText(str3);
               phone = strtok_s(NULL, split, &next_token);
               QString str4(phone);
               ui->P4->setText(str4);
               phone = strtok_s(NULL, split, &next_token);
               QString str5(phone);
               ui->P5->setText(str5);
               phone = strtok_s(NULL, split, &next_token);
               QString str6(phone);
               ui->P6->setText(str6);
           }
           delete[]tmp;
        }
        if (!find)
         {
              QMessageBox::warning( this, tr("Warning"), tr(" 未找到物品"), QMessageBox::Yes);
             file1.close();//关闭流
         }
         else
         {
             file1.close();
         }
}
void SEARCH_ITEM::SEARCH_3()
{    ifstream file2;
    file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/PROP.txt");
    string line;
    char* tmp;
    int len = 0;
    const char* split = "\t";//切割符号

    getline(file2, line);//读取一行

    tmp = new char[line.length()];
    while (len < line.length())
    {
        tmp[len] = line[len];
        len++;
    }//将string转换成char*
    char* next_token = NULL;
    char* name = strtok_s(tmp, split, &next_token);
      name = strtok_s(NULL, split, &next_token);
      name = strtok_s(NULL, split, &next_token);
    QString str1(name);
    ui->P->setText(str1);
    delete[]tmp;
    file2.close();
//show the item's prop
       string goods;
       char* name_goods;
       QString NA;
       NA=ui->name->text();
       goods=NA.toStdString();
       ifstream file1;
       file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K3.txt");
       char* phone;
       bool find = false;
        len = 0;
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
           name_goods = strtok_s(tmp, split, &next_token);
           QString str1(name_goods);
           ui->P1->setText(str1);
           if (name_goods == goods)
           {
               find = true;
               phone = strtok_s(NULL, split, &next_token);
               QString str2(phone);
               ui->P2->setText(str2);
               phone = strtok_s(NULL, split, &next_token);
               QString str3(phone);
               ui->P3->setText(str3);
               phone = strtok_s(NULL, split, &next_token);
               QString str4(phone);
               ui->P4->setText(str4);
               phone = strtok_s(NULL, split, &next_token);
               QString str5(phone);
               ui->P5->setText(str5);
               phone = strtok_s(NULL, split, &next_token);
               QString str6(phone);
               ui->P6->setText(str6);
           }
           delete[]tmp;
        }
        if (!find)
         {
              QMessageBox::warning( this, tr("Warning"), tr(" 未找到物品"), QMessageBox::Yes);
             file1.close();//关闭流
         }
         else
         {
             file1.close();
         }
}

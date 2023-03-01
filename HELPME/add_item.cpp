#include "add_item.h"
#include "ui_add_item.h"
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

ADD_ITEM::ADD_ITEM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ADD_ITEM)
{
    ui->setupUi(this);
    ifstream file1;
    file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/DIVID.txt");
    string line;
    char* tmp;
    int len = 0;
    const char* split = "\t";//切割符号
    getline(file1, line);//读取一行,只有一行
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
        ifstream file2;
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

    }
  );
    connect
  (
    ui->BT2,
    &QPushButton::clicked,[=]()
    {
        ifstream file2;
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

    }
  );
    connect
  (
    ui->BT3,
    &QPushButton::clicked,[=]()
    {
        ifstream file2;
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

    }
  );
    connect
  (
    ui->T1,
    &QPushButton::clicked,[=]()
    {
        fstream file2;
        file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K1.txt",ios::app);
        QString name;
        name=ui->P1->text();
        string NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P2->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P3->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P4->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P5->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P6->text();
         NA = name.toStdString();
        file2<<NA<<"\t"<<"\n";
        file2.close();
        ui->P1->clear();
        ui->P2->clear();
        ui->P3->clear();
        ui->P4->clear();
        ui->P5->clear();
        ui->P6->clear();

    }
  );
    connect
  (
    ui->T2,
    &QPushButton::clicked,[=]()
    {
        fstream file2;
        file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K2.txt",ios::app);
        QString name;
        name=ui->P1->text();
        string NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P2->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P3->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P4->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P5->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P6->text();
         NA = name.toStdString();
        file2<<NA<<"\t"<<"\n";
        file2.close();
        ui->P1->clear();
        ui->P2->clear();
        ui->P3->clear();
        ui->P4->clear();
        ui->P5->clear();
        ui->P6->clear();

    }
  );
    connect
  (
    ui->T3,
    &QPushButton::clicked,[=]()
    {
        fstream file2;
        file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K3.txt",ios::app);
        QString name;
        name=ui->P1->text();
        string NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P2->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P3->text();
        NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P4->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P5->text();
         NA = name.toStdString();
        file2<<NA<<"\t";
        name=ui->P6->text();
         NA = name.toStdString();
        file2<<NA<<"\t"<<"\n";
        file2.close();
        ui->P1->clear();
        ui->P2->clear();
        ui->P3->clear();
        ui->P4->clear();
        ui->P5->clear();
        ui->P6->clear();

    }
  );
}

ADD_ITEM::~ADD_ITEM()
{
    delete ui;
}

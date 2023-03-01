#include "del_item.h"
#include "ui_del_item.h"
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

DEL_ITEM::DEL_ITEM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DEL_ITEM)
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
            bool find = false;
            string del_item;
            string line;//读取每一行
            int len = 0;//转换标志
            char* tmp;//读取的每一行转换成char*
            char* name_tmp;//切割出物品名称
            const char* split = "\t";//切割符号
            //getline(cin, del_item);
            QString DEL;
            DEL = ui->ITEM->text();
            del_item=DEL.toStdString();
            ifstream file1;
            ofstream file2;
            file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K1.txt");
            file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/T1.txt", ios::out);
            if (!file1.is_open())
            {
                QMessageBox::warning( this, tr("Warning"), tr(" 文件打开失败"), QMessageBox::Yes);
                return;
            }
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
                name_tmp = strtok_s(tmp, split, &next_token);
                if (name_tmp == del_item)
                {
                    cout << endl << "已删除" << endl;
                    find = true;
                }
                else
                {
                    file2 << line << endl;
                }
                delete[]tmp;
            }

            if (!find)
            {
                QMessageBox::warning( this, tr("HELLO"), tr(" 未找到物品"), QMessageBox::Yes);
                file1.close();//关闭流
                file2.close();
            }
            else
            {
                file1.close();
                file2.close();
                fstream file1("items.txt", ios::out);
                fstream file2("tmp.txt", ios::in);
                while (getline(file2, line))//依次读取每一行
                {
                    file1 << line << "\n";//将file1重写
                }

                file1.close();//关闭流
                file2.close();
            }
    }
  );
    connect
  (
    ui->BT2,
    &QPushButton::clicked,[=]()
    {
        bool find = false;
        string del_item;
        string line;//读取每一行
        int len = 0;//转换标志
        char* tmp;//读取的每一行转换成char*
        char* name_tmp;//切割出物品名称
        const char* split = "\t";//切割符号
        //getline(cin, del_item);
        QString DEL;
        DEL = ui->ITEM->text();
        del_item=DEL.toStdString();
        ifstream file1;
        ofstream file2;
        file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K2.txt");
        file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/T2.txt", ios::out);
        if (!file1.is_open())
        {
            QMessageBox::warning( this, tr("Warning"), tr(" 文件打开失败"), QMessageBox::Yes);
            return;
        }
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
            name_tmp = strtok_s(tmp, split, &next_token);
            if (name_tmp == del_item)
            {
                cout << endl << "已删除" << endl;
                find = true;
            }
            else
            {
                file2 << line << endl;
            }
            delete[]tmp;
        }

        if (!find)
        {
            QMessageBox::warning( this, tr("HELLO"), tr(" 未找到物品"), QMessageBox::Yes);
            file1.close();//关闭流
            file2.close();
        }
        else
        {
            file1.close();
            file2.close();
            fstream file1("items.txt", ios::out);
            fstream file2("tmp.txt", ios::in);
            while (getline(file2, line))//依次读取每一行
            {
                file1 << line << "\n";//将file1重写
            }

            file1.close();//关闭流
            file2.close();
        }


    }
  );
    connect
  (
    ui->BT3,
    &QPushButton::clicked,[=]()
    {
        bool find = false;
        string del_item;
        string line;//读取每一行
        int len = 0;//转换标志
        char* tmp;//读取的每一行转换成char*
        char* name_tmp;//切割出物品名称
        const char* split = "\t";//切割符号
        //getline(cin, del_item);
        QString DEL;
        DEL = ui->ITEM->text();
        del_item=DEL.toStdString();
        ifstream file1;
        ofstream file2;
        file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/K3.txt");
        file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/T3.txt", ios::out);
        if (!file1.is_open())
        {
            //cout << "数据文件打开失败！ " << endl;
             QMessageBox::warning( this, tr("Warning"), tr(" 文件打开失败"), QMessageBox::Yes);
            return;
        }
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
            name_tmp = strtok_s(tmp, split, &next_token);
            if (name_tmp == del_item)
            {

                find = true;
            }
            else
            {
                file2 << line << endl;
            }
            delete[]tmp;
        }

        if (!find)
        {
            //cout << "未找到物品" << endl;
             QMessageBox::warning( this, tr("HELLO"), tr(" 未找到物品"), QMessageBox::Yes);
            file1.close();//关闭流
            file2.close();
        }
        else
        {
            file1.close();
            file2.close();
            fstream file1("items.txt", ios::out);
            fstream file2("tmp.txt", ios::in);
            while (getline(file2, line))//依次读取每一行
            {
                file1 << line << "\n";//将file1重写
            }

            file1.close();//关闭流
            file2.close();

        }

           ui->ITEM->clear();
    }
  );
}

DEL_ITEM::~DEL_ITEM()
{
    delete ui;
}

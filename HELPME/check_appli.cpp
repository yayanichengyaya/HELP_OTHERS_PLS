#include "check_appli.h"
#include "ui_check_appli.h"
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

CHECK_APPLI::CHECK_APPLI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CHECK_APPLI)
{
    ui->setupUi(this);
    show_appli();
    connect
  (
    ui->PASS,
    &QPushButton::clicked,[=]()
    {
        PASS_APPLI();
        ui->TB_NAME->clear();
        ui->TB_AD->clear();
        ui->TB_NUMBER->clear();
        //判断是否为空
            ifstream ifs;
            ifs.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt", ios::in);
            char c;
            ifs >> c;
            if (ifs.eof())
            {
               QMessageBox::warning( this, tr("HELLO"), tr(" It's empty!"), QMessageBox::Yes);
               ifs.close();
                 return;
             }
            ifs.close();
        show_appli();
    }
  );
    connect
    (
       ui->DENY,
       &QPushButton::clicked,[=]()
       {
            DENY_APPLI();
            ui->TB_NAME->clear();
            ui->TB_AD->clear();
            ui->TB_NUMBER->clear();
            //判断是否为空
            ifstream ifs;
            ifs.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt", ios::in);
            char c;
            ifs >> c;
            if (ifs.eof())
            {
               QMessageBox::warning( this, tr("HELLO"), tr(" It's empty!"), QMessageBox::Yes);
               ifs.close();
                 return;
             }
            ifs.close();
            show_appli();
         }



     );
}

CHECK_APPLI::~CHECK_APPLI()
{
    delete ui;
}

void CHECK_APPLI::show_appli()
{

          //显示信息
            ifstream file1;
            file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt");

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

            ui->TB_NAME->setText(str1);
             name = strtok_s(NULL, split, &next_token);
            QString str2(name);
            ui->TB_NUMBER->setText(str2);
            name = strtok_s(NULL, split, &next_token);
            QString str3(name);
            ui->TB_AD->setText(str3);
            delete[]tmp;

        file1.close();

}
void CHECK_APPLI::PASS_APPLI()
{
    ifstream file1;
    ofstream file2;
    file1.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt");
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
    name = strtok_s(NULL, split, &next_token);
    name = strtok_s(NULL, split, &next_token);
    name = strtok_s(NULL, split, &next_token);
    string NAME;
    NAME=name;
    file2.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/USER.txt",ios::app);
    file2 << NAME << "\n" ;
    file2.close();
    delete[]tmp;
    file1.close();
    //删除候选名单的这一行
        ifstream file3;
        ofstream file4;
        file3.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt");
        file4.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_USER.txt", ios::out);
        if (!file3.is_open())
        {
            cout << "数据文件打开失败！ " << endl;
            return;
        }
        getline(file3,line);
        while (getline(file3, line))
        {

                file4 << line << endl;

         }
            file3.close();
            file4.close();
         fstream file5("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt", ios::out);
         fstream file6("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_USER.txt", ios::in);
         while (getline(file6, line))//依次读取TMP_USER每一行
         {
            file5 << line << "\n";//将APPLICANT.TXT重写
         }

            file5.close();//关闭流
            file6.close();
}

void CHECK_APPLI::DENY_APPLI()
{
    string line;
    ifstream file3;
    ofstream file4;
    file3.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt");
    file4.open("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_USER.txt", ios::out);
    if (!file3.is_open())
    {
        cout << "数据文件打开失败！ " << endl;
        return;
    }
    getline(file3,line);
    while (getline(file3, line))
    {

            file4 << line << endl;

     }
        file3.close();
        file4.close();
     fstream file5("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/APPLICANT.txt", ios::out);
     fstream file6("D:/PROGRAM-CPP/HELPME_GUI_QT/HELPME/TMP_USER.txt", ios::in);
     while (getline(file6, line))//依次读取TMP_USER每一行
     {
        file5 << line << "\n";//将APPLICANT.TXT重写
     }

        file5.close();//关闭流
        file6.close();
}

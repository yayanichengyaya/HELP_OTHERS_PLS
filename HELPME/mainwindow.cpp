#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "user.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->page1=new Admin;//实例化页面二的类
    this->page2=new User;//实例化页面二的类
   //关联BT1和管理员界面的槽
    connect
  (
    ui->BT1,
    &QPushButton::clicked,[=]()
    {
        this->page1->show();
    }
  );
    //关联BT2和用户界面的槽
    connect
  (
    ui->BT2,
    &QPushButton::clicked,[=]()
    {
        this->page2->show();
    }
  );
}

MainWindow::~MainWindow()
{
    delete ui;
}


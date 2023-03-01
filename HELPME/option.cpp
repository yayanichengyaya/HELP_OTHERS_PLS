#include "option.h"
#include "ui_option.h"

OPTION::OPTION(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OPTION)
{
    ui->setupUi(this);
    this->page7=new ADD_ITEM;
    this->page8=new DEL_ITEM;
    this->page9=new ALL_ITEM;
    this->page10=new SEARCH_ITEM;
    connect
  (
    ui->T1,
    &QPushButton::clicked,[=]()
    {
        this->page7->show();
    }
  );
    connect
  (
    ui->T2,
    &QPushButton::clicked,[=]()
    {
        this->page8->show();
    }
  );
    connect
  (
    ui->T3,
    &QPushButton::clicked,[=]()
    {
        this->page9->show();
    }
  );
    connect
  (
    ui->T4,
    &QPushButton::clicked,[=]()
    {
        this->page10->show();
    }
  );
}

OPTION::~OPTION()
{
    delete ui;
}

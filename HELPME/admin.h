#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "check_appli.h"
#include "prop.h"
namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
    CHECK_APPLI *page4=NULL;
    prop *page5=NULL;

private slots:
  void on_loginBtn_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H

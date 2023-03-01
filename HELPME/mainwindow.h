#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"//页面二对应的管理员类的头文件
#include "user.h"//页面二对应的用户类的头文件

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Admin *page1=NULL;//用来保存页面二的管理员实例化对象地址
    User *page2=NULL;//用来保存页面二的用户实例化对象地址

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H

#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include "regi.h"
#include "option.h"
namespace Ui {
class User;
}

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();
    REGI *page3=NULL;
    OPTION *page6=NULL;
private:
    Ui::User *ui;
};

#endif // USER_H

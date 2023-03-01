#ifndef ADD_ITEM_H
#define ADD_ITEM_H

#include <QMainWindow>

namespace Ui {
class ADD_ITEM;
}

class ADD_ITEM : public QMainWindow
{
    Q_OBJECT

public:
    explicit ADD_ITEM(QWidget *parent = nullptr);
    ~ADD_ITEM();

private:
    Ui::ADD_ITEM *ui;
};

#endif // ADD_ITEM_H

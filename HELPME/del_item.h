#ifndef DEL_ITEM_H
#define DEL_ITEM_H

#include <QMainWindow>

namespace Ui {
class DEL_ITEM;
}

class DEL_ITEM : public QMainWindow
{
    Q_OBJECT

public:
    explicit DEL_ITEM(QWidget *parent = nullptr);
    ~DEL_ITEM();

private:
    Ui::DEL_ITEM *ui;
};

#endif // DEL_ITEM_H

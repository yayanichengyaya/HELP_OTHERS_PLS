#ifndef ALL_ITEM_H
#define ALL_ITEM_H

#include <QMainWindow>

namespace Ui {
class ALL_ITEM;
}

class ALL_ITEM : public QMainWindow
{
    Q_OBJECT

public:
    explicit ALL_ITEM(QWidget *parent = nullptr);
    ~ALL_ITEM();
    void showall1();
    void showall2();
    void showall3();
private:
    Ui::ALL_ITEM *ui;
};

#endif // ALL_ITEM_H

#ifndef SEARCH_ITEM_H
#define SEARCH_ITEM_H

#include <QMainWindow>

namespace Ui {
class SEARCH_ITEM;
}

class SEARCH_ITEM : public QMainWindow
{
    Q_OBJECT

public:
    explicit SEARCH_ITEM(QWidget *parent = nullptr);
    ~SEARCH_ITEM();
void SEARCH_1();
void SEARCH_2();
void SEARCH_3();
private:
    Ui::SEARCH_ITEM *ui;
};

#endif // SEARCH_ITEM_H

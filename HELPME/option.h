#ifndef OPTION_H
#define OPTION_H

#include <QMainWindow>
#include "add_item.h"
#include "all_item.h"
#include "del_item.h"
#include "search_item.h"

namespace Ui {
class OPTION;
}

class OPTION : public QMainWindow
{
    Q_OBJECT

public:
    explicit OPTION(QWidget *parent = nullptr);
    ~OPTION();
    ADD_ITEM *page7=NULL;
    DEL_ITEM *page8=NULL;
    ALL_ITEM *page9=NULL;
    SEARCH_ITEM *page10=NULL;
private:
    Ui::OPTION *ui;
};

#endif // OPTION_H

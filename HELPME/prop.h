#ifndef PROP_H
#define PROP_H

#include <QMainWindow>

namespace Ui {
class prop;
}

class prop : public QMainWindow
{
    Q_OBJECT

public:
    explicit prop(QWidget *parent = nullptr);
    ~prop();
    void chang();

private:
    Ui::prop *ui;
};

#endif // PROP_H

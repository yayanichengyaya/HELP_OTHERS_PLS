#ifndef CHECK_APPLI_H
#define CHECK_APPLI_H

#include <QMainWindow>

namespace Ui {
class CHECK_APPLI;
}

class CHECK_APPLI : public QMainWindow
{
    Q_OBJECT

public:
    explicit CHECK_APPLI(QWidget *parent = nullptr);
    ~CHECK_APPLI();
    void show_appli();
    void PASS_APPLI();
    void DENY_APPLI();
private:
    Ui::CHECK_APPLI *ui;
};

#endif // CHECK_APPLI_H

#ifndef REGI_H
#define REGI_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class REGI;
}

class REGI : public QMainWindow
{
    Q_OBJECT

public:
    explicit REGI(QWidget *parent = nullptr);
    ~REGI();
    void Appli();

private:
    Ui::REGI *ui;
};

#endif // REGI_H

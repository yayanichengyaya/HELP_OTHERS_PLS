/********************************************************************************
** Form generated from reading UI file 'prop.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROP_H
#define UI_PROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prop
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *D1;
    QLabel *label_2;
    QLineEdit *D2;
    QLabel *label_3;
    QLineEdit *D3;
    QLabel *label_4;
    QLineEdit *P1;
    QLabel *label_5;
    QLineEdit *P2;
    QLabel *label_6;
    QLineEdit *P3;
    QPushButton *BT;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *prop)
    {
        if (prop->objectName().isEmpty())
            prop->setObjectName(QString::fromUtf8("prop"));
        prop->resize(800, 600);
        centralwidget = new QWidget(prop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 101, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        D1 = new QLineEdit(centralwidget);
        D1->setObjectName(QString::fromUtf8("D1"));
        D1->setGeometry(QRect(210, 60, 151, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 130, 101, 51));
        label_2->setFont(font);
        D2 = new QLineEdit(centralwidget);
        D2->setObjectName(QString::fromUtf8("D2"));
        D2->setGeometry(QRect(210, 140, 151, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 210, 101, 51));
        label_3->setFont(font);
        D3 = new QLineEdit(centralwidget);
        D3->setObjectName(QString::fromUtf8("D3"));
        D3->setGeometry(QRect(210, 220, 151, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 50, 101, 51));
        label_4->setFont(font);
        P1 = new QLineEdit(centralwidget);
        P1->setObjectName(QString::fromUtf8("P1"));
        P1->setGeometry(QRect(510, 60, 151, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 130, 101, 51));
        label_5->setFont(font);
        P2 = new QLineEdit(centralwidget);
        P2->setObjectName(QString::fromUtf8("P2"));
        P2->setGeometry(QRect(510, 140, 151, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 210, 101, 51));
        label_6->setFont(font);
        P3 = new QLineEdit(centralwidget);
        P3->setObjectName(QString::fromUtf8("P3"));
        P3->setGeometry(QRect(510, 220, 151, 41));
        BT = new QPushButton(centralwidget);
        BT->setObjectName(QString::fromUtf8("BT"));
        BT->setGeometry(QRect(270, 320, 241, 61));
        BT->setFont(font);
        prop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(prop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        prop->setMenuBar(menubar);
        statusbar = new QStatusBar(prop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        prop->setStatusBar(statusbar);

        retranslateUi(prop);

        QMetaObject::connectSlotsByName(prop);
    } // setupUi

    void retranslateUi(QMainWindow *prop)
    {
        prop->setWindowTitle(QCoreApplication::translate("prop", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("prop", "\347\261\273\345\210\2531", nullptr));
        label_2->setText(QCoreApplication::translate("prop", "\347\261\273\345\210\2532", nullptr));
        label_3->setText(QCoreApplication::translate("prop", "\347\261\273\345\210\2533", nullptr));
        label_4->setText(QCoreApplication::translate("prop", "\345\261\236\346\200\2471", nullptr));
        P1->setText(QString());
        label_5->setText(QCoreApplication::translate("prop", "\345\261\236\346\200\2472", nullptr));
        P2->setText(QString());
        label_6->setText(QCoreApplication::translate("prop", "\345\261\236\346\200\2473", nullptr));
        P3->setText(QString());
        BT->setText(QCoreApplication::translate("prop", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prop: public Ui_prop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROP_H

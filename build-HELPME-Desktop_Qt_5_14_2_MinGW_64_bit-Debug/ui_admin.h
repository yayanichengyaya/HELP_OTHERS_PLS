/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLineEdit *password;
    QLabel *label;
    QPushButton *BT11;
    QPushButton *BT12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(800, 600);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 150, 391, 51));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(360, 230, 221, 51));
        password->setEchoMode(QLineEdit::Normal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 220, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        BT11 = new QPushButton(centralwidget);
        BT11->setObjectName(QString::fromUtf8("BT11"));
        BT11->setGeometry(QRect(190, 300, 171, 51));
        BT11->setFont(font);
        BT12 = new QPushButton(centralwidget);
        BT12->setObjectName(QString::fromUtf8("BT12"));
        BT12->setGeometry(QRect(400, 300, 181, 51));
        BT12->setFont(font);
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201\357\274\232", nullptr));
        BT11->setText(QCoreApplication::translate("Admin", "\347\231\273\345\275\225\345\256\241\346\240\270", nullptr));
        BT12->setText(QCoreApplication::translate("Admin", "\347\231\273\345\275\225\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_User
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLineEdit *username;
    QPushButton *BT21;
    QPushButton *BT22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(800, 600);
        centralwidget = new QWidget(User);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(140, 110, 441, 81));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 250, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(300, 250, 231, 31));
        BT21 = new QPushButton(centralwidget);
        BT21->setObjectName(QString::fromUtf8("BT21"));
        BT21->setGeometry(QRect(140, 340, 181, 71));
        BT21->setFont(font);
        BT22 = new QPushButton(centralwidget);
        BT22->setObjectName(QString::fromUtf8("BT22"));
        BT22->setGeometry(QRect(410, 340, 161, 71));
        BT22->setFont(font);
        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        User->setStatusBar(statusbar);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("User", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:7.2pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\342\200\234\344\275\240\345\270\256\346\210\221\345\212\251\342\200\235\347\263\273\347\273\237</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267\345\222\214\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("User", "\347\224\250\346\210\267\345\220\215", nullptr));
        BT21->setText(QCoreApplication::translate("User", "\347\231\273\345\275\225", nullptr));
        BT22->setText(QCoreApplication::translate("User", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

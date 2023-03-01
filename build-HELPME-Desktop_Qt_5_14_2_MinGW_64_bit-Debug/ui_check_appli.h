/********************************************************************************
** Form generated from reading UI file 'check_appli.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_APPLI_H
#define UI_CHECK_APPLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CHECK_APPLI
{
public:
    QWidget *centralwidget;
    QTextBrowser *TB_NAME;
    QTextBrowser *TB_NUMBER;
    QTextBrowser *TB_AD;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *PASS;
    QPushButton *DENY;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CHECK_APPLI)
    {
        if (CHECK_APPLI->objectName().isEmpty())
            CHECK_APPLI->setObjectName(QString::fromUtf8("CHECK_APPLI"));
        CHECK_APPLI->resize(800, 600);
        centralwidget = new QWidget(CHECK_APPLI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TB_NAME = new QTextBrowser(centralwidget);
        TB_NAME->setObjectName(QString::fromUtf8("TB_NAME"));
        TB_NAME->setGeometry(QRect(270, 170, 371, 51));
        TB_NUMBER = new QTextBrowser(centralwidget);
        TB_NUMBER->setObjectName(QString::fromUtf8("TB_NUMBER"));
        TB_NUMBER->setGeometry(QRect(270, 260, 371, 51));
        TB_AD = new QTextBrowser(centralwidget);
        TB_AD->setObjectName(QString::fromUtf8("TB_AD"));
        TB_AD->setGeometry(QRect(270, 360, 371, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 170, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 270, 131, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 360, 141, 41));
        label_3->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(150, 70, 491, 51));
        PASS = new QPushButton(centralwidget);
        PASS->setObjectName(QString::fromUtf8("PASS"));
        PASS->setGeometry(QRect(120, 440, 181, 71));
        PASS->setFont(font);
        DENY = new QPushButton(centralwidget);
        DENY->setObjectName(QString::fromUtf8("DENY"));
        DENY->setGeometry(QRect(460, 440, 201, 71));
        DENY->setFont(font);
        CHECK_APPLI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CHECK_APPLI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CHECK_APPLI->setMenuBar(menubar);
        statusbar = new QStatusBar(CHECK_APPLI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CHECK_APPLI->setStatusBar(statusbar);

        retranslateUi(CHECK_APPLI);

        QMetaObject::connectSlotsByName(CHECK_APPLI);
    } // setupUi

    void retranslateUi(QMainWindow *CHECK_APPLI)
    {
        CHECK_APPLI->setWindowTitle(QCoreApplication::translate("CHECK_APPLI", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CHECK_APPLI", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("CHECK_APPLI", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_3->setText(QCoreApplication::translate("CHECK_APPLI", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CHECK_APPLI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:7.2pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\345\256\241\346\240\270\344\273\245\344\270\213\347\224\263\350\257\267\347\224\250\346\210\267</span></p></body></html>", nullptr));
        PASS->setText(QCoreApplication::translate("CHECK_APPLI", "\351\200\232\350\277\207", nullptr));
        DENY->setText(QCoreApplication::translate("CHECK_APPLI", "\344\270\215\351\200\232\350\277\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CHECK_APPLI: public Ui_CHECK_APPLI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_APPLI_H

/********************************************************************************
** Form generated from reading UI file 'search_item.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_ITEM_H
#define UI_SEARCH_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SEARCH_ITEM
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *K1;
    QTextBrowser *K2;
    QTextBrowser *K3;
    QLineEdit *name;
    QTextBrowser *textBrowser_6;
    QLabel *label;
    QPushButton *B1;
    QPushButton *B2;
    QPushButton *B3;
    QLineEdit *P3;
    QLineEdit *P2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *P1;
    QLineEdit *P6;
    QTextBrowser *P;
    QLabel *label_3;
    QLineEdit *P4;
    QLineEdit *P5;
    QLabel *label_6;
    QPushButton *SURE;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SEARCH_ITEM)
    {
        if (SEARCH_ITEM->objectName().isEmpty())
            SEARCH_ITEM->setObjectName(QString::fromUtf8("SEARCH_ITEM"));
        SEARCH_ITEM->resize(872, 635);
        centralwidget = new QWidget(SEARCH_ITEM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(160, 130, 431, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 200, 701, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        K1 = new QTextBrowser(layoutWidget);
        K1->setObjectName(QString::fromUtf8("K1"));

        horizontalLayout_2->addWidget(K1);

        K2 = new QTextBrowser(layoutWidget);
        K2->setObjectName(QString::fromUtf8("K2"));

        horizontalLayout_2->addWidget(K2);

        K3 = new QTextBrowser(layoutWidget);
        K3->setObjectName(QString::fromUtf8("K3"));

        horizontalLayout_2->addWidget(K3);

        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(300, 70, 311, 51));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(160, 10, 441, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 70, 161, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        B1 = new QPushButton(centralwidget);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setGeometry(QRect(70, 270, 171, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(16);
        B1->setFont(font1);
        B2 = new QPushButton(centralwidget);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setGeometry(QRect(300, 270, 171, 61));
        B2->setFont(font1);
        B3 = new QPushButton(centralwidget);
        B3->setObjectName(QString::fromUtf8("B3"));
        B3->setGeometry(QRect(540, 270, 171, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        B3->setFont(font2);
        P3 = new QLineEdit(centralwidget);
        P3->setObjectName(QString::fromUtf8("P3"));
        P3->setGeometry(QRect(160, 460, 221, 41));
        P2 = new QLineEdit(centralwidget);
        P2->setObjectName(QString::fromUtf8("P2"));
        P2->setGeometry(QRect(160, 400, 221, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 410, 101, 21));
        label_2->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 350, 101, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 410, 101, 21));
        label_5->setFont(font2);
        P1 = new QLineEdit(centralwidget);
        P1->setObjectName(QString::fromUtf8("P1"));
        P1->setGeometry(QRect(160, 340, 221, 41));
        P6 = new QLineEdit(centralwidget);
        P6->setObjectName(QString::fromUtf8("P6"));
        P6->setGeometry(QRect(520, 460, 221, 41));
        P = new QTextBrowser(centralwidget);
        P->setObjectName(QString::fromUtf8("P"));
        P->setGeometry(QRect(410, 460, 101, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 350, 101, 21));
        label_3->setFont(font2);
        P4 = new QLineEdit(centralwidget);
        P4->setObjectName(QString::fromUtf8("P4"));
        P4->setGeometry(QRect(520, 340, 221, 41));
        P5 = new QLineEdit(centralwidget);
        P5->setObjectName(QString::fromUtf8("P5"));
        P5->setGeometry(QRect(520, 400, 221, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 470, 101, 21));
        label_6->setFont(font2);
        SURE = new QPushButton(centralwidget);
        SURE->setObjectName(QString::fromUtf8("SURE"));
        SURE->setGeometry(QRect(250, 510, 331, 61));
        SURE->setFont(font1);
        SEARCH_ITEM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SEARCH_ITEM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 872, 26));
        SEARCH_ITEM->setMenuBar(menubar);
        statusbar = new QStatusBar(SEARCH_ITEM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SEARCH_ITEM->setStatusBar(statusbar);

        retranslateUi(SEARCH_ITEM);

        QMetaObject::connectSlotsByName(SEARCH_ITEM);
    } // setupUi

    void retranslateUi(QMainWindow *SEARCH_ITEM)
    {
        SEARCH_ITEM->setWindowTitle(QCoreApplication::translate("SEARCH_ITEM", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\346\237\245\350\257\242\347\232\204\347\211\251\345\223\201\347\261\273\345\210\253\357\274\232</span></p></body></html>", nullptr));
        K1->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\351\243\237\345\223\201</span></p></body></html>", nullptr));
        K2->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\344\271\246\347\261\215</span></p></body></html>", nullptr));
        K3->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\227\245\347\224\250\345\223\201</span></p></body></html>", nullptr));
        name->setText(QString());
        textBrowser_6->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245\346\202\250\351\234\200\350\246\201\346\237\245\350\257\242\347\211\251\345\223\201\347\232\204\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SEARCH_ITEM", "\346\237\245\350\257\242\347\232\204\347\211\251\345\223\201\357\274\232", nullptr));
        B1->setText(QCoreApplication::translate("SEARCH_ITEM", "\351\200\211\346\213\251", nullptr));
        B2->setText(QCoreApplication::translate("SEARCH_ITEM", "\351\200\211\346\213\251", nullptr));
        B3->setText(QCoreApplication::translate("SEARCH_ITEM", "\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("SEARCH_ITEM", "\347\211\251\345\223\201\350\257\264\346\230\216\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("SEARCH_ITEM", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("SEARCH_ITEM", "\350\201\224\347\263\273\351\202\256\347\256\261\357\274\232", nullptr));
        P->setHtml(QCoreApplication::translate("SEARCH_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\205\266\344\273\226\345\261\236\346\200\247</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SEARCH_ITEM", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("SEARCH_ITEM", "\346\211\200\345\234\250\345\234\260\345\235\200\357\274\232", nullptr));
        SURE->setText(QCoreApplication::translate("SEARCH_ITEM", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SEARCH_ITEM: public Ui_SEARCH_ITEM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_ITEM_H

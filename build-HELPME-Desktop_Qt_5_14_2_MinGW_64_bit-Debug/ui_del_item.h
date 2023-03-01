/********************************************************************************
** Form generated from reading UI file 'del_item.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_ITEM_H
#define UI_DEL_ITEM_H

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

class Ui_DEL_ITEM
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_6;
    QPushButton *BT3;
    QPushButton *BT1;
    QPushButton *BT2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *K1;
    QTextBrowser *K2;
    QTextBrowser *K3;
    QLineEdit *ITEM;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DEL_ITEM)
    {
        if (DEL_ITEM->objectName().isEmpty())
            DEL_ITEM->setObjectName(QString::fromUtf8("DEL_ITEM"));
        DEL_ITEM->resize(800, 600);
        centralwidget = new QWidget(DEL_ITEM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(170, 190, 431, 51));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(160, 20, 441, 51));
        BT3 = new QPushButton(centralwidget);
        BT3->setObjectName(QString::fromUtf8("BT3"));
        BT3->setGeometry(QRect(570, 360, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        BT3->setFont(font);
        BT1 = new QPushButton(centralwidget);
        BT1->setObjectName(QString::fromUtf8("BT1"));
        BT1->setGeometry(QRect(100, 360, 141, 51));
        BT1->setFont(font);
        BT2 = new QPushButton(centralwidget);
        BT2->setObjectName(QString::fromUtf8("BT2"));
        BT2->setGeometry(QRect(340, 360, 141, 51));
        BT2->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 260, 701, 89));
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

        ITEM = new QLineEdit(centralwidget);
        ITEM->setObjectName(QString::fromUtf8("ITEM"));
        ITEM->setGeometry(QRect(310, 100, 311, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 100, 161, 51));
        label->setFont(font);
        DEL_ITEM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DEL_ITEM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        DEL_ITEM->setMenuBar(menubar);
        statusbar = new QStatusBar(DEL_ITEM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DEL_ITEM->setStatusBar(statusbar);

        retranslateUi(DEL_ITEM);

        QMetaObject::connectSlotsByName(DEL_ITEM);
    } // setupUi

    void retranslateUi(QMainWindow *DEL_ITEM)
    {
        DEL_ITEM->setWindowTitle(QCoreApplication::translate("DEL_ITEM", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("DEL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\345\210\240\351\231\244\347\232\204\347\211\251\345\223\201\347\261\273\345\210\253\357\274\232</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("DEL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245\346\202\250\351\234\200\350\246\201\345\210\240\351\231\244\347\211\251\345\223\201\347\232\204\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        BT3->setText(QCoreApplication::translate("DEL_ITEM", "\351\200\211\346\213\251", nullptr));
        BT1->setText(QCoreApplication::translate("DEL_ITEM", "\351\200\211\346\213\251", nullptr));
        BT2->setText(QCoreApplication::translate("DEL_ITEM", "\351\200\211\346\213\251", nullptr));
        K1->setHtml(QCoreApplication::translate("DEL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\351\243\237\345\223\201</span></p></body></html>", nullptr));
        K2->setHtml(QCoreApplication::translate("DEL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\344\271\246\347\261\215</span></p></body></html>", nullptr));
        K3->setHtml(QCoreApplication::translate("DEL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\227\245\347\224\250\345\223\201</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DEL_ITEM", "\345\210\240\351\231\244\347\232\204\347\211\251\345\223\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DEL_ITEM: public Ui_DEL_ITEM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_ITEM_H

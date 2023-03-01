/********************************************************************************
** Form generated from reading UI file 'all_item.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_ITEM_H
#define UI_ALL_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ALL_ITEM
{
public:
    QWidget *centralwidget;
    QPushButton *BT2;
    QPushButton *BT1;
    QPushButton *BT3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *K1;
    QTextBrowser *K2;
    QTextBrowser *K3;
    QTextBrowser *textBrowser;
    QTextBrowser *TB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ALL_ITEM)
    {
        if (ALL_ITEM->objectName().isEmpty())
            ALL_ITEM->setObjectName(QString::fromUtf8("ALL_ITEM"));
        ALL_ITEM->resize(800, 600);
        centralwidget = new QWidget(ALL_ITEM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BT2 = new QPushButton(centralwidget);
        BT2->setObjectName(QString::fromUtf8("BT2"));
        BT2->setGeometry(QRect(330, 210, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        BT2->setFont(font);
        BT1 = new QPushButton(centralwidget);
        BT1->setObjectName(QString::fromUtf8("BT1"));
        BT1->setGeometry(QRect(90, 210, 141, 51));
        BT1->setFont(font);
        BT3 = new QPushButton(centralwidget);
        BT3->setObjectName(QString::fromUtf8("BT3"));
        BT3->setGeometry(QRect(560, 210, 131, 51));
        BT3->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 110, 701, 89));
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

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(160, 40, 431, 51));
        TB = new QTextBrowser(centralwidget);
        TB->setObjectName(QString::fromUtf8("TB"));
        TB->setGeometry(QRect(70, 300, 661, 181));
        ALL_ITEM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ALL_ITEM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ALL_ITEM->setMenuBar(menubar);
        statusbar = new QStatusBar(ALL_ITEM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ALL_ITEM->setStatusBar(statusbar);

        retranslateUi(ALL_ITEM);

        QMetaObject::connectSlotsByName(ALL_ITEM);
    } // setupUi

    void retranslateUi(QMainWindow *ALL_ITEM)
    {
        ALL_ITEM->setWindowTitle(QCoreApplication::translate("ALL_ITEM", "MainWindow", nullptr));
        BT2->setText(QCoreApplication::translate("ALL_ITEM", "\351\200\211\346\213\251", nullptr));
        BT1->setText(QCoreApplication::translate("ALL_ITEM", "\351\200\211\346\213\251", nullptr));
        BT3->setText(QCoreApplication::translate("ALL_ITEM", "\351\200\211\346\213\251", nullptr));
        K1->setHtml(QCoreApplication::translate("ALL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\351\243\237\345\223\201</span></p></body></html>", nullptr));
        K2->setHtml(QCoreApplication::translate("ALL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\344\271\246\347\261\215</span></p></body></html>", nullptr));
        K3->setHtml(QCoreApplication::translate("ALL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\227\245\347\224\250\345\223\201</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("ALL_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\346\237\245\347\234\213\347\232\204\347\211\251\345\223\201\347\261\273\345\210\253\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ALL_ITEM: public Ui_ALL_ITEM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_ITEM_H

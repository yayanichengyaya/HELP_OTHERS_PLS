/********************************************************************************
** Form generated from reading UI file 'add_item.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ITEM_H
#define UI_ADD_ITEM_H

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

class Ui_ADD_ITEM
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser_5;
    QPushButton *BT3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *K1;
    QTextBrowser *K2;
    QTextBrowser *K3;
    QPushButton *BT1;
    QPushButton *BT2;
    QLineEdit *P1;
    QLabel *label;
    QTextBrowser *textBrowser_6;
    QLineEdit *P2;
    QLabel *label_2;
    QLineEdit *P3;
    QLabel *label_3;
    QLineEdit *P4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *P5;
    QTextBrowser *P;
    QLineEdit *P6;
    QPushButton *T1;
    QPushButton *T2;
    QPushButton *T3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ADD_ITEM)
    {
        if (ADD_ITEM->objectName().isEmpty())
            ADD_ITEM->setObjectName(QString::fromUtf8("ADD_ITEM"));
        ADD_ITEM->resize(800, 600);
        centralwidget = new QWidget(ADD_ITEM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(200, 20, 341, 51));
        BT3 = new QPushButton(centralwidget);
        BT3->setObjectName(QString::fromUtf8("BT3"));
        BT3->setGeometry(QRect(550, 190, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        BT3->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 701, 89));
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

        BT1 = new QPushButton(centralwidget);
        BT1->setObjectName(QString::fromUtf8("BT1"));
        BT1->setGeometry(QRect(80, 190, 141, 51));
        BT1->setFont(font);
        BT2 = new QPushButton(centralwidget);
        BT2->setObjectName(QString::fromUtf8("BT2"));
        BT2->setGeometry(QRect(320, 190, 141, 51));
        BT2->setFont(font);
        P1 = new QLineEdit(centralwidget);
        P1->setObjectName(QString::fromUtf8("P1"));
        P1->setGeometry(QRect(150, 330, 221, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 340, 101, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        label->setFont(font1);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(200, 250, 341, 51));
        P2 = new QLineEdit(centralwidget);
        P2->setObjectName(QString::fromUtf8("P2"));
        P2->setGeometry(QRect(150, 390, 221, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 400, 101, 21));
        label_2->setFont(font1);
        P3 = new QLineEdit(centralwidget);
        P3->setObjectName(QString::fromUtf8("P3"));
        P3->setGeometry(QRect(150, 450, 221, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 460, 101, 21));
        label_3->setFont(font1);
        P4 = new QLineEdit(centralwidget);
        P4->setObjectName(QString::fromUtf8("P4"));
        P4->setGeometry(QRect(510, 330, 221, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 340, 101, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 400, 101, 21));
        label_5->setFont(font1);
        P5 = new QLineEdit(centralwidget);
        P5->setObjectName(QString::fromUtf8("P5"));
        P5->setGeometry(QRect(510, 390, 221, 41));
        P = new QTextBrowser(centralwidget);
        P->setObjectName(QString::fromUtf8("P"));
        P->setGeometry(QRect(400, 450, 101, 41));
        P6 = new QLineEdit(centralwidget);
        P6->setObjectName(QString::fromUtf8("P6"));
        P6->setGeometry(QRect(510, 450, 221, 41));
        T1 = new QPushButton(centralwidget);
        T1->setObjectName(QString::fromUtf8("T1"));
        T1->setGeometry(QRect(110, 510, 111, 41));
        T2 = new QPushButton(centralwidget);
        T2->setObjectName(QString::fromUtf8("T2"));
        T2->setGeometry(QRect(340, 510, 111, 41));
        T3 = new QPushButton(centralwidget);
        T3->setObjectName(QString::fromUtf8("T3"));
        T3->setGeometry(QRect(570, 510, 111, 41));
        ADD_ITEM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ADD_ITEM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ADD_ITEM->setMenuBar(menubar);
        statusbar = new QStatusBar(ADD_ITEM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ADD_ITEM->setStatusBar(statusbar);

        retranslateUi(ADD_ITEM);

        QMetaObject::connectSlotsByName(ADD_ITEM);
    } // setupUi

    void retranslateUi(QMainWindow *ADD_ITEM)
    {
        ADD_ITEM->setWindowTitle(QCoreApplication::translate("ADD_ITEM", "MainWindow", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\351\200\211\346\213\251\351\234\200\350\246\201\347\232\204\347\211\251\345\223\201\347\247\215\347\261\273\357\274\232</span></p></body></html>", nullptr));
        BT3->setText(QCoreApplication::translate("ADD_ITEM", "\351\200\211\346\213\251", nullptr));
        K1->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\351\243\237\345\223\201</span></p></body></html>", nullptr));
        K2->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\344\271\246\347\261\215</span></p></body></html>", nullptr));
        K3->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\346\227\245\347\224\250\345\223\201</span></p></body></html>", nullptr));
        BT1->setText(QCoreApplication::translate("ADD_ITEM", "\351\200\211\346\213\251", nullptr));
        BT2->setText(QCoreApplication::translate("ADD_ITEM", "\351\200\211\346\213\251", nullptr));
        label->setText(QCoreApplication::translate("ADD_ITEM", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245\347\211\251\345\223\201\347\232\204\347\233\270\345\205\263\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ADD_ITEM", "\347\211\251\345\223\201\350\257\264\346\230\216\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ADD_ITEM", "\346\211\200\345\234\250\345\234\260\345\235\200\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ADD_ITEM", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("ADD_ITEM", "\350\201\224\347\263\273\351\202\256\347\256\261\357\274\232", nullptr));
        P->setHtml(QCoreApplication::translate("ADD_ITEM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\205\266\344\273\226\345\261\236\346\200\247</span></p></body></html>", nullptr));
        T1->setText(QCoreApplication::translate("ADD_ITEM", "\345\255\230\345\205\2451", nullptr));
        T2->setText(QCoreApplication::translate("ADD_ITEM", "\345\255\230\345\205\2452", nullptr));
        T3->setText(QCoreApplication::translate("ADD_ITEM", "\345\255\230\345\205\2453", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ADD_ITEM: public Ui_ADD_ITEM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ITEM_H

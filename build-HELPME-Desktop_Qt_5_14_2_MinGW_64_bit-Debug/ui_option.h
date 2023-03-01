/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OPTION
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *T4;
    QPushButton *T3;
    QPushButton *T2;
    QPushButton *T1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OPTION)
    {
        if (OPTION->objectName().isEmpty())
            OPTION->setObjectName(QString::fromUtf8("OPTION"));
        OPTION->resize(800, 600);
        centralwidget = new QWidget(OPTION);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(220, 80, 321, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 150, 501, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        T4 = new QPushButton(layoutWidget);
        T4->setObjectName(QString::fromUtf8("T4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        T4->setFont(font);

        verticalLayout->addWidget(T4);

        T3 = new QPushButton(layoutWidget);
        T3->setObjectName(QString::fromUtf8("T3"));
        T3->setFont(font);

        verticalLayout->addWidget(T3);

        T2 = new QPushButton(layoutWidget);
        T2->setObjectName(QString::fromUtf8("T2"));
        T2->setFont(font);

        verticalLayout->addWidget(T2);

        T1 = new QPushButton(layoutWidget);
        T1->setObjectName(QString::fromUtf8("T1"));
        T1->setFont(font);

        verticalLayout->addWidget(T1);

        OPTION->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OPTION);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        OPTION->setMenuBar(menubar);
        statusbar = new QStatusBar(OPTION);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OPTION->setStatusBar(statusbar);

        retranslateUi(OPTION);

        QMetaObject::connectSlotsByName(OPTION);
    } // setupUi

    void retranslateUi(QMainWindow *OPTION)
    {
        OPTION->setWindowTitle(QCoreApplication::translate("OPTION", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("OPTION", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\347\232\204\346\234\215\345\212\241\357\274\232</span></p></body></html>", nullptr));
        T4->setText(QCoreApplication::translate("OPTION", "\346\237\245\350\257\242\347\211\251\345\223\201", nullptr));
        T3->setText(QCoreApplication::translate("OPTION", "\346\265\217\350\247\210\344\277\241\346\201\257", nullptr));
        T2->setText(QCoreApplication::translate("OPTION", "\345\210\240\351\231\244\347\211\251\345\223\201", nullptr));
        T1->setText(QCoreApplication::translate("OPTION", "\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OPTION: public Ui_OPTION {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H

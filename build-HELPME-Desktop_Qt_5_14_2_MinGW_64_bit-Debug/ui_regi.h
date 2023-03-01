/********************************************************************************
** Form generated from reading UI file 'regi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGI_H
#define UI_REGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REGI
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *BT31;
    QPushButton *BT32;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *NAME;
    QLineEdit *NUMBER;
    QLineEdit *ADRESS;
    QLineEdit *ID;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *REGI)
    {
        if (REGI->objectName().isEmpty())
            REGI->setObjectName(QString::fromUtf8("REGI"));
        REGI->resize(800, 600);
        centralwidget = new QWidget(REGI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(200, 120, 341, 51));
        BT31 = new QPushButton(centralwidget);
        BT31->setObjectName(QString::fromUtf8("BT31"));
        BT31->setGeometry(QRect(190, 400, 151, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        BT31->setFont(font);
        BT32 = new QPushButton(centralwidget);
        BT32->setObjectName(QString::fromUtf8("BT32"));
        BT32->setGeometry(QRect(400, 400, 151, 61));
        BT32->setFont(font);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(190, 190, 361, 191));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        NAME = new QLineEdit(widget1);
        NAME->setObjectName(QString::fromUtf8("NAME"));

        verticalLayout_2->addWidget(NAME);

        NUMBER = new QLineEdit(widget1);
        NUMBER->setObjectName(QString::fromUtf8("NUMBER"));

        verticalLayout_2->addWidget(NUMBER);

        ADRESS = new QLineEdit(widget1);
        ADRESS->setObjectName(QString::fromUtf8("ADRESS"));

        verticalLayout_2->addWidget(ADRESS);

        ID = new QLineEdit(widget1);
        ID->setObjectName(QString::fromUtf8("ID"));

        verticalLayout_2->addWidget(ID);

        splitter->addWidget(widget1);
        REGI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(REGI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        REGI->setMenuBar(menubar);
        statusbar = new QStatusBar(REGI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        REGI->setStatusBar(statusbar);

        retranslateUi(REGI);

        QMetaObject::connectSlotsByName(REGI);
    } // setupUi

    void retranslateUi(QMainWindow *REGI)
    {
        REGI->setWindowTitle(QCoreApplication::translate("REGI", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("REGI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:7.2pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        BT31->setText(QCoreApplication::translate("REGI", "\347\241\256\345\256\232", nullptr));
        BT32->setText(QCoreApplication::translate("REGI", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("REGI", "\347\234\237\345\256\236\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("REGI", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_4->setText(QCoreApplication::translate("REGI", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("REGI", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REGI: public Ui_REGI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGI_H

/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QPushButton *pushButton;
    QPushButton *fb;
    QPushButton *insta;
    QPushButton *yt;
    QPushButton *github;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/p.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        about->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background: url(:/menu/resources/menubg.png);\n"
"}"));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 520, 150, 38));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/back (3).png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   border-image: url(:/menu/resources/back (2).png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   border-image: url(:/menu/resources/back (1).png);\n"
"}"));
        fb = new QPushButton(about);
        fb->setObjectName(QString::fromUtf8("fb"));
        fb->setGeometry(QRect(90, 370, 64, 64));
        fb->setStyleSheet(QString::fromUtf8("#fb\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/facebook (1).png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        insta = new QPushButton(about);
        insta->setObjectName(QString::fromUtf8("insta"));
        insta->setGeometry(QRect(270, 370, 64, 64));
        insta->setStyleSheet(QString::fromUtf8("#insta\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/instagram (1).png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        yt = new QPushButton(about);
        yt->setObjectName(QString::fromUtf8("yt"));
        yt->setGeometry(QRect(360, 370, 64, 64));
        yt->setStyleSheet(QString::fromUtf8("#yt\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/youtube (1).png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        github = new QPushButton(about);
        github->setObjectName(QString::fromUtf8("github"));
        github->setGeometry(QRect(180, 370, 64, 64));
        github->setStyleSheet(QString::fromUtf8("#github\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/github (1).png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 440, 461, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(about);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 290, 331, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Future TimeSplitters"));
        label_2->setFont(font1);

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Air Enforcer - About", nullptr));
        pushButton->setText(QString());
        fb->setText(QString());
        insta->setText(QString());
        yt->setText(QString());
        github->setText(QString());
        label->setText(QCoreApplication::translate("about", "<html><head/><body><p><span style=\" font-size:14pt; color:#061b17;\">Developed by </span><span style=\" font-size:14pt; font-weight:600; color:#061b17;\">Ayesh Dulanja (10638431)</span></p><p><span style=\" font-size:14pt; color:#061b17;\">Email :</span><span style=\" font-size:14pt; font-weight:600; color:#061b17;\"> ayeshdulanja@gmail.com</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("about", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#213823;\">ABOUT</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

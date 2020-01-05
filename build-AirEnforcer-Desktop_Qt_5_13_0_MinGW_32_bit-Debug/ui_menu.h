/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *btnnewgame;
    QPushButton *btnexit;
    QPushButton *btnhowto;
    QPushButton *btnabout;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setWindowModality(Qt::NonModal);
        Menu->setEnabled(true);
        Menu->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/p.png"), QSize(), QIcon::Normal, QIcon::Off);
        Menu->setWindowIcon(icon);
        Menu->setStyleSheet(QString::fromUtf8("background: url(:/menu/resources/menubg.png)"));
        btnnewgame = new QPushButton(Menu);
        btnnewgame->setObjectName(QString::fromUtf8("btnnewgame"));
        btnnewgame->setGeometry(QRect(100, 340, 300, 38));
        btnnewgame->setStyleSheet(QString::fromUtf8("#btnnewgame \n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/btnng.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#btnnewgame:hover\n"
"{\n"
"   border-image: url(:/menu/resources/btnng2.png)\n"
"}\n"
"\n"
"#btnnewgame:pressed\n"
"{\n"
"   border-image: url(:/menu/resources/btnng3.png)\n"
"}"));
        btnexit = new QPushButton(Menu);
        btnexit->setObjectName(QString::fromUtf8("btnexit"));
        btnexit->setGeometry(QRect(100, 490, 300, 38));
        btnexit->setStyleSheet(QString::fromUtf8("#btnexit\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/btnexit.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#btnexit:hover\n"
"{\n"
"   border-image: url(:/menu/resources/btnexit2.png)\n"
"}\n"
"\n"
"#btnexit:pressed\n"
"{\n"
"   border-image: url(:/menu/resources/btnexit3.png)\n"
"}"));
        btnhowto = new QPushButton(Menu);
        btnhowto->setObjectName(QString::fromUtf8("btnhowto"));
        btnhowto->setGeometry(QRect(100, 390, 300, 38));
        btnhowto->setStyleSheet(QString::fromUtf8("#btnhowto\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/btnhow.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#btnhowto:hover\n"
"{\n"
"   border-image: url(:/menu/resources/btnhow2.png)\n"
"}\n"
"\n"
"#btnhowto:pressed\n"
"{\n"
"   border-image: url(:/menu/resources/btnhow3.png)\n"
"}"));
        btnabout = new QPushButton(Menu);
        btnabout->setObjectName(QString::fromUtf8("btnabout"));
        btnabout->setGeometry(QRect(100, 440, 300, 38));
        btnabout->setStyleSheet(QString::fromUtf8("#btnabout\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:/menu/resources/btnabout.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#btnabout:hover\n"
"{\n"
"   border-image: url(:/menu/resources/btnabout2.png)\n"
"}\n"
"\n"
"#btnabout:pressed\n"
"{\n"
"   border-image: url(:/menu/resources/btnabout3.png)\n"
"}"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Air Enforcer", nullptr));
        btnnewgame->setText(QString());
        btnexit->setText(QString());
        btnhowto->setText(QString());
        btnabout->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

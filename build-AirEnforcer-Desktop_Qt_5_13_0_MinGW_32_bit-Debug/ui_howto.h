/********************************************************************************
** Form generated from reading UI file 'howto.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOWTO_H
#define UI_HOWTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_howto
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *howto)
    {
        if (howto->objectName().isEmpty())
            howto->setObjectName(QString::fromUtf8("howto"));
        howto->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/p.png"), QSize(), QIcon::Normal, QIcon::Off);
        howto->setWindowIcon(icon);
        howto->setStyleSheet(QString::fromUtf8("QDialog{background: url(:/menu/resources/menubg.png);}"));
        pushButton = new QPushButton(howto);
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
        label_2 = new QLabel(howto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 290, 331, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Future TimeSplitters"));
        label_2->setFont(font);
        label = new QLabel(howto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 370, 331, 141));

        retranslateUi(howto);

        QMetaObject::connectSlotsByName(howto);
    } // setupUi

    void retranslateUi(QDialog *howto)
    {
        howto->setWindowTitle(QCoreApplication::translate("howto", "Air Enforcer - How To Play", nullptr));
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("howto", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#213823;\">How to Play</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("howto", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#061b17;\">Use </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">LEFT</span><span style=\" font-size:16pt; color:#061b17;\"> and </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">RIGHT</span><span style=\" font-size:16pt; color:#061b17;\"> Arrow keys</span></p><p align=\"center\"><span style=\" font-size:16pt; color:#061b17;\">to </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">MOVE</span><span style=\" font-size:16pt; color:#061b17;\"> the </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">PLAYER</span></p><p align=\"center\"><span style=\" font-size:16pt; color:#061b17;\">Use </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">SPACEBAR</span><span style=\" font-size:16pt; color:#061b17;\"> to </span><span style=\" font-size:16pt; font-weight:600; color:#061b17;\">SHOOT</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class howto: public Ui_howto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOWTO_H

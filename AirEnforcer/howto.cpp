#include "howto.h"
#include "ui_howto.h"
#include "menu.h"

howto::howto(QWidget *parent) :
    QDialog(parent,Qt::FramelessWindowHint),
    ui(new Ui::howto)
{
    ui->setupUi(this);
}

howto::~howto()
{
    delete ui;
}

void howto::on_pushButton_clicked()
{
    close();

    Menu mn;
    mn.setModal(true);
    mn.exec();
}

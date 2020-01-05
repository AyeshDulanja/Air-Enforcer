#include "about.h"
#include "ui_about.h"
#include "menu.h"
#include <QDesktopServices>
#include <QUrl>

about::about(QWidget *parent) :
    QDialog(parent,Qt::FramelessWindowHint),
    ui(new Ui::about)
{
    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{
    close();

    Menu mn;
    mn.setModal(true);
    mn.exec();
}

void about::on_fb_clicked()
{
    QString link="https://www.facebook.com/ayeshdulanja";
    QDesktopServices::openUrl(QUrl(link));
}

void about::on_yt_clicked()
{
    QString link="http://www.youtube.com/c/AyeshDulanja";
    QDesktopServices::openUrl(QUrl(link));
}

void about::on_insta_clicked()
{
    QString link="https://www.instagram.com/a_yes_h/";
    QDesktopServices::openUrl(QUrl(link));
}

void about::on_github_clicked()
{
    QString link="https://github.com/AyeshDulanja";
    QDesktopServices::openUrl(QUrl(link));
}

#include "menu.h"
#include "ui_menu.h"
#include "game.h"
#include <QMediaPlayer>
#include "about.h"
#include "howto.h"

game * Game;

Menu::Menu(QWidget *parent) :
    QDialog(parent,Qt::FramelessWindowHint),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

//play bg music
//    QMediaPlayer * music = new QMediaPlayer();
//        music->setMedia(QUrl("qrc:/sounds/resources/bgmusic.mp3"));
//        music->play();

}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{


}

void Menu::on_pushButton_2_clicked()
{

}

void Menu::on_btnnewgame_clicked()
{
    Game = new game();
    Game->show();


    this->hide();
}

void Menu::on_btnexit_clicked()
{
    this->close();
}

void Menu::on_btnabout_clicked()
{
    hide();

    about ab;
    ab.setModal(true);
    ab.exec();
}

void Menu::on_btnhowto_clicked()
{
    hide();

    howto hw;
    hw.setModal(true);
    hw.exec();
}

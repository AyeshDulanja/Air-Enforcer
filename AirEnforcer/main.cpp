#include <QApplication>
#include "game.h"
#include "menu.h"

//game * Game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    //Game = new game();
    //Game->show();

    Menu w;
    w.show();

    return a.exec();
}

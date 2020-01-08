#include "health.h"
#include <QFont>
#include"game.h"
#include"menu.h"
#include <QGraphicsTextItem>

health::health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    Health = 10;

    // draw the text
    setPlainText(QString("Health: ") + QString::number(Health)); // Health: 3
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",16));

}

void health::decrease(){
    Health--;
    setPlainText(QString("Health: ") + QString::number(Health)); // Health: 2

//    if(Health==0){

//        game gm;
//        gm.gameover();


//        Menu mn;
//        mn.setModal(true);
//        mn.exec();
//    }
}

int health::getHealth(){
    return Health;
}



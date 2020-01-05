#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include "game.h"

extern game * Game;

enemy::enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    //set random x position
    int random_number = rand() % 700;
    setPos(random_number,0);

    // drew the rect
    setPixmap(QPixmap(":/images/resources/e.png"));

    // make/connect a timer to move() the enemy every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);
}

void enemy::move(){
    // move enemy down
    setPos(x(),y()+5);

    // destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        //decrease the health
        Game->Health->decrease();

        scene()->removeItem(this);
        delete this;
    }
}

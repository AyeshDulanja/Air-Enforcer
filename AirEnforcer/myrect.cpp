#include "myrect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "enemy.h"

#include <QDebug>
void myrect::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        bullet * Bullet = new bullet();
        Bullet->setPos(x(),y());
        scene()->addItem(Bullet);
    }
}

void myrect::spawn(){
    // create an enemy
    enemy * Enemy = new enemy();
    scene()->addItem(Enemy);
}

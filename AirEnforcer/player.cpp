#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "enemy.h"

player::player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    bulletsound =  new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/resources/bullet.mp3"));

    //set player
    setPixmap(QPixmap(":/images/resources/p.png"));

}

void player::keyPressEvent(QKeyEvent *event){
    // move the player left and right
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    // shoot with the spacebar
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        bullet * Bullet = new bullet();
        Bullet->setPos(x(),y());
        scene()->addItem(Bullet);

        //play bullet sound
        if(bulletsound->state() == QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
        else if (bulletsound->state()==QMediaPlayer::StoppedState) {
            bulletsound->play();
        }

    }
}

void player::spawn(){
    // create an enemy
    enemy * Enemy = new enemy();
    scene()->addItem(Enemy);
}

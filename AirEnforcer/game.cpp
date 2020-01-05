#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "enemy.h"
#include <QMediaPlayer>
#include "menu.h"
#include "health.h"



game::game(QWidget *parent){

        // create the scene
        Scene = new QGraphicsScene();
        Scene->setSceneRect(0,0,800,600); // make the scene 800x600 instead of infinity by infinity (default)
        setBackgroundBrush(QBrush(QImage(":/images/resources/bg.png")));

        // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
        // it can be used to visualize scenes)
        setScene(Scene);
        setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setFixedSize(800,600);
        //setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

        // create the player
        Player = new player();
        Player->setPixmap(QPixmap(":/images/resources/p.png")); // change the rect from 0x0 (default) to 100x100 pixels
        Player->setPos(350,450); // TODO generalize to always be in the middle bottom of screen
        // make the player focusable and set it to be the current focus
        Player->setFlag(QGraphicsItem::ItemIsFocusable);
        Player->setFocus();

        // add the player to the scene
        Scene->addItem(Player);

        // create the score/health
        Score = new score();
        Scene->addItem(Score);

        Health = new health();
        Health->setPos(Health->x(),Health->y()+25);
        Scene->addItem(Health);

        // spawn enemies
        QTimer * timer = new QTimer();
        QObject::connect(timer,SIGNAL(timeout()),Player,SLOT(spawn()));
        timer->start(2000);

        //play bg music
        QMediaPlayer * music = new QMediaPlayer();
            music->setMedia(QUrl("qrc:/sounds/resources/bgmusic.mp3"));
            music->play();

        //create pause button
         //Button* playButton = new Button(QString("Play"));


        show();

        //gameover();

}

void game::gameover()
{
    QWidget::close();
}




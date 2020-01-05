#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include "score.h"
#include "health.h"

class game: public QGraphicsView{
public:
    game(QWidget * parent=0);

    QGraphicsScene * Scene;
    player * Player;
    score * Score;
    health * Health;

    void gameover();



};

#endif // GAME_H

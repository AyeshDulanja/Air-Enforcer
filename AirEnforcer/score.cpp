#include "score.h"
#include <QFont>

score::score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    Score = 0;

    // draw the text
    setPlainText(QString("Score: ") + QString::number(Score)); // Score: 0
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",16));
}

void score::increase(){
    Score++;
    setPlainText(QString("Score: ") + QString::number(Score)); // Score: 1
}

int score::getScore(){
    return Score;
}

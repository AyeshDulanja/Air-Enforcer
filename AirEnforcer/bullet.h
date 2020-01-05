#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class bullet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    bullet(QGraphicsItem * parent=0);
public slots:
    void move();
};

#endif // BULLET_H

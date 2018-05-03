#ifndef STICKMAN
#define STICKMAN

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "Bullet.h"
#include <QWidget>
#include "Arrow_2.h"
#include <QKeyEvent>
#include "Health.h"
#include <QObject>


class Stickman:public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:
    Stickman();
    Health* player_health;
    void keyPressEvent(QKeyEvent* event);
    //void keyReleaseEvent(QKeyEvent* event);
    //void mousePressEvent(QMouseEvent *event1);
public slots:
    void collision_check();

};

#endif // STICKMAN


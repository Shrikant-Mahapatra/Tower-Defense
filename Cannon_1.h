#ifndef CANNON_1
#define CANNON_1

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "Health.h"
#include <QObject>


class Cannon_1:public QObject, public QGraphicsPixmapItem
{
Q_OBJECT
public:
    Cannon_1();
    Health* cannon1_health;
public slots:
    void fire_ball();
};

#endif // CANNON_1


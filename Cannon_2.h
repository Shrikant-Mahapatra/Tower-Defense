#ifndef CANNON_2
#define CANNON_2
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include "Health.h"



class Cannon_2:public QObject, public QGraphicsPixmapItem
{
Q_OBJECT
public:
    Cannon_2();
    Health* cannon2_health;
public slots:
    void fire_missile();

};

#endif // CANNON_2


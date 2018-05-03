#ifndef CANNON_3
#define CANNON_3

#include <QGraphicsPixmapItem>
#include "Health.h"
#include <QObject>
class Cannon_3:public QObject, public QGraphicsPixmapItem
{
Q_OBJECT
public:
    Cannon_3();
    Health* cannon3_health;

public slots:
    void fire_skull();
 };

#endif // CANNON_3


#ifndef ENEMY_BULLETS
#define ENEMY_BULLETS


#include <QObject>
#include <QGraphicsScene>
#include "Ball.h"
#include "Arrow_2.h"
#include <QGraphicsScene>
#include <QGraphicsItem>

class Enemy_bullets:public QObject,public QGraphicsRectItem
{
Q_OBJECT

public slots:
    void Enemy_spawn();

  };


#endif // ENEMY_BULLETS


#include "Enemy_bullets.h"
#include "Ball.h"
#include "Arrow_2.h"
#include <QGraphicsScene>


void Enemy_bullets::Enemy_spawn()
{
    Ball *bouncing=new Ball;
    scene()->addItem(bouncing);


}

#include "Cannon_1.h"
#include "Game.h"
#include "Ball.h"
#include "Arrow_2.h"

extern Game* game_on;

Cannon_1::Cannon_1()
{
    cannon1_health= new Health();
    cannon1_health->setPlainText(QString("Cannon 1:")+QString::number(cannon1_health->getHealth()));


}

void Cannon_1::fire_ball()
{

    Ball *bouncing=new Ball;
    bouncing->setPos(x()-40,y());
    scene()->addItem(bouncing);
}

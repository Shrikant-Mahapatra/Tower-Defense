#include "Cannon_3.h"
#include "Game.h"
extern Game* game_on;


Cannon_3::Cannon_3()
{
    cannon3_health= new Health();
    cannon3_health->setPlainText(QString("Cannon 3:")+QString::number(cannon3_health->getHealth()));
}

void Cannon_3::fire_skull()
{
    Arrow_2 *arrow=new Arrow_2;
    arrow->setPos(x()-100,y());
    scene()->addItem(arrow);
}


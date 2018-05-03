#include "Cannon_2.h"
#include "Missile.h"
#include "Game.h"

extern Game* game_on;
Cannon_2::Cannon_2()
{
    cannon2_health= new Health();
    cannon2_health->setPlainText(QString("Cannon 2:")+QString::number(cannon2_health->getHealth()));
}

void Cannon_2::fire_missile()
{
  Missile* launch=new Missile;
  launch->setPos(x()-40,y());
  scene()->addItem(launch);
 }






#include "Missile.h"
#include "Fragment_fury.h"
#include "Game.h"

extern Game* game_on;
Missile::Missile()
{
  setRect(0,0,100,20);
  setPos(x()+590,y()+250);
  QTimer * move_missile = new QTimer(this);
  connect(move_missile,SIGNAL(timeout()),this,SLOT(Missile_move()));
  move_missile->start(100);

  QTimer * move_frag = new QTimer(this);
  connect(move_frag,SIGNAL(timeout()),this,SLOT(frags()));
  move_frag->start(1800);
}

void Missile::Missile_move()
{
    setPos(x()-10,y());
}

void Missile::frags()
{
    Fragment_fury *frag_fury=new Fragment_fury;
    frag_fury->setPos(x(),y());
    game_on->scene->addItem(frag_fury);
}


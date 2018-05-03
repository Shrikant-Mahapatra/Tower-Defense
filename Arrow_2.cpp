#include "Arrow_2.h"
#include "Game.h"
#include <typeinfo>
#include <QList>

extern Game *game_on;
Arrow_2::Arrow_2()
{
    setPixmap(QPixmap(":/Images/arrow_2.jpeg"));
    setPos(x()+590,y()+350 );
    QTimer * move_skull = new QTimer(this);
    connect(move_skull,SIGNAL(timeout()),this,SLOT(move()));
    move_skull->start(100);
}

void Arrow_2::move()
{


      setPos(x()-40,y()+40);


      if(pos().y()> 700)
   {
       scene()->removeItem(this);
       delete this;
   }
}


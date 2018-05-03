#include "Bullet.h"
#include <QPixmap>
#include <QTimer>
#include <qmath.h>
#include "Game.h"
#include <typeinfo>
#include <QList>


extern Game * game_on;

Bullet::Bullet(QGraphicsItem *parent): QObject(),QGraphicsPixmapItem(parent){
    // set graphics
    setPixmap(QPixmap(":/Images/arrow.jpg"));


    // connect a timer to move()
    QTimer * move_timer = new QTimer(this);
    connect(move_timer,SIGNAL(timeout()),this,SLOT(move()));
    move_timer->start(100);
}


void Bullet::move()
{

   QList<QGraphicsItem*>colliding_items=collidingItems();
    for(int i=0,n=colliding_items.size();i<n;i++)
    {
        if(typeid(*(colliding_items[i]))==typeid(Cannon_1))
        {
        game_on->cannon1->cannon1_health->decrease();
        game_on->cannon1->cannon1_health->health1();
        if((game_on->cannon1->cannon1_health->getHealth())<=0)
          {
           scene()->removeItem(colliding_items[i]);
           delete colliding_items[i];
          }
        scene()->removeItem(this);

        delete this;
        return;
         }
        else if(typeid(*(colliding_items[i]))==typeid(Cannon_2))
        {

            game_on->cannon2->cannon2_health->decrease();
            game_on->cannon2->cannon2_health->health2();
            if((game_on->cannon2->cannon2_health->getHealth())<=0)
              {
               scene()->removeItem(colliding_items[i]);
               delete colliding_items[i];
               }

        scene()->removeItem(this);
        delete this;
        return;
           }
         else if(typeid(*(colliding_items[i]))==typeid(Cannon_3))
           {
            game_on->cannon3->cannon3_health->decrease();
            game_on->cannon3->cannon3_health->health3();
            if((game_on->cannon3->cannon3_health->getHealth())<=0)
              {
               scene()->removeItem(colliding_items[i]);
               delete colliding_items[i];
               }
          scene()->removeItem(this);
          delete this;
          return;
           }
        else if((game_on->cannon3->cannon3_health->getHealth()==0)&&(game_on->cannon2->cannon2_health->getHealth()==0)&&(game_on->cannon1->cannon1_health->getHealth()==0))
        {
            game_on->man->player_health->game_win();
           scene()->removeItem(game_on->man);
        }
        }



setPos(x()+40,y()-40);

if(pos().x()>1300)
{
    scene()->removeItem(this);
    delete this;
}
}

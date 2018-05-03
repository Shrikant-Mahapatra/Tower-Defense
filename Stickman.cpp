#include "Stickman.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Ball.h"
#include <typeinfo>
#include <QList>
#include "Game.h"

extern Game* game_on;

Stickman::Stickman()
{
    setPixmap(QPixmap(":/Images/StickMan.PNG"));
    player_health= new Health();
    player_health->setPlainText(QString("Player:")+QString::number(player_health->getHealth()));

}

void Stickman::keyPressEvent(QKeyEvent *event)
{
  //collision_check();

    if((event->key()== Qt::Key_Left)&&pos().x()>0)
   {
        setPos(x()-10,y());

    /*     for(int i=0,n=colliding_items.size();i<n;i++)
         {
             if((typeid(*(colliding_items[i]))==typeid(Arrow_2))|(typeid(*(colliding_items[i]))==typeid(Ball)))
             {
             game_on->man->player_health->decrease();
             game_on->man->player_health->health4();
             if((game_on->man->player_health->getHealth())<=0)
               {
                scene()->removeItem(colliding_items[i]);
                delete colliding_items[i];
               }
             scene()->removeItem(this);

             delete this;
             return;
              }*/
    }

   else if((event->key()==Qt::Key_Right)&& pos().x()<1000)
   {

    setPos(x()+10,y());
   }

  else if(event->key()==Qt::Key_Space)
  {
      // while(event->key()==Qt::Key_Space);
       Bullet * bullet = new Bullet();
       bullet->setPos(x()+100,y()-70);
       scene()->addItem(bullet);
   }

}

void Stickman::collision_check()
{
    QList<QGraphicsItem*>colliding_items=collidingItems();

           for(int i=0,n=colliding_items.size();i<n;i++)
          {
              if((typeid(*(colliding_items[i]))==typeid(Arrow_2)) | (typeid(*(colliding_items[i]))==typeid(Ball)) )
              {
              game_on->man->player_health->decrease();
              game_on->man->player_health->health4();
              if((game_on->man->player_health->getHealth())<=0)
                {
                  game_on->man->player_health->game_lose();
                  scene()->removeItem(this);

                }
              scene()->removeItem(colliding_items[i]);
              delete colliding_items[i];
              return;
               }
     }}


/*void Stickman::​keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Space)
   {
       // while(event->key()==Qt::Key_Space);
        Bullet * bullet = new Bullet();
        bullet->setPos(x()+100,y()-70);
        scene()->addItem(bullet);
    }
}*/

/*void Stickman::fire_ball()
{
    Ball *bouncing=new Ball;
    //bouncing->setPos(x(),y());
    scene()->addItem(bouncing);

}

/*void Stickman::mousePressEvent(QMouseEvent *event1)
{
    Bullet * bullet = new Bullet();
    bullet->setPos(x(),y());
    bullet->setRotation(40);
    scene()->addItem(bullet);
    if (event1->button()==Qt::LeftButton)
    qDebug() << "right button is pressed";
}*/



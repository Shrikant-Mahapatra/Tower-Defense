#include "Ball.h"
#include<math.h>



Ball::Ball()

{
   setRect(0,0,40,40);
   //setPos(400,140);
   x_pos=0;
   y_pos=0;
   dy=0;
   dx=0;
   gravity1=0.03;
   gravity2=0.02;

   //setPos(800-175,140);
   enemy =new QTimer;
   connect(enemy,SIGNAL(timeout()),this,SLOT(update()));
   enemy->start(20);
}

void Ball::setposition(float l, float m)
{
 this->x_pos=l;
 this->y_pos=m;
}

void Ball::update()
{

    setposition(x(),y());
    if((y_pos+45)<700)
    {
        y_pos+=dy;
        x_pos-=dx;
        dy+=gravity1;
        dx+=gravity2;
    }
    else
    {
        dy*=-0.80;
        dx*=+0.35;
        y_pos+=dy;
        x_pos+=dx;

        if(fabsf(dy)<0.01)
        {
            dy=0;
        }

    }

    setPos(x_pos,y_pos);
    if(pos().x()<0)
    {
        scene()->removeItem(this);
        delete this;
    }

}

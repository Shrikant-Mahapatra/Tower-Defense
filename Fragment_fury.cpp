#include "Fragment_fury.h"
#include <typeinfo>
#include <QList>
#include "Game.h"
extern Game* game_on;

Fragment_fury::Fragment_fury()
{
    setRect(0,0,20,20);
    //setPos(x()+590,y()+250);
    QTimer * move_frag = new QTimer(this);
    connect(move_frag,SIGNAL(timeout()),this,SLOT(frag_move()));
    move_frag->start(200);
}


void Fragment_fury::frag_move()
{


    setPos(x(),y()+20);

    if(pos().y()>700)
    {
        scene()->removeItem(this);
        delete this;
    }

}



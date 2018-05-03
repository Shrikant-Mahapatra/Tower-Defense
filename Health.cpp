
#include "Health.h"
#include <QFont>


Health::Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{

    health=5;
    //setPlainText(QString("Score:")+QString::number(health));
    setDefaultTextColor((Qt::red));
    setFont(QFont("times",16));
}

void Health::decrease()
{
    health--;

}

int Health::getHealth()
{
    return health;
}

void Health::health1()
{
    setPlainText(QString("Cannon 1: ")+QString::number(health));
}
void Health::health2()
{
    setPlainText(QString("Cannon 2: ")+QString::number(health));
}
void Health::health3()
{
    setPlainText(QString("Cannon 3: ")+QString::number(health));
}
void Health::health4()
{

    setPlainText(QString("Player : ")+QString::number(health));
}

void Health::game_win()
{

    setPlainText(QString("You Win!"));
}

void Health::game_lose()
{
    setPlainText(QString("You Lost!!You are Dead to the Game!!"));
}





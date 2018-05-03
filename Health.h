#ifndef SCORE
#define SCORE

#include<QGraphicsTextItem>

class Health:public QGraphicsTextItem
{
public:
    Health(QGraphicsItem *parent=0);
    void decrease();
    int getHealth();
    void health1();
    void health2();
    void health3();
    void health4();
    void game_win();
    void game_lose();

private:
    int health;
};


#endif // SCORE


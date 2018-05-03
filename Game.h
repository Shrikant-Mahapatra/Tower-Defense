#ifndef GAME
#define GAME
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include "Tower.h"
#include "Stickman.h"
#include "Cannon_1.h"
#include "Cannon_2.h"
#include "Cannon_3.h"


class Game:public QGraphicsView
    {

public:
      Game(QWidget *parent=0);
      QGraphicsScene *scene;
     // QGraphicsView *view ;
      QTimer *E_ball,*E_skull,*E_missile,*collison;
      Tower *tower;
      Stickman *man;
      Cannon_1 *cannon1;
      Cannon_2 *cannon2;
      Cannon_3 *cannon3;
};
#endif // GAME


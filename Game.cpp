#include "Game.h"

Game::Game(QWidget *parent)
{

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1300,700);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(1300,700);
    setScene(scene);
    tower= new Tower;
    tower->setPixmap(QPixmap(":/Images/Tower_Big.png"));
    scene->addItem(tower);
    //Tower
    cannon1= new Cannon_1;
    cannon1->setPixmap(QPixmap(":/Images/Cannon.png"));
    scene->addItem(cannon1);
    cannon1->cannon1_health->setPos(x(),y());
    scene->addItem(cannon1->cannon1_health);

    cannon2= new Cannon_2;
    cannon2->setPixmap(QPixmap(":/Images/Cannon.png"));
    scene->addItem(cannon2);
    cannon2->cannon2_health->setPos(x()+200,y());
    scene->addItem(cannon2->cannon2_health);

    cannon3= new Cannon_3;
    cannon3->setPixmap(QPixmap(":/Images/Cannon.png"));
    scene->addItem(cannon3);
    cannon3->cannon3_health->setPos(x()+400,y());
    scene->addItem(cannon3->cannon3_health);


    man=new Stickman;
    scene->addItem(man);
    man->player_health->setPos(x()+600,y());
    scene->addItem(man->player_health);
    man->setFlag(QGraphicsItem::ItemIsFocusable);
    man->setFocus();
    //Stickman

    // view = new QGraphicsView(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    /*view->show();
    view->setFixedSize(800,600);
    */

    tower->setPos(scene->width()-70,scene->height()-583);
    cannon1->setPos(scene->width()-135,150);
    cannon2->setPos(scene->width()-135,250);
    cannon3->setPos(scene->width()-135,350);
    man->setPos(x(),scene->height()-150);


    E_ball=new QTimer;

    QObject::connect(E_ball,SIGNAL(timeout()),cannon1,SLOT(fire_ball()));
    E_ball->start(5000);

    E_missile=new QTimer;
    QObject::connect(E_missile,SIGNAL(timeout()),cannon2,SLOT(fire_missile()));
    E_missile->start(6000);

    E_skull=new QTimer;
    QObject::connect(E_skull,SIGNAL(timeout()),cannon3,SLOT(fire_skull()));
    E_skull->start(8000);

    collison=new QTimer;
    QObject::connect(collison,SIGNAL(timeout()),man,SLOT(collision_check()));
    collison->start(80);
}


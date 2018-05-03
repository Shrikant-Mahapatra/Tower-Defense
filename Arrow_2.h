#ifndef ARROW_2
#define ARROW_2

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QObject>


class Arrow_2:public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:

    Arrow_2();


public slots:
   void move();


};

#endif // ARROW_2


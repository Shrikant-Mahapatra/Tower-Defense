#ifndef BALL
#define BALL

#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QObject>
#include <QTimer>


class Ball:public QObject,public QGraphicsEllipseItem
{
Q_OBJECT
public:

   Ball();
    float x_pos,y_pos;
    float dy,dx;
    float gravity1;
    float gravity2;
    void setposition(float x, float y);
    QTimer *enemy;

public slots:
   void update();


};

#endif // BALL


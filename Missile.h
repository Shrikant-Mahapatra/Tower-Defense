#ifndef MISSILE
#define MISSILE
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QObject>
#include <QTimer>

class Missile:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Missile();

public slots:
    void Missile_move();
    void frags();
};

#endif // MISSILE


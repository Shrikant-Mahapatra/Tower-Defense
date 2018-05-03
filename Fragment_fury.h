#ifndef FRAGMENT_FURY
#define FRAGMENT_FURY

#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>

class Fragment_fury:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Fragment_fury();

public slots:
    void frag_move();
};

#endif // FRAGMENT_FURY


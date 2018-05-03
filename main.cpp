#include <QApplication>
#include "Game.h"

Game* game_on;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game_on=new Game();
    game_on->show();
    return a.exec();
 }

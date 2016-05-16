#ifndef BOMB_H
#define BOMB_H

#include "bigdrums.h"


class Bomb  :  public BigDrums
{
public:
    Bomb(QWidget * parent =0);
   // static bool pressed ;


public slots:
    void clear();

};

#endif // BOMB_H






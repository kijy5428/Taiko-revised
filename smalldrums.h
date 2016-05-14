#ifndef SMALLDRUMS_H
#define SMALLDRUMS_H

#include "drums.h"

class SmallDrums : public drums
{
public:
    SmallDrums(QWidget *parent=0);

    static int xPosition ;
    static int yPosition ;


public  slots:
   virtual void moveDrums();

};

#endif // SMALLDRUMS_H

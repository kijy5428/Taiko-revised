#ifndef SMALLDRUMS_H
#define SMALLDRUMS_H

#include "drums.h"

class SmallDrums : public drums
{
public:
    SmallDrums(QWidget *parent=0);

    static int SmallDrums::xPosition ;
    static int SmallDrums::yPosition ;


public  slots:
    void moveDrums();

};

#endif // SMALLDRUMS_H

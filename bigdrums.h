#ifndef BIGDRUMS_H
#define BIGDRUMS_H

#include "drums.h"

class BigDrums :public drums
{
public:
    BigDrums(QWidget *parent=0);

    static int xPosition;
    static int yPosition;


public slots:
   void moveDrums();
};

#endif // BIGDRUMS_H

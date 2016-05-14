#include "smalldrums.h"
#include <qDebug>


int SmallDrums::xPosition =1020;
int SmallDrums::yPosition =85;

//int SmallDrums::xPosition =1010;
//int SmallDrums::yPosition =85;

SmallDrums::SmallDrums(QWidget * parent):drums(parent)
{
    drums::moveTimer->start(5);
    this->setGeometry(xPosition , yPosition,100,200);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(moveDrums()));

}


void SmallDrums::moveDrums(){

    int x = this->x();
    int y = this->y();

    if(x < 20){
        delete this;
    }

    else{
        this->move(QPoint (x - moveDistance,y));

    }

}


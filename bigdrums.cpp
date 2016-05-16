#include "bigdrums.h"
#include <QDebug>


int BigDrums::xPosition =1020;
int BigDrums::yPosition =83;


BigDrums::BigDrums(QWidget *parent):drums(parent)
{

    //drums::moveTimer->start(5);

    this->setGeometry(xPosition , yPosition,100,200);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(moveDrums()));


}

void BigDrums::moveDrums(){

    int x = this->x();
    int y = this->y();

    if(x < 10){
        delete this;
    }

    else{
        this->move(QPoint (x - moveDistance,y));

    }
}



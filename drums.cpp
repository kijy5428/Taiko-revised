#include "drums.h"
#include "QWidget"
#include "QLabel"
#include <QDebug>


int drums::score =0;
QTimer * drums ::moveTimer = new QTimer;
double drums:: moveDistance = 1;



drums::drums(QWidget *parent){

    this->setParent(parent);
    this->raise();
    this->show();
    //drums::moveTimer->start(5);

}

drums::~drums(){}


void drums:: moveDrums(){}


void drums::keyPressEvent(){

    int x = this->x();
    int y = this->y();

    this->move(QPoint (x +100,y));


}


void drums::clear(){}


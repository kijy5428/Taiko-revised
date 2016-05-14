#include "bigred.h"

BigRed::BigRed(QWidget *parent) :BigDrums(parent)
{
    pixmap = new QPixmap(":/img/pics/2.png");
    this->setPixmap(*pixmap);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(clear()));
}

void BigRed::clear(){

        if(BigRed::  pressed==true && (this->x()>15 && this->x()<60 )){
        drums::score+=40;
        delete this;
    }

}



bool BigRed::  pressed = false;

#include "smallred.h"



SmallRed::SmallRed(QWidget *parent) : SmallDrums(parent)
{

    pixmap = new QPixmap(":/img/pics/4.png");
    this->setPixmap(*pixmap);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(clear()));


}


void SmallRed::clear(){

        if(SmallRed::  pressed==true && (this->x()>15 && this->x()<65 )){
        drums::score+=20;
        delete this;

    }

}



bool SmallRed::  pressed = false;

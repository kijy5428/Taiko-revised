#include "bigblue.h"


BigBlue::BigBlue(QWidget *parent):BigDrums(parent)
{
    pixmap = new QPixmap(":/img/pics/3.png");
    this->setPixmap(*pixmap);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(clear()));
}


void BigBlue::clear(){

        if(BigBlue::  pressed==true &&  (this->x()>15 && this->x()<60 )){
        drums::score+=40;
        delete this;

    }

}

bool BigBlue::  pressed = false;

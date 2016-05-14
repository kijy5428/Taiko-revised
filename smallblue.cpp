#include "smallblue.h"
#include "smalldrums.h"


SmallBlue::SmallBlue(QWidget *parent) : SmallDrums(parent)
{
    //pixmap = new QPixmap("C:/Users/cindy/Desktop/COLLEGE/104-2/pd2/PROJECT/project2/test4/pics/1.png");
    pixmap = new QPixmap(":/img/pics/1.png");
    this->setPixmap(*pixmap);
    connect(moveTimer,SIGNAL(timeout()),this,SLOT(clear()));

}


void SmallBlue::clear(){

        if(SmallBlue::  pressed==true && (this->x()>15 && this->x()<60 )){
        drums::score+=20;
        delete this;

    }

}


bool SmallBlue::  pressed = false;



#include "bomb.h"


//bool Bomb::  pressed = false;

Bomb::Bomb(QWidget *parent):BigDrums(parent)
{
     pixmap = new QPixmap(":/img/bomb.png");
     this->setPixmap(*pixmap);
     connect(moveTimer,SIGNAL(timeout()),this,SLOT(clear()));

}


void Bomb::clear(){



    }





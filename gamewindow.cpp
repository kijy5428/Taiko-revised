#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "QLabel"
#include <QDebug>
#include <drums.h>
#include <smallblue.h>
#include <smallred.h>
#include <bigred.h>
#include <bigblue.h>
#include <smallred.h>
#include <cstdlib>
#include <ctime>
#include <QCloseEvent>
#include <bomb.h>



int GameWindow::exitcode = 10;


GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    this->setParent(parent);
    // /////////////////////////////////////////////////////////////////////////////////////////
    //                                  set labels & pictures & score
    // /////////////////////////////////////////////////////////////////////////////////////////


    drums::score = 0;
    drums::moveTimer->start(5);
    ui->setupUi(this);
    QPixmap pix(":img/pics/bg.png");
    ui->l2->setPixmap(pix);

    ui->timeLabel->setText("Time : ");
    ui->scoreLabel->setText("Score : ");


    // /////////////////////////////////////////////////////////////////////////////////////////
    //
    //                                       set time countdown
    //
    // /////////////////////////////////////////////////////////////////////////////////////////

    countdown =30;

    myTimer =   new QTimer;
    showTime();
    myTimer->start(1000);
    connect(myTimer,SIGNAL(timeout()),this,SLOT(showTime()));


    // ////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //                                   create drums actions
    //
    // ////////////////////////////////////////////////////////////////////////////////////////////////

     srand(time(0));
     drumTimer = new QTimer();
     drumTimer->start(200);
     connect(drumTimer,SIGNAL(timeout()),this,SLOT(createDrums()));

}

GameWindow::~GameWindow()
{
    delete ui;

}

void GameWindow::showTime(){

    if(countdown>=0){

        QString s = QString::number(countdown);
        ui->countLabel->setText(s);
        countdown--;

    }
    else{

        myTimer->stop();
        qApp->exit(drums::score);

    }
}



void GameWindow::createDrums(){

        int entry = rand()%2;
        int randomCreate;

        if(entry){

                randomCreate = rand()%4+1;

                switch(randomCreate){

                case 1:
                    new BigRed(this);
                    break;

                case 2:
                    new BigBlue(this);
                   break;

                case 3:
                    new SmallRed(this);
                   break;

                case 4:

                    new SmallBlue(this);
                    break;


                }
            }

}


void GameWindow::keyPressEvent(QKeyEvent * e){

        if(e->key()==Qt::Key_A){
            BigRed::pressed = true;

        }

        if(e->key()==Qt::Key_L){
            BigBlue::pressed = true;

         }

        if(e->key()==Qt::Key_S){
            SmallRed::pressed = true;

        }
        if(e->key()==Qt::Key_K){
             SmallBlue::pressed = true;

        }

        if(e->key()==Qt::Key_D){
              //drums::moveTimer->stop();
              drums::moveTimer->setInterval(30);

        }

        if(e->key()==Qt::Key_J){
             drums::moveTimer->setInterval(1);

        }

        if(e->key()==Qt::Key_Space){

             new Bomb(this);

        }

}


void GameWindow::keyReleaseEvent(QKeyEvent * e){

        if(e->key()==Qt::Key_A){
             BigRed::pressed = false;

        }

        if(e->key()==Qt::Key_L){
            BigBlue::pressed = false;

        }

        if(e->key()==Qt::Key_S){
             SmallRed::pressed = false;

        }

        if(e->key()==Qt::Key_K){
             SmallBlue::pressed = false;

        }




        ui->scoreLabel2->setText(QString::number(drums::score));

}


void GameWindow::closeEvent (QCloseEvent *event)
{
    qApp->exit(-1);
}

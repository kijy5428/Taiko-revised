#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "Qlabel"
#include <QDebug>
#include <drums.h>
#include <smallblue.h>
#include <smallred.h>
#include <bigred.h>
#include <bigblue.h>
#include <smallred.h>
#include <cstdlib>
#include <ctime>
#include <result.h>
#include <QCloseEvent>
#include "QMediaPlayer"



int MainWindow2::exitcode = 10;


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    this->setParent(parent);
    // /////////////////////////////////////////////////////////////////////////////////////////
    //                        set labels and pictures and background music
    // /////////////////////////////////////////////////////////////////////////////////////////


    drums::score = 0;

    ui->setupUi(this);
    QPixmap pix(":img/pics/bg.png");
    ui->l2->setPixmap(pix);

    ui->timeLabel->setText("Time : ");
    ui->scoreLabel->setText("Score : ");


    // /////////////////////////////////////////////////////////////////////////////////////////
    //
    //                                   set time countdown + bgm music
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
     drumTimer->start(500);
     connect(drumTimer,SIGNAL(timeout()),this,SLOT(createDrums()));


     // ////////////////////////////////////////////////////////////////////////////////////////////////
     //                                         set sounds
     // ////////////////////////////////////////////////////////////////////////////////////////////////

}

MainWindow2::~MainWindow2()
{
    delete ui;

}



void MainWindow2::showTime(){


    if(countdown>=0){

        QString s = QString::number(countdown);
        ui->countLabel->setText(s);
        countdown--;

    }
    else{

        int exitCode;
        QString s = QString::number(countdown);
        ui->countLabel->setText(s);
        myTimer->stop();
        qApp->exit(drums::score);

    }
}



void MainWindow2::createDrums(){

        int entry = rand()%2;
        int randomCreate;

        if(entry){

                randomCreate = rand()%4+1;

                switch(randomCreate){

                case 1:
                    new BigRed(this);
                    big =true;
                    break;

                case 2:
                    new BigBlue(this);
                    big =true;
                    break;

                case 3:
                    new SmallRed(this);
                    big =false;
                    break;

                case 4:

                    new SmallBlue(this);
                    big = false;
                    break;


                }
            }

}


void MainWindow2::keyPressEvent(QKeyEvent * e){

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
}


void MainWindow2::keyReleaseEvent(QKeyEvent * e){

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


void MainWindow2::closeEvent (QCloseEvent *event)
{
   delete this;
   qApp->exit(-1);
}

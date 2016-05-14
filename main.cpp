#include "drums.h"
#include "startwindow.h"
#include "gamewindow.h"
#include <QApplication>
#include "QLabel"
#include "resultwindow.h"



int main(int argc, char *argv[])
{

    int currentExitCode = 0;
    int score;
    int height = 480;
    int width = 780;

    QApplication a(argc, argv);

    StartWindow *w = new StartWindow();
    w->setFixedSize(width,height);
    w->show();

    currentExitCode = a.exec();
    delete w;


    while(currentExitCode==10){

      GameWindow* w2 = new GameWindow();
      w2->setFixedSize(width,height);
      w2->show();

      score = a.exec();//會收到結束時，附帶的信號

      if(score==-1){
            delete w2;
            break;
      }

      ResultWindow *d = new ResultWindow(0,score);
      d->setFixedSize(width,height);
      d->show();

      delete w2;
      currentExitCode = a.exec();

      delete d;

     }

    return 0 ;
}

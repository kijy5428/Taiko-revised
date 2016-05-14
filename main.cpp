#include "drums.h"
#include "mainwindow.h"
#include "mainwindow2.h"
#include <QApplication>
#include "QLabel"
#include "dialog.h"



int main(int argc, char *argv[])
{

    int currentExitCode = 0;
    int score;
    int height = 480;
    int width = 780;

    QApplication a(argc, argv);

    MainWindow *w = new MainWindow();
    w->setFixedSize(width,height);
    w->show();

    currentExitCode = a.exec();
    delete w;


    while(currentExitCode==10){

      MainWindow2* w2 = new MainWindow2();
      w2->setFixedSize(width,height);
      w2->show();

      score = a.exec();//會收到結束時，附帶的信號

      if(score==-1){
            delete w2;
            break;
      }

      Dialog *d = new Dialog(0,score);
      d->setFixedSize(width,height);
      delete w2;
      d->show();
      a.exec();
      currentExitCode =  d->result();

      delete d;


     }
    return 0 ;
}

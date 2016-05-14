#include "result.h"
#include "ui_result.h"
#include "qDebug"


Result::Result(QWidget *parent,int score) :
    QMainWindow(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
    qDebug() << score ;
    QString finalScore = "Your Score is : "+QString::number(score);
    ui->finalScoreLabel->setText(finalScore);
    connect(ui->restartLabel,SIGNAL(clicked(bool)),this,SLOT(reboot()));

}

Result::~Result()
{
    delete ui;
}

void Result::reboot(){

        //qDebug() << "Performing applicatoin reboot2";
        qApp->exit(10);//結束且隨便回傳一個值當作信號


}



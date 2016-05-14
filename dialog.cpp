#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include "drums.h"


Dialog::Dialog(QWidget *parent, int score) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setParent(parent);

    qDebug() << score ;

    QString finalScore = "Your Score is : "+QString::number(score);
    ui->finalScoreLabel->setText(finalScore);
    ui->finalScoreLabel->setGeometry(50,60,690,150); 

    ui->exitButton->setGeometry(100,260,260,100);

    ui->restartButton->setGeometry(420,260,260,100);


    connect(ui->restartButton,SIGNAL(clicked(bool)),this,SLOT(reboot()));

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::reboot(){

        qDebug() << "Performing applicatoin reboot2";
        setResult(10);
        qApp->exit();//結束且隨便回傳一個值當作信號


}

void Dialog::closeEvent (QCloseEvent *event)
{

   qApp->exit(-1);
}


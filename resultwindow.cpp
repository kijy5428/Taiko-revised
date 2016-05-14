#include "resultwindow.h"
#include "ui_resultwindow.h"
#include <QDebug>
#include "drums.h"


ResultWindow::ResultWindow(QWidget *parent, int score) :
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

ResultWindow::~ResultWindow()
{
    delete ui;
}


void ResultWindow::reboot(){

        qApp->exit(10);
}

void ResultWindow::closeEvent ()
{
   qApp->exit(-1);
}


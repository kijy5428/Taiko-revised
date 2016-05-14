#include "startwindow.h"
#include "ui_startwindow.h"
#include <QDebug>



StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/img/pics/main.jpg");
    ui->l1->setPixmap(pix);
    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(start()));
    this->setParent(parent);


}

StartWindow::~StartWindow()
{
    delete ui;
}



void StartWindow::start(){
   qApp->exit(10);

}

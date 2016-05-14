#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


int const MainWindow::EXIT_CODE_REBOOT =123;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("C:/Users/cindy/Desktop/COLLEGE/104-2/pd2/PROJECT/project2/test4/pics/main.jpg");
    QPixmap pix(":/img/pics/main.jpg");
    ui->l1->setPixmap(pix);
    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(start()));
    this->setParent(parent);

   /* taikoFont *tf = new taikoFont;
    ui->startButton->setFont(*(tf->fontType));
    ui->exitButton->setFont(*(tf->fontType));
    */

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::start(){
   qApp->exit(10);

}

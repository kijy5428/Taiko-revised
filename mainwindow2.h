#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QTimer>
#include <QTime>
#include "drums.h"
#include "dialog.h"
#include <QMediaPlayer>




namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:


    explicit MainWindow2(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent * e);
    void keyReleaseEvent(QKeyEvent * e);
    void closeEvent(QCloseEvent *event);
    ~MainWindow2();


private:
    Ui::MainWindow2 *ui;

    QTimer * myTimer;
    QTimer * drumTimer;
    QTimer * moveTimer;
    Dialog* d ;    
    int skip;
    int countdown;
    int smallDrumType;
    bool  big = false;
    //taikoFont *tf;
    static int exitcode;
    static QMediaPlayer * player1 ;
    static QMediaPlayer * player2 ;
    static QMediaPlayer * player3 ;
    static QMediaPlayer * player4 ;
    static QMediaPlayer * bgmplayer ;



private slots:
    void showTime();
    void createDrums();

};

#endif // MAINWINDOW2_H

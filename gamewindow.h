#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QTimer>
#include <QTime>
#include "drums.h"
#include "resultwindow.h"


namespace Ui {
class MainWindow2;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();


private:

    void keyPressEvent(QKeyEvent * e);
    void keyReleaseEvent(QKeyEvent * e);
    void closeEvent(QCloseEvent *event);

    Ui::MainWindow2 *ui;
    QTimer * myTimer;
    QTimer * drumTimer;
    int countdown;
    static int exitcode;


private slots:
    void showTime();
    void createDrums();

};

#endif // MAINWINDOW2_H

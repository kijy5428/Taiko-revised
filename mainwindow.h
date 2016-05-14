#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static  int const EXIT_CODE_REBOOT;

private:
    Ui::MainWindow *ui;

private slots:
    void start();
};

#endif // MAINWINDOW_H

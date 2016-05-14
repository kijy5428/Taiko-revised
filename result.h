#ifndef RESULT_H
#define RESULT_H

#include <QMainWindow>

namespace Ui {
class Result;
}

class Result : public QMainWindow
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = 0, int score =0);
    ~Result();

private:
    Ui::Result *ui;

private slots:
    void reboot();


};

#endif // RESULT_H

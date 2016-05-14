#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent, int score);
    void closeEvent (QCloseEvent *event);
    ~Dialog();

public slots:
    void reboot();

private slots:
    //void on_exitButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

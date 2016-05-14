#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class ResultWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ResultWindow(QWidget *parent, int score);

    ~ResultWindow();

private:
    void closeEvent ();
    Ui::Dialog *ui;


private slots:
    void reboot();
};

#endif // DIALOG_H

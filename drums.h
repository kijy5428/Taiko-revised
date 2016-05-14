#ifndef DRUMS_H
#define DRUMS_H

#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>



class drums : public QLabel
{
     Q_OBJECT

public:

    QPixmap *pixmap;
    static QTimer *moveTimer;
    static double moveDistance;
    static int  score;

    drums(QWidget *parent=0);
    ~drums();


public slots:

    virtual void moveDrums();
    virtual  void clear();
    void keyPressEvent();


};

#endif // DRUMS_H

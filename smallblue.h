#ifndef SMALLBLUE_H
#define SMALLBLUE_H
#include "smalldrums.h"

class SmallBlue : public SmallDrums
{
public:
    SmallBlue(QWidget * parent =0);
    static bool pressed ;


public slots:
    void clear();

};



#endif // SMALLBLUE_H

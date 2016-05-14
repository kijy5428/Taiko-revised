#ifndef SMALLRED_H
#define SMALLRED_H
#include "smalldrums.h"

class SmallRed : public SmallDrums
{
public:
    SmallRed(QWidget * parent =0);

    static bool pressed ;
    void clear();
};



#endif // SMALLRED_H

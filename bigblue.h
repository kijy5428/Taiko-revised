#ifndef BIGBLUE_H
#define BIGBLUE_H

#include "bigdrums.h"


class BigBlue : public BigDrums
{
public:
    BigBlue(QWidget * parent =0);

    static bool pressed ;

public slots:
    void clear();

};

#endif // BIGBLUE_H

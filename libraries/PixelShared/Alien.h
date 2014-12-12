//
//  Alien.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#ifndef PixelGameLocal_Alien_h
#define PixelGameLocal_Alien_h
#include "Live.h"

class Alien :public Live
{
public:
    float fxStart;
    bool isDead;

    Alien() : isDead(false) { hasHitRect =true; }
    virtual void setDead()
    {
        isDead =true;
    }
    virtual void reset()
    {
    }
    virtual void update(float /*timeElapsed*/)
    {
    }
    void setLevelPos(float levelfx)
    {
        fx =  fxReal-levelfx;
    }
};


#endif

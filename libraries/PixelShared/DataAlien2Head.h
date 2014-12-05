//generated pixeldata
#ifndef _DataAlien2Head_h
#define _DataAlien2Head_h
#include "PixelData.h"
namespace _Alien2Head_ {
    const uint8_t indices[56] = {
        255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
    };
    const uint8_t color[12] = {
        141
        ,198
        ,63
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
class DataAlien2Head : public PixelDataImpl<DataAlien2Head> { 
public:
       static int width() { return 8; }
       static int height() { return 7; }
       static const uint8_t* indices() { return _Alien2Head_::indices; }
       static const uint8_t* color() { return _Alien2Head_::color; }
};
#endif

//generated pixeldata
#ifndef _Dataflower_h
#define _Dataflower_h
#include "PixelData.h"
namespace _flower_ {
    const uint8_t indices[9] = {
        255
        ,0
        ,255
        ,0
        ,4
        ,0
        ,255
        ,0
        ,255
    };
    const uint8_t color[8] = {
        255
        ,255
        ,255
        ,255
        ,190
        ,175
        ,98
        ,255
    };
}
class Dataflower : public PixelDataImpl<Dataflower> { 
public:
       static int width() { return 3; }
       static int height() { return 3; }
       static const uint8_t* indices() { return _flower_::indices; }
       static const uint8_t* color() { return _flower_::color; }
};
#endif

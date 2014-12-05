//generated pixeldata
#ifndef _DataSpaceHead_h
#define _DataSpaceHead_h
#include "PixelData.h"
namespace _SpaceHead_ {
    const uint8_t indices[56] = {
        255
        ,255
        ,0
        ,4
        ,0
        ,255
        ,255
        ,255
        ,0
        ,8
        ,4
        ,0
        ,0
        ,255
        ,0
        ,12
        ,0
        ,0
        ,0
        ,0
        ,0
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
        ,20
        ,20
        ,20
        ,20
        ,20
        ,16
        ,16
        ,24
        ,20
        ,24
        ,20
        ,24
        ,16
        ,16
        ,20
        ,20
        ,20
        ,20
        ,20
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
        ,16
    };
    const uint8_t color[28] = {
        255
        ,0
        ,0
        ,255
        ,255
        ,62
        ,32
        ,255
        ,255
        ,96
        ,50
        ,255
        ,255
        ,82
        ,40
        ,255
        ,141
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
class DataSpaceHead : public PixelDataImpl<DataSpaceHead> { 
public:
       static int width() { return 7; }
       static int height() { return 8; }
       static const uint8_t* indices() { return _SpaceHead_::indices; }
       static const uint8_t* color() { return _SpaceHead_::color; }
};
#endif

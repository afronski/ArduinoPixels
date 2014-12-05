//generated pixeldata
#ifndef _DataManJumpHit_h
#define _DataManJumpHit_h
#include "PixelData.h"
namespace _ManJumpHit_ {
    const uint8_t indices[90] = {
        255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
        ,255
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,8
        ,8
        ,8
        ,4
        ,4
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
    };
    const uint8_t color[12] = {
        0
        ,0
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,34
        ,59
        ,169
        ,255
    };
}
class DataManJumpHit : public PixelDataImpl<DataManJumpHit> { 
public:
       static int width() { return 9; }
       static int height() { return 10; }
       static const uint8_t* indices() { return _ManJumpHit_::indices; }
       static const uint8_t* color() { return _ManJumpHit_::color; }
};
#endif

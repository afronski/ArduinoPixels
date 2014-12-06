//generated pixeldata
#ifndef _DataManStandHit2_h
#define _DataManStandHit2_h
#include "PixelData.h"
namespace _ManStandHit2_ {
    const uint8_t indices[80] = {
        255
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
        ,4
        ,4
        ,4
        ,4
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
        ,4
        ,255
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,8
        ,8
        ,4
        ,255
        ,0
        ,0
        ,0
        ,0
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
class DataManStandHit2 : public PixelDataImpl<DataManStandHit2> { 
public:
       static constexpr int width() { return 8; }
       static constexpr int height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManStandHit2_::indices; }
       static constexpr const uint8_t* color() { return _ManStandHit2_::color; }
};
#endif

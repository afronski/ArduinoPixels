//generated pixeldata
#ifndef _DataManStandHit1_h
#define _DataManStandHit1_h
#include "PixelData.h"
namespace _ManStandHit1_ {
    const uint8_t indices[80] = {
        255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
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
        ,255
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
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
        ,12
        ,12
        ,16
        ,12
        ,12
        ,12
        ,4
        ,255
        ,12
        ,12
        ,12
        ,4
        ,255
        ,255
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
    };
    const uint8_t color[20] = {
        84
        ,60
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,0
        ,0
        ,0
        ,255
        ,35
        ,35
        ,35
        ,255
        ,255
        ,255
        ,255
        ,255
    };
}
struct DataManStandHit1 : public PixelDataImpl<DataManStandHit1> {
       static constexpr uint8_t width() { return 8; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManStandHit1_::indices; }
       static constexpr const uint8_t* color() { return _ManStandHit1_::color; }
       constexpr DataManStandHit1(){}
};
#endif

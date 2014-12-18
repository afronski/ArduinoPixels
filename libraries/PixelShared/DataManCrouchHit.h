//generated pixeldata
#ifndef _DataManCrouchHit_h
#define _DataManCrouchHit_h
#include "PixelData.h"
namespace _ManCrouchHit_ {
    const uint8_t indices[64] = {
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
        ,8
        ,8
        ,4
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,255
        ,0
        ,4
        ,255
        ,12
        ,0
        ,255
        ,255
        ,255
    };
    const uint8_t color[16] = {
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
        ,0
        ,0
        ,0
        ,2
    };
}
struct DataManCrouchHit : public PixelDataImpl<DataManCrouchHit> {
       static constexpr uint8_t width() { return 8; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManCrouchHit_::indices; }
       static constexpr const uint8_t* color() { return _ManCrouchHit_::color; }
       constexpr DataManCrouchHit(){}
};
#endif

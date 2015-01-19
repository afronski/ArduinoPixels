//generated pixeldata
#ifndef _DataManJumpHit_h
#define _DataManJumpHit_h
#include "PixelData.h"
namespace _ManJumpHit_ {
    const uint8_t indices[81] = {
        255
        ,255
        ,255
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
        ,255
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
        ,12
        ,16
        ,12
        ,12
        ,12
        ,4
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
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
struct DataManJumpHit : public PixelDataImpl<DataManJumpHit> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _ManJumpHit_::indices; }
       static constexpr const uint8_t* color() { return _ManJumpHit_::color; }
       constexpr DataManJumpHit(){}
};
#endif

//generated pixeldata
#ifndef _DataManCrouchKick_h
#define _DataManCrouchKick_h
#include "PixelData.h"
namespace _ManCrouchKick_ {
    const uint8_t indices[64] = {
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
        ,8
        ,8
        ,8
        ,4
        ,8
        ,255
        ,255
        ,4
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
struct DataManCrouchKick : public PixelDataImpl<DataManCrouchKick> {
       static constexpr uint8_t width() { return 8; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManCrouchKick_::indices; }
       static constexpr const uint8_t* color() { return _ManCrouchKick_::color; }
};
#endif

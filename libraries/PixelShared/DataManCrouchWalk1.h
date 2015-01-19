//generated pixeldata
#ifndef _DataManCrouchWalk1_h
#define _DataManCrouchWalk1_h
#include "PixelData.h"
namespace _ManCrouchWalk1_ {
    const uint8_t indices[48] = {
        255
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
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,12
        ,12
        ,16
        ,12
        ,255
        ,255
        ,4
        ,255
        ,255
        ,8
        ,4
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
struct DataManCrouchWalk1 : public PixelDataImpl<DataManCrouchWalk1> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManCrouchWalk1_::indices; }
       static constexpr const uint8_t* color() { return _ManCrouchWalk1_::color; }
};
#endif

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
struct Dataflower : public PixelDataImpl<Dataflower> {
       static constexpr uint8_t width() { return 3; }
       static constexpr uint8_t height() { return 3; }
       static constexpr const uint8_t* indices() { return _flower_::indices; }
       static constexpr const uint8_t* color() { return _flower_::color; }
};
#endif

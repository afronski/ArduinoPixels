//generated pixeldata
#ifndef _DataBackSpace_h
#define _DataBackSpace_h
#include "PixelData.h"
namespace _BackSpace_ {
    const uint8_t indices[16] = {
        0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
    };
    const uint8_t color[4] = {
        0
        ,0
        ,0
        ,255
    };
}
struct DataBackSpace : public PixelDataImpl<DataBackSpace> {
       static constexpr uint8_t width() { return 1; }
       static constexpr uint8_t height() { return 16; }
       static constexpr const uint8_t* indices() { return _BackSpace_::indices; }
       static constexpr const uint8_t* color() { return _BackSpace_::color; }
       constexpr DataBackSpace(){}
};
#endif

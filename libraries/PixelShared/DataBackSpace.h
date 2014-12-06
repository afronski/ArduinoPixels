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
class DataBackSpace : public PixelDataImpl<DataBackSpace> { 
public:
       static constexpr int width() { return 1; }
       static constexpr int height() { return 16; }
       static constexpr const uint8_t* indices() { return _BackSpace_::indices; }
       static constexpr const uint8_t* color() { return _BackSpace_::color; }
};
#endif

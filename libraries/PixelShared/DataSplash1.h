//generated pixeldata
#ifndef _DataSplash1_h
#define _DataSplash1_h
#include "PixelData.h"
namespace _Splash1_ {
    const uint8_t indices[24] = {
        255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
    };
    const uint8_t color[8] = {
        84
        ,141
        ,162
        ,255
        ,103
        ,202
        ,234
        ,255
    };
}
class DataSplash1 : public PixelDataImpl<DataSplash1> { 
public:
       static constexpr int width() { return 6; }
       static constexpr int height() { return 4; }
       static constexpr const uint8_t* indices() { return _Splash1_::indices; }
       static constexpr const uint8_t* color() { return _Splash1_::color; }
};
#endif

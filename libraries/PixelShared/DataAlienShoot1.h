//generated pixeldata
#ifndef _DataAlienShoot1_h
#define _DataAlienShoot1_h
#include "PixelData.h"
namespace _AlienShoot1_ {
    const uint8_t indices[9] = {
        0
        ,255
        ,0
        ,255
        ,4
        ,255
        ,0
        ,255
        ,0
    };
    const uint8_t color[8] = {
        141
        ,198
        ,63
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
template<int8_t WidthOffset=0, int8_t HeightOffset=0>
struct DataAlienShoot1 : public PixelDataImpl<DataAlienShoot1<WidthOffset, HeightOffset> > {
       static constexpr uint8_t width() { return 3; }
       static constexpr uint8_t height() { return 3; }
       static constexpr int8_t widthOffset() { return WidthOffset; }
       static constexpr int8_t heightOffset() { return HeightOffset; }
       static constexpr const uint8_t* indices() { return _AlienShoot1_::indices; }
       static constexpr const uint8_t* color() { return _AlienShoot1_::color; }
       constexpr DataAlienShoot1(){}
};
#endif

//generated pixeldata
#ifndef _DataGirlDeath_h
#define _DataGirlDeath_h
#include "PixelData.h"
namespace _GirlDeath_ {
    const uint8_t indices[63] = {
        255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,4
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[16] = {
        208
        ,185
        ,128
        ,255
        ,255
        ,255
        ,214
        ,255
        ,128
        ,128
        ,128
        ,255
        ,255
        ,255
        ,255
        ,255
    };
}
template<int8_t WidthOffset=0, int8_t HeightOffset=0>
struct DataGirlDeath : public PixelDataImpl<DataGirlDeath<WidthOffset, HeightOffset> > {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 9; }
       static constexpr int8_t widthOffset() { return WidthOffset; }
       static constexpr int8_t heightOffset() { return HeightOffset; }
       static constexpr const uint8_t* indices() { return _GirlDeath_::indices; }
       static constexpr const uint8_t* color() { return _GirlDeath_::color; }
       constexpr DataGirlDeath(){}
};
#endif

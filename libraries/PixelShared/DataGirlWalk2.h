//generated pixeldata
#ifndef _DataGirlWalk2_h
#define _DataGirlWalk2_h
#include "PixelData.h"
namespace _GirlWalk2_ {
    const uint8_t indices[49] = {
        255
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
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,12
        ,12
        ,4
        ,12
        ,12
        ,4
        ,255
        ,255
        ,16
        ,255
        ,255
        ,16
        ,255
    };
    const uint8_t color[20] = {
        255
        ,234
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
        ,255
        ,0
        ,10
        ,255
        ,39
        ,15
        ,2
        ,255
    };
}
struct DataGirlWalk2 : public PixelDataImpl<DataGirlWalk2> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlWalk2_::indices; }
       static constexpr const uint8_t* color() { return _GirlWalk2_::color; }
};
#endif

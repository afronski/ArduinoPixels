//generated pixeldata
#ifndef _DataGirlWalk1_h
#define _DataGirlWalk1_h
#include "PixelData.h"
namespace _GirlWalk1_ {
    const uint8_t indices[56] = {
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
        ,255
        ,12
        ,4
        ,12
        ,12
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,16
        ,255
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
struct DataGirlWalk1 : public PixelDataImpl<DataGirlWalk1> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _GirlWalk1_::indices; }
       static constexpr const uint8_t* color() { return _GirlWalk1_::color; }
       constexpr DataGirlWalk1(){}
};
#endif

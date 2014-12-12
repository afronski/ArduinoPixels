//generated pixeldata
#ifndef _DataGirlWalk1_h
#define _DataGirlWalk1_h
#include "PixelData.h"
namespace _GirlWalk1_ {
    const uint8_t indices[60] = {
        255
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
        ,255
        ,255
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
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,12
        ,4
        ,12
        ,12
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[16] = {
        125
        ,90
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
        ,255
        ,204
        ,255
    };
}
struct DataGirlWalk1 : public PixelDataImpl<DataGirlWalk1> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _GirlWalk1_::indices; }
       static constexpr const uint8_t* color() { return _GirlWalk1_::color; }
};
#endif

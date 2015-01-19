//generated pixeldata
#ifndef _DataGirlCrouchWalk1_h
#define _DataGirlCrouchWalk1_h
#include "PixelData.h"
namespace _GirlCrouchWalk1_ {
    const uint8_t indices[49] = {
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
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,255
        ,4
        ,255
        ,255
        ,8
        ,4
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
struct DataGirlCrouchWalk1 : public PixelDataImpl<DataGirlCrouchWalk1> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouchWalk1_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchWalk1_::color; }
       constexpr DataGirlCrouchWalk1(){}
};
#endif

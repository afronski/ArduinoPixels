//generated pixeldata
#ifndef _DataGirlCrouchWalk2_h
#define _DataGirlCrouchWalk2_h
#include "PixelData.h"
namespace _GirlCrouchWalk2_ {
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
        ,4
        ,8
        ,255
        ,255
        ,4
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
struct DataGirlCrouchWalk2 : public PixelDataImpl<DataGirlCrouchWalk2> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouchWalk2_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchWalk2_::color; }
       constexpr DataGirlCrouchWalk2(){}
};
#endif

//generated pixeldata
#ifndef _DataGirlCrouchWalk2_h
#define _DataGirlCrouchWalk2_h
#include "PixelData.h"
namespace _GirlCrouchWalk2_ {
    const uint8_t indices[42] = {
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
        ,8
        ,8
        ,8
        ,255
        ,255
        ,0
        ,8
        ,12
        ,8
        ,12
        ,255
        ,0
        ,0
        ,8
        ,8
        ,8
        ,8
        ,0
        ,255
        ,255
        ,16
        ,16
        ,16
        ,16
        ,255
        ,255
        ,8
        ,20
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[24] = {
        255
        ,234
        ,0
        ,255
        ,255
        ,201
        ,135
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
struct DataGirlCrouchWalk2 : public PixelDataImpl<DataGirlCrouchWalk2> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 6; }
       static constexpr const uint8_t* indices() { return _GirlCrouchWalk2_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchWalk2_::color; }
       constexpr DataGirlCrouchWalk2(){}
};
#endif

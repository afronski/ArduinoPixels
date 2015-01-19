//generated pixeldata
#ifndef _DataGirlCrouchHit_h
#define _DataGirlCrouchHit_h
#include "PixelData.h"
namespace _GirlCrouchHit_ {
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
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,255
        ,255
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,12
        ,12
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,255
        ,255
        ,8
        ,4
        ,255
        ,255
        ,8
        ,255
        ,255
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
struct DataGirlCrouchHit : public PixelDataImpl<DataGirlCrouchHit> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouchHit_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchHit_::color; }
       constexpr DataGirlCrouchHit(){}
};
#endif

//generated pixeldata
#ifndef _DataGirlCrouchKick_h
#define _DataGirlCrouchKick_h
#include "PixelData.h"
namespace _GirlCrouchKick_ {
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
        ,8
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,255
        ,255
        ,4
        ,8
        ,255
        ,255
        ,4
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
struct DataGirlCrouchKick : public PixelDataImpl<DataGirlCrouchKick> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouchKick_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchKick_::color; }
};
#endif

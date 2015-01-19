//generated pixeldata
#ifndef _DataGirlJump_h
#define _DataGirlJump_h
#include "PixelData.h"
namespace _GirlJump_ {
    const uint8_t indices[54] = {
        255
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
        ,4
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,8
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
struct DataGirlJump : public PixelDataImpl<DataGirlJump> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _GirlJump_::indices; }
       static constexpr const uint8_t* color() { return _GirlJump_::color; }
};
#endif

//generated pixeldata
#ifndef _DataGirlStandHit2_h
#define _DataGirlStandHit2_h
#include "PixelData.h"
namespace _GirlStandHit2_ {
    const uint8_t indices[81] = {
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
        ,0
        ,255
        ,255
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
        ,255
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,16
        ,16
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
        ,255
        ,8
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
    };
    const uint8_t color[20] = {
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
        ,255
        ,255
        ,255
        ,255
    };
}
struct DataGirlStandHit2 : public PixelDataImpl<DataGirlStandHit2> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _GirlStandHit2_::indices; }
       static constexpr const uint8_t* color() { return _GirlStandHit2_::color; }
};
#endif

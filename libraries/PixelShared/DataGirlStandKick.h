//generated pixeldata
#ifndef _DataGirlStandKick_h
#define _DataGirlStandKick_h
#include "PixelData.h"
namespace _GirlStandKick_ {
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
        ,255
        ,255
        ,255
        ,255
        ,4
        ,12
        ,12
        ,4
        ,12
        ,4
        ,4
        ,8
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
        ,255
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
struct DataGirlStandKick : public PixelDataImpl<DataGirlStandKick> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _GirlStandKick_::indices; }
       static constexpr const uint8_t* color() { return _GirlStandKick_::color; }
       constexpr DataGirlStandKick(){}
};
#endif

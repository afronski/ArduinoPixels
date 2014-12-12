//generated pixeldata
#ifndef _DataGirlStandKick_h
#define _DataGirlStandKick_h
#include "PixelData.h"
namespace _GirlStandKick_ {
    const uint8_t indices[72] = {
        255
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
        ,8
        ,8
        ,8
        ,255
        ,255
        ,255
        ,255
        ,0
        ,8
        ,12
        ,8
        ,12
        ,255
        ,255
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
        ,255
        ,255
        ,16
        ,16
        ,16
        ,16
        ,255
        ,255
        ,255
        ,255
        ,8
        ,16
        ,16
        ,8
        ,16
        ,255
        ,255
        ,255
        ,255
        ,16
        ,16
        ,16
        ,16
        ,16
        ,8
        ,8
        ,20
        ,255
        ,255
        ,20
        ,255
        ,255
        ,255
        ,255
        ,255
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
struct DataGirlStandKick : public PixelDataImpl<DataGirlStandKick> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _GirlStandKick_::indices; }
       static constexpr const uint8_t* color() { return _GirlStandKick_::color; }
};
#endif

//generated pixeldata
#ifndef _DataGirlGotHit2_h
#define _DataGirlGotHit2_h
#include "PixelData.h"
namespace _GirlGotHit2_ {
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
        ,8
        ,8
        ,12
        ,16
        ,8
        ,20
        ,255
        ,0
        ,8
        ,12
        ,8
        ,8
        ,0
        ,16
        ,255
        ,0
        ,0
        ,8
        ,8
        ,8
        ,8
        ,16
        ,16
        ,255
        ,255
        ,255
        ,255
        ,255
        ,16
        ,16
        ,16
        ,16
        ,20
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
        ,16
        ,255
    };
    const uint8_t color[24] = {
        125
        ,90
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
        ,179
        ,134
        ,85
        ,255
        ,255
        ,255
        ,204
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
struct DataGirlGotHit2 : public PixelDataImpl<DataGirlGotHit2> {
       static constexpr uint8_t width() { return 9; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlGotHit2_::indices; }
       static constexpr const uint8_t* color() { return _GirlGotHit2_::color; }
       constexpr DataGirlGotHit2(){}
};
#endif

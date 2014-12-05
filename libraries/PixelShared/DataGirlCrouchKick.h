//generated pixeldata
#ifndef _DataGirlCrouchKick_h
#define _DataGirlCrouchKick_h
#include "PixelData.h"
namespace _GirlCrouchKick_ {
    const uint8_t indices[54] = {
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
        ,8
        ,8
        ,20
        ,255
        ,8
        ,20
        ,255
        ,24
        ,8
        ,255
        ,255
        ,255
    };
    const uint8_t color[28] = {
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
        ,0
        ,0
        ,0
        ,2
    };
}
class DataGirlCrouchKick : public PixelDataImpl<DataGirlCrouchKick> { 
public:
       static int width() { return 9; }
       static int height() { return 6; }
       static const uint8_t* indices() { return _GirlCrouchKick_::indices; }
       static const uint8_t* color() { return _GirlCrouchKick_::color; }
};
#endif

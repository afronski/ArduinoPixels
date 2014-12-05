//generated pixeldata
#ifndef _DataGirlCrouchHit_h
#define _DataGirlCrouchHit_h
#include "PixelData.h"
namespace _GirlCrouchHit_ {
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
        ,0
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
        ,16
        ,4
        ,255
        ,20
        ,16
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
class DataGirlCrouchHit : public PixelDataImpl<DataGirlCrouchHit> { 
public:
       static int width() { return 9; }
       static int height() { return 6; }
       static const uint8_t* indices() { return _GirlCrouchHit_::indices; }
       static const uint8_t* color() { return _GirlCrouchHit_::color; }
};
#endif

//generated pixeldata
#ifndef _DataGirlCrouchBlock_h
#define _DataGirlCrouchBlock_h
#include "PixelData.h"
namespace _GirlCrouchBlock_ {
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
        ,0
        ,0
        ,0
        ,8
        ,8
        ,8
        ,8
        ,8
        ,255
        ,16
        ,16
        ,16
        ,16
        ,16
        ,8
        ,255
        ,255
        ,20
        ,255
        ,255
        ,20
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
        ,237
        ,28
        ,36
        ,255
        ,39
        ,15
        ,2
        ,255
    };
}
class DataGirlCrouchBlock : public PixelDataImpl<DataGirlCrouchBlock> { 
public:
       static int width() { return 7; }
       static int height() { return 6; }
       static const uint8_t* indices() { return _GirlCrouchBlock_::indices; }
       static const uint8_t* color() { return _GirlCrouchBlock_::color; }
};
#endif

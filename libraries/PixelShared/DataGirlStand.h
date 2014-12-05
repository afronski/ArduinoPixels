//generated pixeldata
#ifndef _DataGirlStand_h
#define _DataGirlStand_h
#include "PixelData.h"
namespace _GirlStand_ {
    const uint8_t indices[56] = {
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
        ,16
        ,16
        ,16
        ,16
        ,255
        ,255
        ,255
        ,16
        ,16
        ,16
        ,16
        ,8
        ,255
        ,16
        ,8
        ,16
        ,16
        ,16
        ,16
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
        ,239
        ,0
        ,0
        ,255
        ,39
        ,15
        ,2
        ,255
    };
}
class DataGirlStand : public PixelDataImpl<DataGirlStand> { 
public:
       static int width() { return 7; }
       static int height() { return 8; }
       static const uint8_t* indices() { return _GirlStand_::indices; }
       static const uint8_t* color() { return _GirlStand_::color; }
};
#endif

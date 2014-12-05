//generated pixeldata
#ifndef _DataBoyShoot2_h
#define _DataBoyShoot2_h
#include "PixelData.h"
namespace _BoyShoot2_ {
    const uint8_t indices[20] = {
        255
        ,0
        ,255
        ,4
        ,255
        ,4
        ,255
        ,8
        ,12
        ,12
        ,0
        ,255
        ,4
        ,255
        ,4
        ,255
        ,8
        ,255
        ,12
        ,12
    };
    const uint8_t color[16] = {
        147
        ,255
        ,0
        ,150
        ,147
        ,255
        ,0
        ,219
        ,147
        ,255
        ,0
        ,245
        ,147
        ,255
        ,0
        ,236
    };
}
class DataBoyShoot2 : public PixelDataImpl<DataBoyShoot2> { 
public:
       static int width() { return 10; }
       static int height() { return 2; }
       static const uint8_t* indices() { return _BoyShoot2_::indices; }
       static const uint8_t* color() { return _BoyShoot2_::color; }
};
#endif

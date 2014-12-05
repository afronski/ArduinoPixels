//generated pixeldata
#ifndef _DataLifeLight_h
#define _DataLifeLight_h
#include "PixelData.h"
namespace _LifeLight_ {
    const uint8_t indices[49] = {
        255
        ,255
        ,0
        ,255
        ,0
        ,255
        ,255
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,255
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
        ,255
        ,0
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
        ,0
        ,255
        ,0
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
    };
    const uint8_t color[4] = {
        253
        ,207
        ,0
        ,255
    };
}
class DataLifeLight : public PixelDataImpl<DataLifeLight> { 
public:
       static int width() { return 7; }
       static int height() { return 7; }
       static const uint8_t* indices() { return _LifeLight_::indices; }
       static const uint8_t* color() { return _LifeLight_::color; }
};
#endif

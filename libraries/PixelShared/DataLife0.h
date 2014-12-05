//generated pixeldata
#ifndef _DataLife0_h
#define _DataLife0_h
#include "PixelData.h"
namespace _Life0_ {
    const uint8_t indices[25] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
    };
    const uint8_t color[4] = {
        156
        ,156
        ,156
        ,255
    };
}
class DataLife0 : public PixelDataImpl<DataLife0> { 
public:
       static int width() { return 5; }
       static int height() { return 5; }
       static const uint8_t* indices() { return _Life0_::indices; }
       static const uint8_t* color() { return _Life0_::color; }
};
#endif

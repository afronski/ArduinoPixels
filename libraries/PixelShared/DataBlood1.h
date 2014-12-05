//generated pixeldata
#ifndef _DataBlood1_h
#define _DataBlood1_h
#include "PixelData.h"
namespace _Blood1_ {
    const uint8_t indices[9] = {
        255
        ,0
        ,255
        ,0
        ,0
        ,0
        ,255
        ,0
        ,255
    };
    const uint8_t color[4] = {
        151
        ,0
        ,0
        ,255
    };
}
class DataBlood1 : public PixelDataImpl<DataBlood1> { 
public:
       static int width() { return 3; }
       static int height() { return 3; }
       static const uint8_t* indices() { return _Blood1_::indices; }
       static const uint8_t* color() { return _Blood1_::color; }
};
#endif

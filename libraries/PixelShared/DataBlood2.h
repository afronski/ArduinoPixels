//generated pixeldata
#ifndef _DataBlood2_h
#define _DataBlood2_h
#include "PixelData.h"
namespace _Blood2_ {
    const uint8_t indices[25] = {
        0
        ,255
        ,255
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
        ,255
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,255
        ,255
        ,0
    };
    const uint8_t color[4] = {
        151
        ,0
        ,0
        ,255
    };
}
class DataBlood2 : public PixelDataImpl<DataBlood2> { 
public:
       static int width() { return 5; }
       static int height() { return 5; }
       static const uint8_t* indices() { return _Blood2_::indices; }
       static const uint8_t* color() { return _Blood2_::color; }
};
#endif

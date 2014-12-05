//generated pixeldata
#ifndef _DataBlood3_h
#define _DataBlood3_h
#include "PixelData.h"
namespace _Blood3_ {
    const uint8_t indices[21] = {
        0
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,255
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
class DataBlood3 : public PixelDataImpl<DataBlood3> { 
public:
       static int width() { return 7; }
       static int height() { return 3; }
       static const uint8_t* indices() { return _Blood3_::indices; }
       static const uint8_t* color() { return _Blood3_::color; }
};
#endif

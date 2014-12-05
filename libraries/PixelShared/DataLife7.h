//generated pixeldata
#ifndef _DataLife7_h
#define _DataLife7_h
#include "PixelData.h"
namespace _Life7_ {
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
        ,4
        ,0
        ,0
        ,0
        ,0
        ,4
        ,255
        ,0
        ,0
        ,4
        ,255
        ,255
        ,255
        ,4
        ,255
        ,255
    };
    const uint8_t color[8] = {
        249
        ,0
        ,0
        ,255
        ,180
        ,0
        ,0
        ,255
    };
}
class DataLife7 : public PixelDataImpl<DataLife7> { 
public:
       static int width() { return 5; }
       static int height() { return 5; }
       static const uint8_t* indices() { return _Life7_::indices; }
       static const uint8_t* color() { return _Life7_::color; }
};
#endif

//generated pixeldata
#ifndef _DataLife4_h
#define _DataLife4_h
#include "PixelData.h"
namespace _Life4_ {
    const uint8_t indices[25] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,0
        ,0
        ,4
        ,8
        ,4
        ,4
        ,4
        ,4
        ,8
        ,255
        ,4
        ,4
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
    };
    const uint8_t color[12] = {
        156
        ,156
        ,156
        ,255
        ,249
        ,0
        ,0
        ,255
        ,180
        ,0
        ,0
        ,255
    };
}
class DataLife4 : public PixelDataImpl<DataLife4> { 
public:
       static int width() { return 5; }
       static int height() { return 5; }
       static const uint8_t* indices() { return _Life4_::indices; }
       static const uint8_t* color() { return _Life4_::color; }
};
#endif

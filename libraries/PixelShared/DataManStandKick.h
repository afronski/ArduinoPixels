//generated pixeldata
#ifndef _DataManStandKick_h
#define _DataManStandKick_h
#include "PixelData.h"
namespace _ManStandKick_ {
    const uint8_t indices[70] = {
        255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,4
        ,8
        ,8
        ,4
        ,8
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,255
        ,255
        ,255
        ,255
        ,255
    };
    const uint8_t color[12] = {
        0
        ,0
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,34
        ,59
        ,169
        ,255
    };
}
class DataManStandKick : public PixelDataImpl<DataManStandKick> { 
public:
       static int width() { return 7; }
       static int height() { return 10; }
       static const uint8_t* indices() { return _ManStandKick_::indices; }
       static const uint8_t* color() { return _ManStandKick_::color; }
};
#endif

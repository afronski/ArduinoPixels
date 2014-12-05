//generated pixeldata
#ifndef _DataBoyDeath_h
#define _DataBoyDeath_h
#include "PixelData.h"
namespace _BoyDeath_ {
    const uint8_t indices[60] = {
        255
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
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,4
        ,8
        ,8
        ,8
        ,8
        ,4
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,255
        ,255
        ,0
        ,255
    };
    const uint8_t color[12] = {
        150
        ,168
        ,181
        ,230
        ,255
        ,235
        ,220
        ,230
        ,164
        ,188
        ,230
        ,230
    };
}
class DataBoyDeath : public PixelDataImpl<DataBoyDeath> { 
public:
       static int width() { return 6; }
       static int height() { return 10; }
       static const uint8_t* indices() { return _BoyDeath_::indices; }
       static const uint8_t* color() { return _BoyDeath_::color; }
};
#endif

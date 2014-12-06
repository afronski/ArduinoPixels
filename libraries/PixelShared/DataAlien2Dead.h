//generated pixeldata
#ifndef _DataAlien2Dead_h
#define _DataAlien2Dead_h
#include "PixelData.h"
namespace _Alien2Dead_ {
    const uint8_t indices[56] = {
        255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
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
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
    };
    const uint8_t color[12] = {
        208
        ,235
        ,199
        ,230
        ,255
        ,255
        ,255
        ,230
        ,150
        ,168
        ,181
        ,230
    };
}
class DataAlien2Dead : public PixelDataImpl<DataAlien2Dead> { 
public:
       static constexpr int width() { return 8; }
       static constexpr int height() { return 7; }
       static constexpr const uint8_t* indices() { return _Alien2Dead_::indices; }
       static constexpr const uint8_t* color() { return _Alien2Dead_::color; }
};
#endif

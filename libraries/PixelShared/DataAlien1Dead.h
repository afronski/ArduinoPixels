//generated pixeldata
#ifndef _DataAlien1Dead_h
#define _DataAlien1Dead_h
#include "PixelData.h"
namespace _Alien1Dead_ {
    const uint8_t indices[54] = {
        0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,0
        ,8
        ,4
        ,8
        ,4
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
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
        ,255
        ,255
        ,0
        ,255
        ,0
        ,0
        ,255
        ,0
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
class DataAlien1Dead : public PixelDataImpl<DataAlien1Dead> { 
public:
       static constexpr int width() { return 6; }
       static constexpr int height() { return 9; }
       static constexpr const uint8_t* indices() { return _Alien1Dead_::indices; }
       static constexpr const uint8_t* color() { return _Alien1Dead_::color; }
};
#endif

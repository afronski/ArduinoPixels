//generated pixeldata
#ifndef _DataAlien1Head_h
#define _DataAlien1Head_h
#include "PixelData.h"
namespace _Alien1Head_ {
    const uint8_t indices[30] = {
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
    };
    const uint8_t color[12] = {
        141
        ,198
        ,63
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
struct DataAlien1Head : public PixelDataImpl<DataAlien1Head> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 5; }
       static constexpr const uint8_t* indices() { return _Alien1Head_::indices; }
       static constexpr const uint8_t* color() { return _Alien1Head_::color; }
       constexpr DataAlien1Head(){}
};
#endif

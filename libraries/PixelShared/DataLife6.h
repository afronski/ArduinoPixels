//generated pixeldata
#ifndef _DataLife6_h
#define _DataLife6_h
#include "PixelData.h"
namespace _Life6_ {
    const uint8_t indices[25] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,4
        ,4
        ,4
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
class DataLife6 : public PixelDataImpl<DataLife6> { 
public:
       static constexpr int width() { return 5; }
       static constexpr int height() { return 5; }
       static constexpr const uint8_t* indices() { return _Life6_::indices; }
       static constexpr const uint8_t* color() { return _Life6_::color; }
};
#endif

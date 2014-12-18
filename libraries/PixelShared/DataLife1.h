//generated pixeldata
#ifndef _DataLife1_h
#define _DataLife1_h
#include "PixelData.h"
namespace _Life1_ {
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
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,4
        ,255
        ,255
    };
    const uint8_t color[8] = {
        156
        ,156
        ,156
        ,255
        ,180
        ,0
        ,0
        ,255
    };
}
struct DataLife1 : public PixelDataImpl<DataLife1> {
       static constexpr uint8_t width() { return 5; }
       static constexpr uint8_t height() { return 5; }
       static constexpr const uint8_t* indices() { return _Life1_::indices; }
       static constexpr const uint8_t* color() { return _Life1_::color; }
       constexpr DataLife1(){}
};
#endif

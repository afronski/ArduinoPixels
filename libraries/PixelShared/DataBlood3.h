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
struct DataBlood3 : public PixelDataImpl<DataBlood3> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 3; }
       static constexpr const uint8_t* indices() { return _Blood3_::indices; }
       static constexpr const uint8_t* color() { return _Blood3_::color; }
};
#endif

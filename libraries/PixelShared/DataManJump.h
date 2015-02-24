//generated pixeldata
#ifndef _DataManJump_h
#define _DataManJump_h
#include "PixelData.h"
namespace _ManJump_ {
    const uint8_t indices[60] = {
        255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,4
        ,12
        ,12
        ,16
        ,12
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,8
        ,255
        ,255
        ,255
        ,255
        ,8
    };
    const uint8_t color[20] = {
        84
        ,60
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,0
        ,0
        ,0
        ,255
        ,35
        ,35
        ,35
        ,255
        ,255
        ,255
        ,255
        ,255
    };
}
template<int8_t WidthOffset=0, int8_t HeightOffset=0>
struct DataManJump : public PixelDataImpl<DataManJump<WidthOffset, HeightOffset> > {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr int8_t widthOffset() { return WidthOffset; }
       static constexpr int8_t heightOffset() { return HeightOffset; }
       static constexpr const uint8_t* indices() { return _ManJump_::indices; }
       static constexpr const uint8_t* color() { return _ManJump_::color; }
       constexpr DataManJump(){}
};
#endif

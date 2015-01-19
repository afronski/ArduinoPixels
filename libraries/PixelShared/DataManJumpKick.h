//generated pixeldata
#ifndef _DataManJumpKick_h
#define _DataManJumpKick_h
#include "PixelData.h"
namespace _ManJumpKick_ {
    const uint8_t indices[72] = {
        255
        ,255
        ,255
        ,0
        ,0
        ,255
        ,255
        ,255
        ,255
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
        ,4
        ,4
        ,255
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,8
        ,255
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,12
        ,4
        ,255
        ,255
        ,255
        ,12
        ,12
        ,16
        ,12
        ,8
        ,8
        ,8
        ,4
        ,8
        ,8
        ,8
        ,8
        ,255
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
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
struct DataManJumpKick : public PixelDataImpl<DataManJumpKick> {
       static constexpr uint8_t width() { return 8; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _ManJumpKick_::indices; }
       static constexpr const uint8_t* color() { return _ManJumpKick_::color; }
       constexpr DataManJumpKick(){}
};
#endif

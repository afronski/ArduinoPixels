//generated pixeldata
#ifndef _DataManJumpKick_h
#define _DataManJumpKick_h
#include "PixelData.h"
namespace _ManJumpKick_ {
    const uint8_t indices[80] = {
        255
        ,255
        ,0
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
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
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
        ,255
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,255
        ,255
        ,4
        ,0
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,8
        ,4
        ,255
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,0
        ,0
        ,0
        ,4
        ,0
        ,0
        ,0
        ,0
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
class DataManJumpKick : public PixelDataImpl<DataManJumpKick> { 
public:
       static constexpr int width() { return 8; }
       static constexpr int height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManJumpKick_::indices; }
       static constexpr const uint8_t* color() { return _ManJumpKick_::color; }
};
#endif

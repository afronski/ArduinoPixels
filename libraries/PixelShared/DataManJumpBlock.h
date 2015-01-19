//generated pixeldata
#ifndef _DataManJumpBlock_h
#define _DataManJumpBlock_h
#include "PixelData.h"
namespace _ManJumpBlock_ {
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
        ,255
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
        ,4
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
struct DataManJumpBlock : public PixelDataImpl<DataManJumpBlock> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManJumpBlock_::indices; }
       static constexpr const uint8_t* color() { return _ManJumpBlock_::color; }
};
#endif

//generated pixeldata
#ifndef _DataManStandBlock_h
#define _DataManStandBlock_h
#include "PixelData.h"
namespace _ManStandBlock_ {
    const uint8_t indices[60] = {
        255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,4
        ,255
        ,8
        ,8
        ,8
        ,8
        ,4
        ,255
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
struct DataManStandBlock : public PixelDataImpl<DataManStandBlock> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManStandBlock_::indices; }
       static constexpr const uint8_t* color() { return _ManStandBlock_::color; }
       constexpr DataManStandBlock(){}
};
#endif

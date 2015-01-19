//generated pixeldata
#ifndef _DataManStandKick_h
#define _DataManStandKick_h
#include "PixelData.h"
namespace _ManStandKick_ {
    const uint8_t indices[63] = {
        255
        ,255
        ,0
        ,0
        ,0
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
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,12
        ,12
        ,16
        ,12
        ,255
        ,255
        ,4
        ,12
        ,12
        ,4
        ,12
        ,255
        ,255
        ,255
        ,8
        ,8
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
struct DataManStandKick : public PixelDataImpl<DataManStandKick> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _ManStandKick_::indices; }
       static constexpr const uint8_t* color() { return _ManStandKick_::color; }
       constexpr DataManStandKick(){}
};
#endif

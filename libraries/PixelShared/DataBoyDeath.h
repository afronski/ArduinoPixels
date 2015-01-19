//generated pixeldata
#ifndef _DataBoyDeath_h
#define _DataBoyDeath_h
#include "PixelData.h"
namespace _BoyDeath_ {
    const uint8_t indices[54] = {
        255
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
        ,255
        ,8
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[20] = {
        181
        ,166
        ,128
        ,255
        ,255
        ,255
        ,214
        ,255
        ,128
        ,128
        ,128
        ,255
        ,150
        ,150
        ,150
        ,255
        ,255
        ,255
        ,255
        ,255
    };
}
struct DataBoyDeath : public PixelDataImpl<DataBoyDeath> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 9; }
       static constexpr const uint8_t* indices() { return _BoyDeath_::indices; }
       static constexpr const uint8_t* color() { return _BoyDeath_::color; }
};
#endif

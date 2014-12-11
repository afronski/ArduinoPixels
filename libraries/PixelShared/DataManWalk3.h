//generated pixeldata
#ifndef _DataManWalk3_h
#define _DataManWalk3_h
#include "PixelData.h"
namespace _ManWalk3_ {
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
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,4
        ,255
        ,4
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,255
        ,0
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
struct DataManWalk3 : public PixelDataImpl<DataManWalk3> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManWalk3_::indices; }
       static constexpr const uint8_t* color() { return _ManWalk3_::color; }
};
#endif

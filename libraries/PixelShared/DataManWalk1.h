//generated pixeldata
#ifndef _DataManWalk1_h
#define _DataManWalk1_h
#include "PixelData.h"
namespace _ManWalk1_ {
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
        ,255
        ,255
        ,12
        ,4
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
        ,8
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
struct DataManWalk1 : public PixelDataImpl<DataManWalk1> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManWalk1_::indices; }
       static constexpr const uint8_t* color() { return _ManWalk1_::color; }
};
#endif

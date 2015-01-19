//generated pixeldata
#ifndef _DataManGitHit1_h
#define _DataManGitHit1_h
#include "PixelData.h"
namespace _ManGitHit1_ {
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
        ,255
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
        ,0
        ,0
        ,255
        ,0
        ,4
        ,8
        ,4
        ,4
        ,255
        ,4
        ,4
        ,4
        ,4
        ,8
        ,255
        ,12
        ,12
        ,16
        ,12
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,20
        ,4
        ,20
        ,20
        ,4
        ,255
        ,255
        ,20
        ,255
        ,255
        ,20
        ,255
    };
    const uint8_t color[24] = {
        84
        ,60
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,179
        ,134
        ,85
        ,255
        ,35
        ,35
        ,35
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
struct DataManGitHit1 : public PixelDataImpl<DataManGitHit1> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManGitHit1_::indices; }
       static constexpr const uint8_t* color() { return _ManGitHit1_::color; }
       constexpr DataManGitHit1(){}
};
#endif

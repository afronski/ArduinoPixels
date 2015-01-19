//generated pixeldata
#ifndef _DataManGitHit2_h
#define _DataManGitHit2_h
#include "PixelData.h"
namespace _ManGitHit2_ {
    const uint8_t indices[64] = {
        255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,4
        ,255
        ,255
        ,255
        ,4
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,8
        ,8
        ,8
        ,12
        ,16
        ,8
        ,20
        ,24
        ,8
        ,12
        ,8
        ,8
        ,16
        ,20
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,16
        ,20
        ,255
        ,255
        ,255
        ,255
        ,16
        ,16
        ,16
        ,20
        ,20
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
        ,255
        ,255
    };
    const uint8_t color[28] = {
        84
        ,60
        ,0
        ,255
        ,84
        ,60
        ,0
        ,253
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
        ,0
        ,0
        ,0
        ,255
        ,84
        ,60
        ,0
        ,249
    };
}
struct DataManGitHit2 : public PixelDataImpl<DataManGitHit2> {
       static constexpr uint8_t width() { return 8; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManGitHit2_::indices; }
       static constexpr const uint8_t* color() { return _ManGitHit2_::color; }
       constexpr DataManGitHit2(){}
};
#endif

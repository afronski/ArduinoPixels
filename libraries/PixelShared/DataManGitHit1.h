//generated pixeldata
#ifndef _DataManGitHit1_h
#define _DataManGitHit1_h
#include "PixelData.h"
namespace _ManGitHit1_ {
    const uint8_t indices[60] = {
        255
        ,0
        ,0
        ,0
        ,255
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
        ,255
        ,255
        ,4
        ,4
        ,0
        ,0
        ,0
        ,255
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
        ,12
        ,12
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,0
        ,4
        ,0
        ,0
        ,4
        ,255
        ,255
        ,0
        ,255
        ,255
        ,0
        ,255
    };
    const uint8_t color[16] = {
        0
        ,0
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
        ,34
        ,59
        ,169
        ,255
    };
}
class DataManGitHit1 : public PixelDataImpl<DataManGitHit1> { 
public:
       static int width() { return 6; }
       static int height() { return 10; }
       static const uint8_t* indices() { return _ManGitHit1_::indices; }
       static const uint8_t* color() { return _ManGitHit1_::color; }
};
#endif

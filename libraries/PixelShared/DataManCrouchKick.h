//generated pixeldata
#ifndef _DataManCrouchKick_h
#define _DataManCrouchKick_h
#include "PixelData.h"
namespace _ManCrouchKick_ {
    const uint8_t indices[64] = {
        255
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
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
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
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
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
        ,255
        ,12
        ,4
        ,255
        ,255
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
        ,34
        ,59
        ,169
        ,255
        ,0
        ,0
        ,0
        ,2
    };
}
class DataManCrouchKick : public PixelDataImpl<DataManCrouchKick> { 
public:
       static constexpr int width() { return 8; }
       static constexpr int height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManCrouchKick_::indices; }
       static constexpr const uint8_t* color() { return _ManCrouchKick_::color; }
};
#endif

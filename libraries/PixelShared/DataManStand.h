//generated pixeldata
#ifndef _DataManStand_h
#define _DataManStand_h
#include "PixelData.h"
namespace _ManStand_ {
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
        ,255
        ,255
        ,4
        ,0
        ,0
        ,0
        ,4
        ,255
        ,0
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
class DataManStand : public PixelDataImpl<DataManStand> { 
public:
       static constexpr int width() { return 6; }
       static constexpr int height() { return 10; }
       static constexpr const uint8_t* indices() { return _ManStand_::indices; }
       static constexpr const uint8_t* color() { return _ManStand_::color; }
};
#endif

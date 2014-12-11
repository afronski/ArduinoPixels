//generated pixeldata
#ifndef _DataAlienShoot2_h
#define _DataAlienShoot2_h
#include "PixelData.h"
namespace _AlienShoot2_ {
    const uint8_t indices[9] = {
        255
        ,0
        ,255
        ,0
        ,4
        ,0
        ,255
        ,0
        ,255
    };
    const uint8_t color[8] = {
        141
        ,198
        ,63
        ,255
        ,0
        ,0
        ,0
        ,255
    };
}
struct DataAlienShoot2 : public PixelDataImpl<DataAlienShoot2> {
       static constexpr uint8_t width() { return 3; }
       static constexpr uint8_t height() { return 3; }
       static constexpr const uint8_t* indices() { return _AlienShoot2_::indices; }
       static constexpr const uint8_t* color() { return _AlienShoot2_::color; }
};
#endif

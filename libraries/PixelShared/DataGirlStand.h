//generated pixeldata
#ifndef _DataGirlStand_h
#define _DataGirlStand_h
#include "PixelData.h"
namespace _GirlStand_ {
    const uint8_t indices[60] = {
        255
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
        ,255
        ,255
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
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
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
        ,12
        ,12
        ,4
        ,12
        ,12
        ,4
        ,255
        ,8
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[16] = {
        125
        ,90
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
        ,255
        ,255
        ,204
        ,255
    };
}
struct DataGirlStand : public PixelDataImpl<DataGirlStand> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 10; }
       static constexpr const uint8_t* indices() { return _GirlStand_::indices; }
       static constexpr const uint8_t* color() { return _GirlStand_::color; }
};
#endif

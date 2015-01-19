//generated pixeldata
#ifndef _DataGirlCrouchBlock_h
#define _DataGirlCrouchBlock_h
#include "PixelData.h"
namespace _GirlCrouchBlock_ {
    const uint8_t indices[49] = {
        255
        ,255
        ,255
        ,255
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
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
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
struct DataGirlCrouchBlock : public PixelDataImpl<DataGirlCrouchBlock> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouchBlock_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouchBlock_::color; }
       constexpr DataGirlCrouchBlock(){}
};
#endif

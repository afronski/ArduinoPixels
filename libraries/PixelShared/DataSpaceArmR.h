//generated pixeldata
#ifndef _DataSpaceArmR_h
#define _DataSpaceArmR_h
#include "PixelData.h"
namespace _SpaceArmR_ {
    const uint8_t indices[8] = {
        0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
    };
    const uint8_t color[4] = {
        141
        ,198
        ,63
        ,255
    };
}
struct DataSpaceArmR : public PixelDataImpl<DataSpaceArmR> {
       static constexpr uint8_t width() { return 4; }
       static constexpr uint8_t height() { return 2; }
       static constexpr const uint8_t* indices() { return _SpaceArmR_::indices; }
       static constexpr const uint8_t* color() { return _SpaceArmR_::color; }
};
#endif

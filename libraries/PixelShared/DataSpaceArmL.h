//generated pixeldata
#ifndef _DataSpaceArmL_h
#define _DataSpaceArmL_h
#include "PixelData.h"
namespace _SpaceArmL_ {
    const uint8_t indices[8] = {
        0
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
    };
    const uint8_t color[4] = {
        141
        ,198
        ,63
        ,255
    };
}
struct DataSpaceArmL : public PixelDataImpl<DataSpaceArmL> {
       static constexpr uint8_t width() { return 4; }
       static constexpr uint8_t height() { return 2; }
       static constexpr const uint8_t* indices() { return _SpaceArmL_::indices; }
       static constexpr const uint8_t* color() { return _SpaceArmL_::color; }
       constexpr DataSpaceArmL(){}
};
#endif

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
class DataSpaceArmL : public PixelDataImpl<DataSpaceArmL> { 
public:
       static int width() { return 4; }
       static int height() { return 2; }
       static const uint8_t* indices() { return _SpaceArmL_::indices; }
       static const uint8_t* color() { return _SpaceArmL_::color; }
};
#endif

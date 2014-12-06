//generated pixeldata
#ifndef _DataStarSmall_h
#define _DataStarSmall_h
#include "PixelData.h"
namespace _StarSmall_ {
    const uint8_t indices[1] = {
        0
    };
    const uint8_t color[4] = {
        51
        ,51
        ,51
        ,255
    };
}
class DataStarSmall : public PixelDataImpl<DataStarSmall> { 
public:
       static constexpr int width() { return 1; }
       static constexpr int height() { return 1; }
       static constexpr const uint8_t* indices() { return _StarSmall_::indices; }
       static constexpr const uint8_t* color() { return _StarSmall_::color; }
};
#endif

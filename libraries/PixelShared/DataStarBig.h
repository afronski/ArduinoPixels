//generated pixeldata
#ifndef _DataStarBig_h
#define _DataStarBig_h
#include "PixelData.h"
namespace _StarBig_ {
    const uint8_t indices[9] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,255
    };
    const uint8_t color[4] = {
        51
        ,51
        ,51
        ,255
    };
}
struct DataStarBig : public PixelDataImpl<DataStarBig> {
       static constexpr uint8_t width() { return 3; }
       static constexpr uint8_t height() { return 3; }
       static constexpr const uint8_t* indices() { return _StarBig_::indices; }
       static constexpr const uint8_t* color() { return _StarBig_::color; }
       constexpr DataStarBig(){}
};
#endif

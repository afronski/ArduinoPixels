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
class DataStarBig : public PixelDataImpl<DataStarBig> { 
public:
       static int width() { return 3; }
       static int height() { return 3; }
       static const uint8_t* indices() { return _StarBig_::indices; }
       static const uint8_t* color() { return _StarBig_::color; }
};
#endif

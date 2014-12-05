//generated pixeldata
#ifndef _DataAlien2Feed_h
#define _DataAlien2Feed_h
#include "PixelData.h"
namespace _Alien2Feed_ {
    const uint8_t indices[2] = {
        0
        ,0
    };
    const uint8_t color[4] = {
        141
        ,198
        ,63
        ,255
    };
}
class DataAlien2Feed : public PixelDataImpl<DataAlien2Feed> { 
public:
       static int width() { return 2; }
       static int height() { return 1; }
       static const uint8_t* indices() { return _Alien2Feed_::indices; }
       static const uint8_t* color() { return _Alien2Feed_::color; }
};
#endif

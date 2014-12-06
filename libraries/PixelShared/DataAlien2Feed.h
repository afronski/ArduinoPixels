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
       static constexpr int width() { return 2; }
       static constexpr int height() { return 1; }
       static constexpr const uint8_t* indices() { return _Alien2Feed_::indices; }
       static constexpr const uint8_t* color() { return _Alien2Feed_::color; }
};
#endif

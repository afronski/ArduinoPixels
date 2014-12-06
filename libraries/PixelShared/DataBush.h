//generated pixeldata
#ifndef _DataBush_h
#define _DataBush_h
#include "PixelData.h"
namespace _Bush_ {
    const uint8_t indices[77] = {
        255
        ,255
        ,255
        ,0
        ,0
        ,4
        ,255
        ,255
        ,255
        ,255
        ,255
        ,0
        ,255
        ,0
        ,8
        ,12
        ,0
        ,4
        ,8
        ,255
        ,255
        ,255
        ,255
        ,0
        ,12
        ,0
        ,0
        ,8
        ,4
        ,0
        ,4
        ,255
        ,0
        ,0
        ,12
        ,8
        ,0
        ,12
        ,0
        ,0
        ,4
        ,8
        ,4
        ,255
        ,255
        ,0
        ,0
        ,0
        ,4
        ,8
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,16
        ,255
        ,255
        ,16
        ,255
        ,255
        ,255
        ,255
    };
    const uint8_t color[20] = {
        141
        ,180
        ,118
        ,255
        ,111
        ,144
        ,93
        ,255
        ,183
        ,1
        ,1
        ,255
        ,169
        ,200
        ,150
        ,255
        ,54
        ,43
        ,38
        ,255
    };
}
class DataBush : public PixelDataImpl<DataBush> { 
public:
       static constexpr int width() { return 11; }
       static constexpr int height() { return 7; }
       static constexpr const uint8_t* indices() { return _Bush_::indices; }
       static constexpr const uint8_t* color() { return _Bush_::color; }
};
#endif

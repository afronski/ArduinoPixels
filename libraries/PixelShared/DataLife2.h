//generated pixeldata
#ifndef _DataLife2_h
#define _DataLife2_h
#include "PixelData.h"
namespace _Life2_ {
    const uint8_t indices[25] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,4
        ,4
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
    };
    const uint8_t color[12] = {
        156
        ,156
        ,156
        ,255
        ,249
        ,0
        ,0
        ,255
        ,180
        ,0
        ,0
        ,255
    };
}
struct DataLife2 : public PixelDataImpl<DataLife2> {
       static constexpr uint8_t width() { return 5; }
       static constexpr uint8_t height() { return 5; }
       static constexpr const uint8_t* indices() { return _Life2_::indices; }
       static constexpr const uint8_t* color() { return _Life2_::color; }
       constexpr DataLife2(){}
};
#endif

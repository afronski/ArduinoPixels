//generated pixeldata
#ifndef _DataDuckSmall_h
#define _DataDuckSmall_h
#include "PixelData.h"
namespace _DuckSmall_ {
    const uint8_t indices[6] = {
        0
        ,4
        ,255
        ,255
        ,4
        ,4
    };
    const uint8_t color[8] = {
        255
        ,147
        ,8
        ,255
        ,255
        ,194
        ,8
        ,255
    };
}
struct DataDuckSmall : public PixelDataImpl<DataDuckSmall> {
       static constexpr uint8_t width() { return 3; }
       static constexpr uint8_t height() { return 2; }
       static constexpr const uint8_t* indices() { return _DuckSmall_::indices; }
       static constexpr const uint8_t* color() { return _DuckSmall_::color; }
};
#endif

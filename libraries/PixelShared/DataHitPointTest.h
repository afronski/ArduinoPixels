//generated pixeldata
#ifndef _DataHitPointTest_h
#define _DataHitPointTest_h
#include "PixelData.h"
namespace _HitPointTest_ {
    const uint8_t indices[2] = {
        0
        ,0
    };
    const uint8_t color[4] = {
        237
        ,28
        ,36
        ,255
    };
}
struct DataHitPointTest : public PixelDataImpl<DataHitPointTest> {
       static constexpr uint8_t width() { return 2; }
       static constexpr uint8_t height() { return 1; }
       static constexpr const uint8_t* indices() { return _HitPointTest_::indices; }
       static constexpr const uint8_t* color() { return _HitPointTest_::color; }
};
#endif

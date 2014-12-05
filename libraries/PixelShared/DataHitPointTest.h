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
class DataHitPointTest : public PixelDataImpl<DataHitPointTest> { 
public:
       static int width() { return 2; }
       static int height() { return 1; }
       static const uint8_t* indices() { return _HitPointTest_::indices; }
       static const uint8_t* color() { return _HitPointTest_::color; }
};
#endif

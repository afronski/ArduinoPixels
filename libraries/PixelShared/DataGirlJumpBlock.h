//generated pixeldata
#ifndef _DataGirlJumpBlock_h
#define _DataGirlJumpBlock_h
#include "PixelData.h"
namespace _GirlJumpBlock_ {
    const uint8_t indices[63] = {
        255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,4
        ,255
        ,12
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
    };
    const uint8_t color[16] = {
        125
        ,90
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,204
        ,255
    };
}
template<int8_t WidthOffset=0, int8_t HeightOffset=0>
struct DataGirlJumpBlock : public PixelDataImpl<DataGirlJumpBlock<WidthOffset, HeightOffset> > {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 9; }
       static constexpr int8_t widthOffset() { return WidthOffset; }
       static constexpr int8_t heightOffset() { return HeightOffset; }
       static constexpr const uint8_t* indices() { return _GirlJumpBlock_::indices; }
       static constexpr const uint8_t* color() { return _GirlJumpBlock_::color; }
       constexpr DataGirlJumpBlock(){}
};
#endif

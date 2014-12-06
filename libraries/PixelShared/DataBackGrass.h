//generated pixeldata
#ifndef _DataBackGrass_h
#define _DataBackGrass_h
#include "PixelData.h"
namespace _BackGrass_ {
    const uint8_t indices[16] = {
        0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
        ,4
    };
    const uint8_t color[8] = {
        136
        ,199
        ,228
        ,255
        ,82
        ,117
        ,94
        ,255
    };
}
class DataBackGrass : public PixelDataImpl<DataBackGrass> { 
public:
       static constexpr int width() { return 1; }
       static constexpr int height() { return 16; }
       static constexpr const uint8_t* indices() { return _BackGrass_::indices; }
       static constexpr const uint8_t* color() { return _BackGrass_::color; }
};
#endif

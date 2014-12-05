//generated pixeldata
#ifndef _DataThreeFar_h
#define _DataThreeFar_h
#include "PixelData.h"
namespace _ThreeFar_ {
    const uint8_t indices[63] = {
        255
        ,0
        ,0
        ,0
        ,4
        ,4
        ,255
        ,255
        ,0
        ,8
        ,8
        ,0
        ,4
        ,4
        ,4
        ,8
        ,4
        ,0
        ,4
        ,4
        ,255
        ,255
        ,4
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,255
        ,255
        ,12
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,16
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,12
        ,255
        ,255
        ,255
        ,255
        ,255
        ,255
        ,12
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
        ,169
        ,200
        ,150
        ,255
        ,69
        ,52
        ,44
        ,255
        ,94
        ,71
        ,59
        ,255
    };
}
class DataThreeFar : public PixelDataImpl<DataThreeFar> { 
public:
       static int width() { return 7; }
       static int height() { return 9; }
       static const uint8_t* indices() { return _ThreeFar_::indices; }
       static const uint8_t* color() { return _ThreeFar_::color; }
};
#endif

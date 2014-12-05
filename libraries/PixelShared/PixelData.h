//
//  PixelData.h
//  PixelShared
//
//  Created by Kris Temmerman on 05/10/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelShared_PixelData_h
#define PixelShared_PixelData_h

#include "PixelGameInclude.h"

class PixelData
{
public:
    PixelData(){color =0;indices=0;};

    const uint8_t *color;
    const uint8_t *indices;
    int width;
    int height;
    int centerX;
    int centerY;
  
};

template<typename T>
class PixelDataImpl : public PixelData
{
public:
    PixelDataImpl()
    {
        color = T::color();
        indices = T::indices();
        width = T::width();
        height = T::height();
        centerX = width/2;
        centerY = height;
    }
};

#endif


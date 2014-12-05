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
    const uint8_t *color;
    const uint8_t *indices;
    int width;
    int height;
    int centerX;
    int centerY;
  
};

//
// PixelDataImpl
// Glue class for stack allocated data.
//  * Lower memory footprint
//  * Increased performance
//
// Created by Hans Robeers on 2014/12/05
//
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


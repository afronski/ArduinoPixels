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

struct PixelData
{
    const uint8_t *color;
    const uint8_t *indices;
    int width;
    int height;
    int centerX;
    int centerY;
  
    PixelData(const uint8_t *color, const uint8_t *indices, int width, int height) :
        color(color), indices(indices), width(width), height(height), centerX(width/2), centerY(height) { }

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
    PixelDataImpl() : PixelData(T::color(),
                                T::indices(),
                                T::width(),
                                T::height())
    { }
};

#endif


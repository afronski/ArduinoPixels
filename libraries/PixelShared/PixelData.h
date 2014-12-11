//
//  PixelData.h
//  PixelShared
//
//  Created by Kris Temmerman on 05/10/13.
//  Optimized by Hans Robeers on 2014/12/05
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelShared_PixelData_h
#define PixelShared_PixelData_h

#include "PixelGameInclude.h"

// PixelData objects are cheap to copy and construct.
// Make sure to allocate them on the stack!
struct PixelData
{
    const uint8_t *color;
    const uint8_t *indices;
    const uint8_t width;
    const uint8_t height;
    uint8_t centerX;
    uint8_t centerY;
  
    PixelData(const uint8_t *color, const uint8_t *indices, const uint8_t width, const uint8_t height) :
        color(color), indices(indices), width(width), height(height), centerX(width/2), centerY(height) { }
    PixelData() : PixelData(nullptr, nullptr, 0, 0) { }
    PixelData(const PixelData &other) : PixelData(other.color, other.indices, other.width, other.height) { }
    PixelData operator=(const PixelData &other) { return PixelData(other); }
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
struct PixelDataImpl : public PixelData
{
    PixelDataImpl() : PixelData(T::color(),
                                T::indices(),
                                T::width(),
                                T::height())
    { }
};

#endif


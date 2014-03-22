//
//  NeopixelPixelRenderer.h
//  PixelGame
//
//  Created by Kris Temmerman on 15/09/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelGame_NeopixelPixelRenderer_h
#define PixelGame_NeopixelPixelRenderer_h
#include "Adafruit_NeoPixel.h"

#include "PixelGameInclude.h"

class NeopixelPixelRenderer : public PixelRenderer
{
public:
    Adafruit_NeoPixel *strip1;
    Adafruit_NeoPixel *strip2;
    Adafruit_NeoPixel *strip3;
    Adafruit_NeoPixel *strip4;
    Adafruit_NeoPixel *strip5;
    Adafruit_NeoPixel *strip6;
    
    
    NeopixelPixelRenderer();
   
    void setup();
   
    void draw();
        
    void setPixel(int x,int y,uint8_t r, uint8_t g , uint8_t b, uint8_t a);
       
    void setPixel(int x, int y, uint32_t c);
    void setBrightness(int val);
    void fade();
};

#endif

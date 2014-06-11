//
//  PixelRenderer.cpp
//  PixelGame
//
//  Created by Kris Temmerman on 15/09/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#include "PixelRenderer.h"

#ifndef _WINDOWS

PixelRenderer::PixelRenderer()
{

}
void PixelRenderer::setBrightness(int br)
{
	pixels->setBrightness(br);
}

void PixelRenderer::setup()
{
    int br =50;
    pixels = new Adafruit_NeoMatrix(PIXEL_WIDTH, PIXEL_HEIGHT, PIXEL_PIN,
    	NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG);
    pixels->begin();
    pixels->setBrightness(br);
    pixels->show();
}

void PixelRenderer::fade()
{
	// TODO fix this to work with NeoMatrix
}

void PixelRenderer::draw()
{
	pixels->show();
}

void PixelRenderer::setPixel(int x,int y,uint8_t r, uint8_t g , uint8_t b,uint8_t a)
{
	pixels->drawPixel(x, y,
		Adafruit_NeoMatrix::Color(r, g, b));    
}

#endif


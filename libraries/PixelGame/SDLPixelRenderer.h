/*
 * SDLPixelRenderer.h
 *
 *  Created on: 21.03.2014
 *      Author: michael
 */

#ifndef SDLPIXELRENDERER_H_
#define SDLPIXELRENDERER_H_

#include "PixelRenderer.h"

#include "SDL2/SDL.h"

class SDLPixelRenderer: public PixelRenderer {
public:
	SDLPixelRenderer(unsigned int width, unsigned int height, unsigned int scale = 10);
	virtual ~SDLPixelRenderer();

	void setup();

    void draw();

    void setPixel(int x,int y,uint8_t r, uint8_t g , uint8_t b, uint8_t a);

    void setPixel(int x, int y, uint32_t c);
    void setBrightness(int val);
    void fade();

private:
    unsigned int width, height, scale;
    SDL_Window *window;
    SDL_Surface *surface;
};

#endif /* SDLPIXELRENDERER_H_ */

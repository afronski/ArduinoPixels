/*
 * SDLPixelRenderer.h
 *
 *  Created on: 21.03.2014
 *      Author: michael
 */

#ifndef SDLPIXELRENDERER_H_
#define SDLPIXELRENDERER_H_

#include "PixelRenderer.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include "/home/hans/development/lib/SDL-emscripten/include/SDL.h"
#else
#include "SDL2/SDL.h"
#endif

class SDLPixelRenderer: public PixelRenderer {
public:
	SDLPixelRenderer(unsigned int width, unsigned int height, unsigned int scale = 10);
	virtual ~SDLPixelRenderer();

	void setup();

    void draw();

    void setPixel(int x, int y, uint8_t r, uint8_t g , uint8_t b, uint8_t);

    void setPixel(int x, int y, uint32_t c);
    void setBrightness(int);
    void fade();

private:
    unsigned int width, height, scale;
    SDL_Window *window;
    SDL_Surface *surface;
};

#endif /* SDLPIXELRENDERER_H_ */

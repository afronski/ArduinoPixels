/*
 * SDLPixelRenderer.cpp
 *
 *  Created on: 21.03.2014
 *      Author: michael
 */

#include "SDLPixelRenderer.h"

SDLPixelRenderer::SDLPixelRenderer(unsigned int width, unsigned int height, unsigned int scale)
	: width(width), height(height), scale(scale), window(NULL), pixels(NULL) {

}

SDLPixelRenderer::~SDLPixelRenderer() {
	if (pixels != NULL) SDL_FreeSurface(pixels);
	if (window != NULL) SDL_DestroyWindow(window);
}

void SDLPixelRenderer::setup() {
	window = SDL_CreateWindow("SDLPixels",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			width * scale, height * scale, SDL_WINDOW_SHOWN);

	pixels = SDL_CreateRGBSurface(0,width,height,24,0,0,0,0);
}

void SDLPixelRenderer::draw() {
	SDL_Surface *screen = SDL_GetWindowSurface(window);
	SDL_BlitScaled(pixels, NULL, screen, NULL);
	SDL_UpdateWindowSurface(window);
}

void SDLPixelRenderer::setPixel(int x,int y,uint8_t r, uint8_t g , uint8_t b, uint8_t a) {
	uint32_t c = SDL_MapRGB(this->pixels->format,r,g,b);
	setPixel(x, y, c);
}

void SDLPixelRenderer::setPixel(int x, int y, uint32_t c) {
	SDL_LockSurface(this->pixels);
	Uint32* p_pixels = (Uint32*)this->pixels->pixels;
	p_pixels += y* this->pixels->w + x;
	*p_pixels = c;
	SDL_UnlockSurface(this->pixels);
}

void SDLPixelRenderer::setBrightness(int val) {
	// not implemented
}

void SDLPixelRenderer::fade() {
	// not implemented
}

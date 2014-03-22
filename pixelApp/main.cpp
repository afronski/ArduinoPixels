/*
 * main.cpp
 *
 *  Created on: 21.03.2014
 *      Author: michael
 */

#include <iostream>
#include <chrono>

#include "SDL2/SDL.h"

#include "PixelGameInclude.h"
#include "SDLPixelRenderer.h"

#include "PixelMain.h"

using namespace std;
using namespace std::chrono;

int main(int argc, char** argv) {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		cout << "SDL_Init Error: " << SDL_GetError() << endl;
		return 1;
	}

	SDLPixelRenderer renderer(90, 16);
	PixelMain pixelMain(&renderer);
	pixelMain.setup();

	while (true) {
		pixelMain.update(0.1);
		pixelMain.draw();
	}
	return 0;
}



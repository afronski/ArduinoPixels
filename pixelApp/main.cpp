/*
 * main.cpp
 *
 *  Created on: 21.03.2014
 *      Author: michael
 */

#include <iostream>
#include <chrono>
#include <thread>

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
	atexit(SDL_Quit);

	SDLPixelRenderer renderer(90, 16, 12);
	PixelMain pixelMain(&renderer);
	pixelMain.setup();

	bool running = true;
	SDL_Event event;
	int fps = 30;

	while (running) {
		while(SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
			}
		}

		pixelMain.update(1.0f / fps);
		pixelMain.draw();

		this_thread::sleep_for(milliseconds(1000 / fps));
	}

	return 0;
}



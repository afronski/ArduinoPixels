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

// buttons / joysticks
#define BTN_BLUE	0
#define BTN_RED		2
#define BTN_YELLOW 	4

#define JS_NEUTRAL	0
#define JS_UP		1
#define JS_UP_LEFT	8
#define JS_UP_RIGHT	2
#define JS_DOWN		5
#define JS_DOWN_LEFT	6
#define JS_DOWN_RIGHT	4
#define JS_LEFT		7
#define JS_RIGHT	3

#define OFFSET_BTN_R	0
#define OFFSET_BTN_L	20
#define OFFSET_JS_R	10
#define OFFSET_JS_L	30

using namespace std;
using namespace std::chrono;

struct joystickState {
	bool up, down, left, right;
} inputL, inputR;

void handleKeyEvent(PixelMain &main, SDL_KeyboardEvent *key);
void handleJoystick(PixelMain &main, joystickState &input, int offset);

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
	int fps = 20;

	while (running) {
		while(SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				running = false;
				break;
			case SDL_KEYDOWN:
			case SDL_KEYUP:
				handleKeyEvent(pixelMain, &event.key);
				break;
			}
		}

		pixelMain.update(1.0f / fps);
		pixelMain.draw();

		this_thread::sleep_for(milliseconds(1000 / fps));
	}

	return 0;
}

void handleKeyEvent(PixelMain &main, SDL_KeyboardEvent *key) {
	// layout:
	// left, right, up, down, comma, period, slash control player 1 (~right controls)
	bool pressed = (key->type == SDL_KEYDOWN);

	switch( key->keysym.sym ){
	case SDLK_ESCAPE:
		main.setGameState(STATE_INTRO);
		break;            
	case SDLK_COMMA:
		main.setInput(OFFSET_BTN_R + BTN_RED + (pressed ? 1 : 0));
		break;
	case SDLK_PERIOD:
		main.setInput(OFFSET_BTN_R + BTN_BLUE + (pressed ? 1 : 0));
		break;
	case SDLK_MINUS:
		main.setInput(OFFSET_BTN_R + BTN_YELLOW + (pressed ? 1 : 0));
		break;
	case SDLK_UP:
		inputR.up = pressed;
		handleJoystick(main, inputR, OFFSET_JS_R);
		break;
	case SDLK_DOWN:
		inputR.down = pressed;
		handleJoystick(main, inputR, OFFSET_JS_R);
		break;
	case SDLK_LEFT:
		inputR.left = pressed;
		handleJoystick(main, inputR, OFFSET_JS_R);
		break;
	case SDLK_RIGHT:
		inputR.right = pressed;
		handleJoystick(main, inputR, OFFSET_JS_R);
		break;		
	default:
		break;
	}
	

}

void handleJoystick(PixelMain &main, joystickState &input, int offset) {
	int js = offset + JS_NEUTRAL;
	if (input.up) {
		if (input.left)
			js += JS_UP_LEFT;
		else if (input.right)
			js += JS_UP_RIGHT;
		else
			js += JS_UP;
	} else if (input.down) {
		if (input.left)
			js += JS_DOWN_LEFT;
		else if (input.right)
			js += JS_DOWN_RIGHT;
		else
			js += JS_DOWN;
	} else if (input.left) {
		js += JS_LEFT;
	} else if (input.right) {
		js += JS_RIGHT;
	}
	main.setInput(js);
}

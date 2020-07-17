#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL.h"

#include "vivaria.h"

int main() {
	Vivaria game;
	return game.onExecute();
}

Vivaria::Vivaria() {
	std::cout << "Starting Vivaria..." << std::endl;
}

int Vivaria::onExecute() {
	if(!onInit()) {
		return -1;
	}

	SDL_Event event;

	while(running) {
		while(SDL_PollEvent(&event)) {
			onEvent(&event);
		}

		onLoop();
		onRender();
	}

	onCleanup();
	return 0;
}

/**
 * Initialize the game window
 */
bool Vivaria::onInit() {
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		return false;
	}

	window = SDL_CreateWindow(
		"Vivaria",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		640,
		480,
		SDL_WindowFlags::SDL_WINDOW_OPENGL
	);

	if(window == nullptr) {
		printf("Could not create window: %s\n", SDL_GetError());
		return false;
	}
	return true;
}


/**
 * Handles the events received from controllers
 */
void Vivaria::onEvent(SDL_Event* event) {
	if(event->type == SDL_EventType::SDL_QUIT) {
		running = false;
	}
}


/**
 * Game loop
 */
void Vivaria::onLoop() {

}


/**
 * Game render
 */
void Vivaria::onRender() {

}


/**
 * Game cleanup
 */
void Vivaria::onCleanup() {
	SDL_Quit();
}

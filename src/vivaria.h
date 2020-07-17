#ifndef VIVARIA_H
#define VIVARIA_H

#include "SDL.h"

class Vivaria {
	private:
		bool running;
		SDL_Window* window;
	public:
		Vivaria();
		int onExecute();

		bool onInit();
		void onEvent(SDL_Event* event);
		void onLoop();
		void onRender();
		void onCleanup();
		SDL_Window* getWindow() const;
};

#endif

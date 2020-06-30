#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL.h"

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0){
        std::cout << "Hello world" << std::endl;
        return 1;
    }
    
        std::cout << "Hello world 2" << std::endl;

    SDL_Quit();
    return 0;
}
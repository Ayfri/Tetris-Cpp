#include "SDL.h"

namespace App {
	SDL_Window *window = nullptr;
	SDL_Renderer *renderer = nullptr;
	
	void setup_renderer() {
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
	
	void init_window() {
		SDL_Init(SDL_INIT_VIDEO);
		
		window = SDL_CreateWindow(
				"SDL2Test",
				SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED,
				640,
				480,
				0
		);
	}
	
	void quit() {
		SDL_DestroyWindow(window);
		SDL_Quit();
	}
}
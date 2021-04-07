#include <SDL2/SDL.h>

int main(int argument_count, char ** arguments) {
    (void)argument_count;
    (void)arguments;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window * window = SDL_CreateWindow("Example App", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);

    while (1) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) exit(0);
        }
        SDL_Delay(100);
    }
}

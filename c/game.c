#include <SDL2/SDL.h>
#include <stdbool.h>

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Simple Game",
                        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                        800, 600, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Rect rect = {100, 100, 50, 50};
    bool running = true;
    SDL_Event event;

    while (running) {
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT) running = false;
        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP: rect.y -= 5; break;
                case SDLK_DOWN: rect.y += 5; break;
                case SDLK_LEFT: rect.x -= 5; break;
                case SDLK_RIGHT: rect.x += 5; break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
        SDL_Delay(16); // ~60 FPS
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}


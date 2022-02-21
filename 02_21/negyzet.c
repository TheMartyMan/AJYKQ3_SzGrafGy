#include <SDL2/SDL.h>

// Egyszerű fekete alapon fehér 100x100-as négyzet próba 5mp-es leállással

int main (int argc, char** argv)
{
    SDL_Window* window = NULL;
    window = SDL_CreateWindow
    (
        "Fekete alapon 100x100 feher negyzet", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN
    );


    SDL_Renderer* renderer = NULL;
    renderer =  SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);


    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);


    SDL_RenderClear(renderer);


    SDL_Rect r;
    r.x = 100;
    r.y = 100;
    r.w = 100;
    r.h = 100;


    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255 );


    SDL_RenderFillRect(renderer, &r);


    SDL_RenderPresent(renderer);


    SDL_Delay(5000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}

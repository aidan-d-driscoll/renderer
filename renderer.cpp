#include "renderer.hpp"

static SDL_Window * window = nullptr;
static SDL_Renderer* renderer = nullptr;

bool initializeRenderer(int width, int height)
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        SDL_Log("SDL_Init failed: %s", SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow(
        "Renderer",
        width,
        height,
        0
    )

    if (window == nullptr)
    {
        SDD_Log("SDL_CreateWindow failed: %s", SDL_GetError());
        SDL_Quit();
        return false;
    }

    renderer = SDL_CreateRenderer(window, nullptr);

    if (renderer == nullptr)
    {
        SDD_Log("SDL_CreateRenderer failed: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    return true;
}
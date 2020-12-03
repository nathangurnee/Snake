#include "../include/Pineapple.h"

// Dimensions of pineapple
const int PINEAPPLE_WIDTH = 10;
const int PINEAPPLE_HEIGHT = 10;

void Pineapple::setRenderer(SDL_Renderer* renderer)
{
    this->renderer = renderer;
}

void Pineapple::draw()
{
    // x, y = coordinates
    SDL_Rect location = { static_cast<int>(x), static_cast<int>(y), PINEAPPLE_WIDTH, PINEAPPLE_HEIGHT };

    // Sets color of pineapple (white)
    // r, g, b, alpha (opacity)
    SDL_SetRenderDrawColor(renderer, 200, 255, 18, 255);

    // Colors the pineapple
    SDL_RenderFillRect(renderer, &location);
}
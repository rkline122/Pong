#include <SDL2/SDL.h>

bool isColliding(SDL_Rect rect1, SDL_Rect rect2) {
    return (rect1.x < rect2.x + rect2.w &&
            rect1.x + rect1.w > rect2.x &&
            rect1.y < rect2.y + rect2.h &&
            rect1.y + rect1.h > rect2.y);
}

void drawObject(SDL_Renderer *renderer, SDL_Rect object){
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &object);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}



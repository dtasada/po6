#include "../include/v2.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <string>

struct Game {
    SDL_Window *window;
    SDL_Renderer *renderer;
    float fps;
    float dt;
    bool running;

    Game();
    ~Game();
};

struct Sprite {
    SDL_Texture *tex;
    SDL_Rect rect;
    v2 vel;
    v2 acc;

    Sprite(SDL_Renderer *renderer, std::string image_path, SDL_Rect rect,
           v2 vel = {0, 0}, v2 acc = {0, 0});
    ~Sprite();

    void copy(SDL_Renderer *renderer);
};

int exit_failure(std::string message);
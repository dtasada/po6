#pragma once

#include "../include/engine.hpp"
#include "../include/v2.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <vector>

// enum class TileType {WATER, SAND, GRASS, MOUNTAIN, SNOW};

struct TileData {
    static constexpr float WATER = 0.45f;
    static constexpr float SAND = 0.5f;
    static constexpr float GRASS = 0.61f;
    static constexpr float MOUNTAIN = 0.68f;
    static constexpr float SNOW = 1.f;
};

class World {
  public:
    World(Settings);

    v2 size;
    float z;
    float render_scale;
    std::vector<std::vector<v3>> map_data;

    void draw(SDL_Renderer *);
    void update(SDL_Renderer *);
};

//
// Created by Davit Stepanyan on 04.10.23.
//

#ifndef CPP_SPRITESYSTEM_H
#define CPP_SPRITESYSTEM_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "ComponentSystem.h"

struct SpriteSystem : public ComponentSystem {
    void render(Registry& reg, sf::RenderWindow &renderer);
};


#endif //CPP_SPRITESYSTEM_H

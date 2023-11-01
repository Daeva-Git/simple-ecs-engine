//
// Created by Davit Stepanyan on 29.09.23.
//

#ifndef CPP_APPLICATIONADAPTER_H
#define CPP_APPLICATIONADAPTER_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "system/Registry.h"
#include "system/SpriteSystem.h"
#include "system/TransformSystem.h"

class ApplicationAdapter {
public:
    virtual void create();
    virtual void render(sf::RenderWindow &window);
    virtual void update(float delta);
    virtual void dispose();

    Registry registry;
    SpriteSystem spriteSystem;
    TransformSystem transformSystem;
};


#endif //CPP_APPLICATIONADAPTER_H

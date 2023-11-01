//
// Created by Davit Stepanyan on 04.10.23.
//

#include "SpriteSystem.h"
#include <iostream>

void SpriteSystem::render(Registry &reg, sf::RenderWindow &renderer) {
    // and finally all sprites are rendered in this render method
    // to their appropriate position on the screen

    for (const auto &pair: reg.entities) {
        Entity entity = pair.second;

        // Check if the entity has a SpriteComponent
        auto spriteIter = reg.sprites.find(entity);
        if (spriteIter != reg.sprites.end()) {
            sf::Sprite sprite = spriteIter->second.getSprite();

            // Check if the entity also has a TransformComponent
            auto transformIter = reg.transforms.find(entity);
            if (transformIter != reg.transforms.end()) {
                TransformComponent& transformComponent = transformIter->second;
                sprite.setPosition(transformComponent.pos_x, transformComponent.pos_y);
//                sprite.setScale(0.01f, 0.01f);
                std::cout << "S POS_X: " << transformComponent.pos_x << std::endl;
            }

            // Draw the sprite
            renderer.draw(sprite);
        }
    }
}

//
// Created by Davit Stepanyan on 04.10.23.
//

#include <SFML/Graphics/RenderWindow.hpp>
#include "TransformSystem.h"
#include <iostream>

void TransformSystem::update(Registry &reg, float delta) {
    for (const auto &pair: reg.entities) {
        Entity entity = pair.second;
        if (reg.transforms.find(entity) != reg.transforms.end()) {
            TransformComponent& transformComponent = reg.transforms[entity];
            transformComponent.pos_x += transformComponent.vel_x * delta;
            std::cout << "T POS_X: " << transformComponent.pos_x << std::endl;
            transformComponent.pos_y += transformComponent.vel_y * delta;
        }
    }
}
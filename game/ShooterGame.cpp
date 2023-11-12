//
// Created by Davit Stepanyan on 29.09.23.
//

#include <iostream>
#include "ShooterGame.h"

void ShooterGame::create() {
    Entity entity;

    // TODO: change into proper entity init and add component system
    // register entity
    registry.entities[entity.getId()] = entity;
    // register sprite
    registry.sprites[entity] = SpriteComponent("../../raw-assets/survivor-idle_rifle_0.png");
    // register sprite
    TransformComponent transformComponent = TransformComponent();
    //transformComponent.pos_x = 400;  // Near the center of the window's width
    //transformComponent.pos_y = 300;  // Near the center of the window's height
    registry.transforms[entity] = transformComponent;
}

void ShooterGame::render(sf::RenderWindow &window) {
   ApplicationAdapter::render(window);
}

void ShooterGame::update(float delta) {
    ApplicationAdapter::update(delta);
    std::cout << delta << std::endl;
}

//
// Created by Davit Stepanyan on 02.10.23.
//

#include "SpriteComponent.h"
#include <iostream>

SpriteComponent::SpriteComponent(const std::string& texturePath) {
    texture = new sf::Texture();
    if (!texture->loadFromFile(texturePath)) {
        std::cerr << "Failed to load texture from " << texturePath << std::endl;
        std::cout << "Failed to load texture from " << texturePath << std::endl;
        delete texture;
        texture = nullptr;
    } else {
        sprite.setTexture(*texture);
    }
}

SpriteComponent::~SpriteComponent() {
    // TODO: figure out how destructors work
//    if (texture) {
//        delete texture;
//        texture = nullptr;
//    }
}
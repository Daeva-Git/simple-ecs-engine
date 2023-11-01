//
// Created by Davit Stepanyan on 02.10.23.
//

#ifndef CPP_SPRITECOMPONENT_H
#define CPP_SPRITECOMPONENT_H

#include <string>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "Component.h"

struct SpriteComponent : public Component {
private:
    sf::Texture* texture;
    sf::Sprite sprite;

public:
    explicit SpriteComponent(const std::string& texturePath);
    SpriteComponent() : texture(nullptr) {}
    ~SpriteComponent(); // Destructor to clean up dynamically allocated memory
    sf::Sprite getSprite () {
        return sprite;
    }
};

#endif //CPP_SPRITECOMPONENT_H

//
// Created by Davit Stepanyan on 29.09.23.
//

#ifndef CPP_SHOOTERGAME_H
#define CPP_SHOOTERGAME_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "ShooterGame.h"
#include "../engine/ApplicationAdapter.h"

struct ShooterGame : public ApplicationAdapter {
    void create() override;
    void render(sf::RenderWindow &window) override;
    void update(float delta) override;
};


#endif //CPP_SHOOTERGAME_H

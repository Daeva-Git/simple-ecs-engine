//
// Created by Davit Stepanyan on 29.09.23.
//

#ifndef CPP_SHOOTERGAME_H
#define CPP_SHOOTERGAME_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "ShooterGame.h"
#include "../engine/ApplicationAdapter.h"

class ShooterGame : public ApplicationAdapter {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    void create() override;
    void render(sf::RenderWindow &window) override;
};


#endif //CPP_SHOOTERGAME_H

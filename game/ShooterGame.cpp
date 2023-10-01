//
// Created by Davit Stepanyan on 29.09.23.
//

#include "ShooterGame.h"
void ShooterGame::create() {
    if (!texture.loadFromFile("../raw-assets/sprite.png")) {
        // Handle error
    }
    sprite.setTexture(texture);
}

void ShooterGame::render(sf::RenderWindow &window) {
    window.clear();
    window.draw(sprite);
    window.display();
}

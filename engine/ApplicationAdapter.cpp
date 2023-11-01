//
// Created by Davit Stepanyan on 29.09.23.
//

#include "ApplicationAdapter.h"

void ApplicationAdapter::create() {}
//void ApplicationAdapter::render(sf::RenderWindow &window) {
//    sf::Vector2u windowSize = window.getSize();
//    float windowAspectRatio = (float) windowSize.x / (float) windowSize.y;
//
//    float worldWidth = 16.0f;  // Set these to your "world" dimensions
//    float worldHeight = 9.0f;
//    float worldAspectRatio = worldWidth / worldHeight;
//
//    sf::Vector2f viewSize;
//
//    if (windowAspectRatio > worldAspectRatio) {
//        // The window is wider than the world; extend width
//        viewSize.x = worldHeight * windowAspectRatio;
//        viewSize.y = worldHeight;
//    } else {
//        // The window is taller than the world; extend height
//        viewSize.x = worldWidth;
//        viewSize.y = worldWidth / windowAspectRatio;
//    }
//
//    sf::View view(sf::Vector2f(worldWidth / 2, worldHeight / 2), viewSize);
//    window.setView(view);
//
//    window.clear();
//    spriteSystem.render(registry, window);
//    window.display();
//}
void ApplicationAdapter::render(sf::RenderWindow &window) {
    // TODO: redo
    sf::Vector2u windowSize = window.getSize();
    float windowAspectRatio = (float) windowSize.x / (float) windowSize.y;

    float worldWidth = 2560;  // Now in pixel units
    float worldHeight = 1440; // Now in pixel units
    float worldAspectRatio = worldWidth / worldHeight;

    sf::Vector2f viewSize;

    if (windowAspectRatio > worldAspectRatio) {
        viewSize.x = worldHeight * windowAspectRatio;
        viewSize.y = worldHeight;
    } else {
        viewSize.x = worldWidth;
        viewSize.y = worldWidth / windowAspectRatio;
    }

    sf::View view(sf::Vector2f(worldWidth / 2, worldHeight / 2), viewSize);
//    sf::View view(sf::Vector2f(4, 3), sf::Vector2f(16, 9));
    window.setView(view);

    window.clear();
    spriteSystem.render(registry, window);
    window.display();
}


//void ApplicationAdapter::render(sf::RenderWindow &window) {
//    sf::Vector2u windowSize = window.getSize();
//    sf::Vector2f viewCenter(windowSize.x / 2.0f, windowSize.y / 2.0f);
//    sf::Vector2f viewSize(windowSize.x, windowSize.y);
//
//    sf::View view(viewCenter, viewSize);
//    window.setView(view);
//
//    window.clear();
//    spriteSystem.render(registry, window);
//    window.display();
//}



void ApplicationAdapter::dispose() {}
void ApplicationAdapter::update(float delta) {
    transformSystem.update(registry, delta);
    spriteSystem.update(registry, delta);
}

#include <SFML/Graphics.hpp>
#include "game/ShooterGame.h"

int main()
{
    ShooterGame app;
    app.create();

    sf::RenderWindow window(sf::VideoMode(800, 600), "Shooter");

    unsigned long oldTime = 0;
    while (window.isOpen()) {

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        float difference = clock() - oldTime;
        float deltaTime = difference / 100.0f;// Delta time in ms
        app.update(deltaTime);
        app.render(window);
        oldTime = clock();
    }

    app.dispose();
    return 0;
}

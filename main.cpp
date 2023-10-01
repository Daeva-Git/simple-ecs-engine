#include <SFML/Graphics.hpp>
#include "game/ShooterGame.h"

int main()
{
    ShooterGame app;
    app.create();

    sf::RenderWindow window(sf::VideoMode(800, 600), "Shooter");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        app.render(window);
    }

    app.dispose();
    return 0;
}

//
// Created by Davit Stepanyan on 29.09.23.
//

#ifndef CPP_APPLICATIONADAPTER_H
#define CPP_APPLICATIONADAPTER_H


#include <SFML/Graphics/RenderWindow.hpp>

class ApplicationAdapter {
public:
    virtual void create();
    virtual void render(sf::RenderWindow &window);
    virtual void dispose();
};


#endif //CPP_APPLICATIONADAPTER_H

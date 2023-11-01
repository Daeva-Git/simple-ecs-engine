//
// Created by Davit Stepanyan on 02.10.23.
//

#ifndef CPP_TRANSFORMCOMPONENT_H
#define CPP_TRANSFORMCOMPONENT_H

#include "Component.h"

class TransformComponent : public Component {
public:
    float vel_x{};
    float vel_y{};
    float pos_x{};
    float pos_y{};
};


#endif //CPP_TRANSFORMCOMPONENT_H

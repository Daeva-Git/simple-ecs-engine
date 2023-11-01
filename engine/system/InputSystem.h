//
// Created by Davit Stepanyan on 09.10.23.
//

#ifndef CPP_INPUTSYSTEM_H
#define CPP_INPUTSYSTEM_H


#include "ComponentSystem.h"

class InputSystem : public ComponentSystem {
    void update(Registry& reg);
};


#endif //CPP_INPUTSYSTEM_H

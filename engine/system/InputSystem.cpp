//
// Created by Davit Stepanyan on 09.10.23.
//

#include "InputSystem.h"
#include <SFML/Window/Keyboard.hpp>

void InputSystem::update(Registry &reg) {
    for (const auto& pair : reg.entities) {
        Entity entity = pair.second;

        if (reg.inputs.find(entity) != reg.inputs.end()) {
            InputComponent& input = reg.inputs[entity];

        }
    }
}

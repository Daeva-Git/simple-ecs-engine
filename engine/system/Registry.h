#include <unordered_map>
#include "../entity/Entity.h"
#include "../components/SpriteComponent.h"
#include "../components/TransformComponent.h"
#include "../components/InputComponent.h"

//
// Created by Davit Stepanyan on 02.10.23.
//

#ifndef CPP_REGISTRY_H
#define CPP_REGISTRY_H


struct Registry {
    std::unordered_map<size_t, Entity> entities{};
    std::unordered_map<Entity, SpriteComponent> sprites{};
    std::unordered_map<Entity, TransformComponent> transforms{};
    std::unordered_map<Entity, InputComponent> inputs{};
};


#endif //CPP_REGISTRY_H

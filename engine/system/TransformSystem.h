
//
// Created by Davit Stepanyan on 04.10.23.
//

#ifndef CPP_TRANSFORMSYSTEM_H
#define CPP_TRANSFORMSYSTEM_H


#include "ComponentSystem.h"
#include "Registry.h"

struct TransformSystem : public ComponentSystem
{
    void update(Registry &reg, float delta) override;
};


#endif //CPP_TRANSFORMSYSTEM_H

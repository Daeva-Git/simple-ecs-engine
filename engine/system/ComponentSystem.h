//
// Created by Davit Stepanyan on 02.10.23.
//

#ifndef CPP_COMPONENTSYSTEM_H
#define CPP_COMPONENTSYSTEM_H


#include "Registry.h"

struct ComponentSystem {
    virtual void update(Registry &reg, float delta);
};


#endif //CPP_COMPONENTSYSTEM_H

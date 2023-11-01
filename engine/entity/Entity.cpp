//
// Created by Davit Stepanyan on 02.10.23.
//

#include "Entity.h"

// Initialize static member
int Entity::entityCount = 0;

Entity::Entity() {
    id = ++entityCount;
}

int Entity::getMaxEntity() {
    return entityCount;
}

std::size_t Entity::getId() const {
    return id;
}

bool Entity::hasId(std::size_t queryId) const {
    return id == queryId;
}

bool Entity::operator==(const Entity &other) const {
    return id == other.id;
}

namespace std {
    std::size_t hash<Entity>::operator()(const Entity& entity) const {
        return std::hash<std::size_t>()(entity.getId());
    }
}

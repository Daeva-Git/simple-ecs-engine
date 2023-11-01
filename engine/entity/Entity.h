//
// Created by Davit Stepanyan on 02.10.23.
//

#ifndef CPP_ENTITY_H
#define CPP_ENTITY_H

#include <cstddef>
#include <functional>

class Entity {
private:
    static int entityCount;
    int id;

public:
    Entity();
    static int getMaxEntity();
    std::size_t getId() const;
    bool hasId(std::size_t queryId) const;
    bool operator==(const Entity &other) const;
};

namespace std {
    template <>
    struct hash<Entity> {
        std::size_t operator()(const Entity& entity) const;
    };
}

#endif // CPP_ENTITY_H

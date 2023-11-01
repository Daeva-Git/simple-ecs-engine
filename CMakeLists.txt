cmake_minimum_required(VERSION 3.14)
project(cpp) # project name

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        engine/ApplicationAdapter.cpp
        engine/ApplicationAdapter.h
        game/ShooterGame.cpp
        game/ShooterGame.h
        engine/components/Component.cpp
        engine/components/Component.h
        game/Survivor.cpp
        game/Survivor.h
        engine/system/ComponentSystem.cpp
        engine/system/ComponentSystem.h
        engine/system/Registry.cpp
        engine/system/Registry.h
        engine/system/Registry.cpp
        engine/entity/Entity.cpp
        engine/entity/Entity.h
        engine/components/TransformComponent.cpp
        engine/components/TransformComponent.h
        engine/components/SpriteComponent.cpp
        engine/components/SpriteComponent.h
        engine/system/Registry.cpp
        engine/system/SpriteSystem.cpp
        engine/system/SpriteSystem.h
        engine/system/TransformSystem.cpp
        engine/system/TransformSystem.h
        engine/system/InputSystem.cpp
        engine/system/InputSystem.h
        game/system/GameRegistry.cpp
        game/system/GameRegistry.h
        engine/components/InputComponent.cpp
        engine/components/InputComponent.h
)
add_executable(cpp ${SOURCE_FILES}) # project name
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(cpp sfml-system sfml-window sfml-graphics sfml-audio sfml-network)  # project name
# project name is cpp later change it
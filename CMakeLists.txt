cmake_minimum_required(VERSION 3.14)
project(cpp) # project name

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        engine/ApplicationAdapter.cpp
        engine/ApplicationAdapter.h
        game/ShooterGame.cpp
        game/ShooterGame.h
        engine/GameObject.cpp
        engine/GameObject.h
        engine/Component.cpp
        engine/Component.h)
add_executable(cpp ${SOURCE_FILES}) # project name
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(cpp sfml-system sfml-window sfml-graphics sfml-audio sfml-network)  # project name
# project name is cpp later change it
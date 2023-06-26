cmake_minimum_required(VERSION 3.5)

project(motion_physics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(motion_physics main.cpp
    vector3d.h
    vector3d.cpp
    object.h
    object.cpp
    formulas.h
    formulas.cpp
    parameters.h
    parameters.cpp
    timeline.h
    timeline.cpp
    shape.h
    shape.cpp
    time.h
    time.cpp
    kinematics.h
    kinematics.cpp
)

install(TARGETS motion_physics
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

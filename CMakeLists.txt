cmake_minimum_required(VERSION 3.5)

project(motion_physics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB SOURCES CONFIGURE_DEPENDS
    "source/*.h"
    "source/*.cpp")
#set(SOURCES source/main.cpp
#    source/vector3d.h
#    source/vector3d.cpp
#    source/formulas.h
#    source/formulas.cpp
#    source/time.h
#    source/time.cpp
#    source/shape.h
#    source/shape.cpp
#    source/kinematics.h
#    source/kinematics.cpp
#    source/parameters.h
#    source/parameters.cpp
#    source/timeline.h
#    source/timeline.cpp
#)
add_executable(motion_physics ${SOURCES})

install(TARGETS motion_physics
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

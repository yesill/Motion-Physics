cmake_minimum_required(VERSION 3.5)

project(motion_physics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB SOURCES CONFIGURE_DEPENDS
    "source/*.h"
    "source/*.cpp")
add_executable(motion_physics ${SOURCES})

install(TARGETS motion_physics
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

cmake_minimum_required(VERSION 3.17)
project(Lab2020_P)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2020_P main.cpp container_out.cpp container_in.cpp container_hashfunctions.cpp container.h
        element.h figure.h figure_getkey.cpp figure_out.cpp figure_in.cpp mType.h sphere_in.cpp sphere.h sphere_out.cpp
        parallelepiped_out.cpp parallelepiped_in.cpp parallelepiped.h)
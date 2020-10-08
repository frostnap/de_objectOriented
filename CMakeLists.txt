cmake_minimum_required(VERSION 3.17)
project(Lab2020)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2020 main.cpp container.h container_hashfunctions.cpp container_in.cpp container_out.cpp
        container_sort.cpp element.h figure.h figure_getkey.cpp figure_in.cpp figure_out.cpp mType.h
        parallelepiped.h parallelepiped_in.cpp parallelepiped_out.cpp parallelepiped_function.cpp
        sphere.h sphere_function.cpp sphere_out.cpp sphere_in.cpp tetraedr.h tetraedr_function.cpp tetraedr_out.cpp
        tetraedr_in.cpp)
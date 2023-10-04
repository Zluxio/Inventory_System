cmake_minimum_required(VERSION 3.26)
project(Inventory_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inventory_System main.cpp
        functions.cpp
        functions.h)

cmake_minimum_required(VERSION 3.19)
project(OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOP
        main.cpp Ingredient.cpp Ingredient.h Pizza.cpp Pizza.h Pizzerie.cpp Pizzerie.h Angajat.cpp Angajat.h)

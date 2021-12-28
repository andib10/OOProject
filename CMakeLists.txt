cmake_minimum_required(VERSION 3.19)
project(OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP
        main.cpp Ingredient.cpp Ingredient.h Pizza.cpp Pizza.h Pizzerie.cpp Pizzerie.h Angajat.cpp Angajat.h Bucatar.cpp Bucatar.h Livrator.cpp Livrator.h Eroare.cpp Eroare.h Comanda.cpp Comanda.h Ingredient_Builder.cpp Ingredient_Builder.h Pizza_Factory.cpp Pizza_Factory.h)

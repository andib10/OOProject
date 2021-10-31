
#ifndef OOP_PIZZA_H
#define OOP_PIZZA_H

#include <iostream>
#include <vector>
#include "Ingredient.h"

class Pizza {
    std::string nume;
    std::vector<Ingredient> ingrediente;

public:
    Pizza(const std::string &nume);

    Pizza(const std::string &nume, const std::vector<Ingredient> &ingrediente);

    friend std::ostream &operator<<(std::ostream &os, const Pizza &pizza);

    Pizza(const Pizza &copie);

    Pizza& operator=(const Pizza& copie);

    virtual ~Pizza();

    void adauga(Ingredient Ingredient);

    void schimba(const Ingredient ingredient1, const Ingredient ingredient2);

   void sterge(Ingredient ingredient);
};


#endif //OOP_PIZZA_H

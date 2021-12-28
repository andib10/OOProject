
#ifndef OOP_PIZZA_H
#define OOP_PIZZA_H

#include <iostream>
#include <vector>
#include "Ingredient.h"

enum class DIMENSIUNE {MARE, MICA, MEDIE};

std::ostream &operator<<(std::ostream &os, const enum DIMENSIUNE &dimensune);


class Pizza {
    std::string nume;
    std::vector<Ingredient> ingrediente;
    DIMENSIUNE dim;
    float pret;


public:
    Pizza(const std::string &nume);

    Pizza(const std::string &nume, const std::vector<Ingredient> &ingrediente, DIMENSIUNE dim, float pret);

    friend std::ostream &operator<<(std::ostream &os, const Pizza &pizza);

    Pizza(const Pizza &copie);

    Pizza& operator=(const Pizza& copie);

    virtual ~Pizza();

    void adauga(Ingredient Ingredient);

    void schimba(const Ingredient ingredient1, const Ingredient ingredient2);

    void sterge(Ingredient &ingredient);

    float getPret() const;

    std::vector<Ingredient> &getIngrediente();

};


#endif //OOP_PIZZA_H


#ifndef OOP_INGREDIENT_H
#define OOP_INGREDIENT_H

#include <string>
#include <ostream>

class Ingredient {
    std::string denumire;
    int cantitate;

public:
    Ingredient(const std::string &denumire, int cantitate);

    friend std::ostream &operator<<(std::ostream &os, const Ingredient &ingredient);

    virtual ~Ingredient();

    Ingredient (const Ingredient &copie);

    Ingredient& operator=(const Ingredient& copie);

    bool operator==(const Ingredient& copie);

};


#endif //OOP_INGREDIENT_H

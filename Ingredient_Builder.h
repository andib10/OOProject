
#ifndef OOP_INGREDIENT_BUILDER_H
#define OOP_INGREDIENT_BUILDER_H

#include <string>
#include "Ingredient.h"
#include "Eroare.h"

class Ingredient_Builder {
private:
    Ingredient I;
public:
    Ingredient_Builder() = default;

    Ingredient_Builder& denumire(std::string nume);

    Ingredient_Builder& cantitate(int cantitate);

    Ingredient build();
};


#endif //OOP_INGREDIENT_BUILDER_H

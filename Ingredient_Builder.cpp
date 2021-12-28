
#include "Ingredient_Builder.h"

Ingredient_Builder &Ingredient_Builder::denumire(std::string nume) {
    I.denumire = nume;
    return *this;
}

Ingredient_Builder &Ingredient_Builder::cantitate(int cantitate) {
    if(cantitate < 5)
        throw(eroare_cantitate());
    I.cantitate = cantitate;
    return *this;
}

Ingredient Ingredient_Builder::build() {
    return I;
}

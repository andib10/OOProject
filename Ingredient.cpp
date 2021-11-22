
#include "Ingredient.h"

Ingredient::Ingredient(const std::string &denumire, int cantitate) : denumire(denumire), cantitate(cantitate) {}

std::ostream &operator<<(std::ostream &os, const Ingredient &ingredient) {
    os << "\ndenumire: " << ingredient.denumire << ", cantitate: " << ingredient.cantitate;
    return os;
}

bool Ingredient::operator==(const Ingredient &copie) {
    return this->denumire == copie.denumire && cantitate == copie.cantitate;
}

Ingredient &Ingredient::operator=(const Ingredient &copie) {
    if(this != &copie) {
        this->denumire = copie.denumire;
        this->cantitate = copie.cantitate;
    }
    return *this;
}

Ingredient::~Ingredient() {}

Ingredient::Ingredient(const Ingredient &copie) {
    this->denumire = copie.denumire;
    this->cantitate = copie.cantitate;
}



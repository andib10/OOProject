
#include "Ingredient.h"

Ingredient::Ingredient(const std::string &denumire, int cantitate) : denumire(denumire), cantitate(cantitate) {}

std::ostream &operator<<(std::ostream &os, const Ingredient &ingredient) {
    os << "denumire: " << ingredient.denumire << ", cantitate: " << ingredient.cantitate << "\t";
    return os;
}

bool Ingredient::operator==(const Ingredient &copie) {
    if (this->denumire == copie.denumire && cantitate == copie.cantitate)
        return true;
    return false;
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



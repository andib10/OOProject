
#include "Ingredient.h"
#include "Eroare.h"

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



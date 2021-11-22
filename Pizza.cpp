
#include "Pizza.h"
#include "Eroare.h"


Pizza::Pizza(const std::string &nume) : nume(nume) {
    dim = DIMENSIUNE::MICA;
    pret = 20;
}

Pizza::Pizza(const std::string &nume, const std::vector<Ingredient> &ingrediente, DIMENSIUNE dim, float pret) : nume(
        nume), ingrediente(ingrediente), dim(dim), pret(pret) {}

std::ostream &operator<<(std::ostream &os, const enum DIMENSIUNE &dimensune) {
    switch(dimensune) {
        case DIMENSIUNE::MICA:
            os << "mica";
            break;
        case DIMENSIUNE::MARE:
            os << "mare";
            break;
        case DIMENSIUNE::MEDIE:
            os << "medie";
            break;
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const Pizza &pizza) {
    os << " nume: " << pizza.nume << "\ningrediente: ";
    for(const auto& ingredient : pizza.ingrediente)
        os  << ingredient;
    os << "\ndimensiune: "<< pizza.dim << "\npret: " << pizza.pret;
    return os;
}

Pizza::Pizza(const Pizza &copie) {
    this->nume = copie.nume;
    this->dim = copie.dim;
    this->pret = copie.pret;

    for(const auto& ingredient : copie.ingrediente) {
        this->ingrediente.push_back(ingredient);
    }
}

Pizza &Pizza::operator=(const Pizza &copie) {
    if(this != &copie) {
        this->nume = copie.nume;
        this->ingrediente = copie.ingrediente;
        this->dim = copie.dim;
        this->pret = copie.pret;
    }
    return *this;
}

Pizza::~Pizza() {}

void Pizza::adauga(Ingredient Ingredient) {
    ingrediente.push_back(Ingredient);
}

void Pizza::schimba(const Ingredient ingredient1, const Ingredient ingredient2) {
    bool ok = 0;
    for (auto &i : ingrediente) {
        if(i == ingredient1) {
            ok = 1;
            i = ingredient2;
        }
    }
    if (ok == 1)
        std::cout << "am schimbat ingredientele\n";
    else
        throw ingredient_not_found();
}

void Pizza::sterge(Ingredient &ingredient) {
    for (int i = 0; i < ingrediente.size(); ++i) {
        if(ingrediente[i] == ingredient){
            ingrediente.erase(ingrediente.begin()+i);
            return;
        }
    }
    throw ingredient_not_found();
}

float Pizza::getPret() const {
    return pret;
}





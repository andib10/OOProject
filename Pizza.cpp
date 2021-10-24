
#include <algorithm>
#include "Pizza.h"

Pizza::Pizza(const std::string &nume) : nume(nume) {}

Pizza::Pizza(const std::string &nume, const std::vector<Ingredient> &ingrediente) : nume(nume),
                                                                                    ingrediente(ingrediente) {}

std::ostream &operator<<(std::ostream &os, const Pizza &pizza) {
    os << " nume: " << pizza.nume << " ingrediente: ";
    for(const auto& ingredient : pizza.ingrediente)
        os << " ingrediente: " << ingredient;
    return os;
}

Pizza::Pizza(const Pizza &copie) {
    this->nume = copie.nume;

    for(const auto& ingredient : copie.ingrediente) {
        this->ingrediente.push_back(ingredient);
    }
//    for (int i = 0; i < copie.ingrediente.size(); ++i) {
//        ingrediente[i] = copie.ingrediente[i];

}

Pizza &Pizza::operator=(const Pizza &copie) {
    if(this != &copie) {
        this->nume = copie.nume;
        this->ingrediente = copie.ingrediente;
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
        std::cout << "nu am gasit ingredientul cautat\n";
}


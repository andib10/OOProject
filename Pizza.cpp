
#include "Pizza.h"

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

Pizza::~Pizza() {

}


#include "Pizzerie.h"

Pizzerie::Pizzerie(const std::string &nume, const std::vector<Pizza> &pizzas, const std::vector<Angajat> &angajati)
        : nume(nume), pizzas(pizzas), angajati(angajati) {}

std::ostream &operator<<(std::ostream &os, const Pizzerie &pizzerie) {
    os << "nume: " << pizzerie.nume << "\npizzas: ";
    for(const auto& pizza : pizzerie.pizzas)
        os << "\npizza:" << pizza;
    os << "\nangajati: ";
    for(const auto& angajat : pizzerie.angajati)
        os << angajat;
    return os;
}

void Pizzerie::adaugaP(Pizza pizza) {
    pizzas.push_back(pizza);
}

void Pizzerie::adaugaA(Angajat angajat) {
    angajati.push_back(angajat);
}

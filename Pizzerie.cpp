
#include "Pizzerie.h"

Pizzerie::Pizzerie(const std::string &nume, const std::vector<Pizza> &pizzas, const std::vector<std::shared_ptr<Angajat>> &angajati)
        : nume(nume), pizzas(pizzas), angajati(angajati) {}

std::ostream &operator<<(std::ostream &os, const Pizzerie &pizzerie) {
    os << "nume: " << pizzerie.nume << "\npizzas: ";
    for(const auto& pizza : pizzerie.pizzas)
        os << "\npizza:" << pizza;
    os << "\nangajati: ";
    for(const auto& angajat : pizzerie.angajati)
        os << *angajat;
    return os;
}

void Pizzerie::adauga(Pizza pizza) {
    pizzas.push_back(pizza);
}

void Pizzerie::adauga(Angajat &angajat_) {
    angajati.push_back(angajat_.clone());
}

Pizzerie::Pizzerie(const Pizzerie &copie) : nume(copie.nume) {
    for(const auto& pizza : copie.pizzas)
        pizzas.push_back(pizza);

    for(const auto &angajat : copie.angajati)
        angajati.push_back(angajat->clone());
}

Pizzerie &Pizzerie::operator=(const Pizzerie &copie) {
    if(this != &copie) {
        nume = copie.nume;

        for(const auto& pizza : copie.pizzas)
            pizzas.push_back(pizza);

        auto angajati_noi = std::vector<std::shared_ptr<Angajat>>();
        for(const auto &angajat : copie.angajati) {
            angajati_noi.push_back(angajat->clone());
        }
        angajati = angajati_noi;
    }
    return *this;
}

std::vector<Pizza> &Pizzerie::getPizzas() {
    return pizzas;
}

int Pizzerie::salariiTotale() {
    int total = 0;
    int nrAngajati = angajati.size();
    for (int i = 0; i < nrAngajati; ++i) {
        total += angajati[i]->totalSalary();
    }
    return total;
}


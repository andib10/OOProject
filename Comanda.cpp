
#include "Comanda.h"

Comanda::Comanda(const std::vector<std::pair<Pizza, int>> &pizzas, const Pizzerie &pizzerie, const Livrator &livrator,
                 int tip) : pizzas(pizzas), pizzerie(pizzerie), livrator(livrator), tip(tip) {
    nr++;
    total = 0;
    for(const auto &pizza : pizzas) {
        total += pizza.second * pizza.first.getPret();
    }
    std::cout << "\nPret comanda " << nr << ": " << total <<"\n";
}

Comanda::~Comanda() {
    nr--;
}

int Comanda::getNr() {
    std::cout << "\nNumar comenzi: ";
    return nr;
}



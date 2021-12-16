
#include "Comanda.h"

Comanda::Comanda(const std::vector<std::pair<Pizza, int>> &pizzas, const Pizzerie &pizzerie, const Livrator &livrator,
                 int tip) : pizzas(pizzas), pizzerie(pizzerie), livrator(livrator), tip(tip) {
    nr++;
    total = 0;
    for(const auto &pizza : pizzas) {
        total += pizza.second * pizza.first.getPret();
    }
}

Comanda::~Comanda() {
    nr--;
}

int Comanda::getNr() {
    return nr;
}


float Comanda::getTotal() const {
    return total;
}

Comanda::Comanda(const Comanda &copie) : pizzas(copie.pizzas), pizzerie(copie.pizzerie),
                livrator(copie.livrator),  tip(copie.tip), total(copie.total) {
    nr++;
}


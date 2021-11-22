
#include "Comanda.h"

Comanda::Comanda(const std::vector<std::pair<Pizza, int>> &pizzas, const Livrator &livrator, const Bucatar &bucatar,
                 int tip) : pizzas(pizzas), livrator(livrator), bucatar(bucatar), tip(tip) {
    nr++;
    total = 0;
    for(const auto &pizza : pizzas) {
        total += pizza.second * pizza.first.getPret();
    }
    std::cout << "\nPret comanda: " << total <<"\n";
}

Comanda::~Comanda() {
    nr--;
}

int Comanda::getNr() {
    return nr;
}


#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H


#include "Pizza.h"
#include "Livrator.h"
#include "Bucatar.h"
#include "Pizzerie.h"

class Comanda {
    std::vector<std::pair<Pizza, int>> pizzas;
    Pizzerie pizzerie;
    Livrator livrator;
    float total;
    int tip;
    static int nr;
public:

    Comanda(const std::vector<std::pair<Pizza, int>> &pizzas, const Pizzerie &pizzerie, const Livrator &livrator,
            int tip);

    virtual ~Comanda();

    static int getNr();
};


#endif //OOP_COMANDA_H

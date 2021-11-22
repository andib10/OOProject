
#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H


#include "Pizza.h"
#include "Livrator.h"
#include "Bucatar.h"

class Comanda {
    std::vector<std::pair<Pizza, int>> pizzas;
    Livrator livrator;
    Bucatar bucatar;
    float total;
    int tip;
    static int nr;
public:
    Comanda(const std::vector<std::pair<Pizza, int>> &pizzas, const Livrator &livrator, const Bucatar &bucatar,
            int tip);

    virtual ~Comanda();

    static int getNr();
};


#endif //OOP_COMANDA_H

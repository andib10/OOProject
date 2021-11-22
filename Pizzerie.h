
#ifndef OOP_PIZZERIE_H
#define OOP_PIZZERIE_H

#include <iostream>
#include <vector>
#include <memory>
#include "Angajat.h"
#include "Pizza.h"

class Pizzerie {
    std::string nume;
    std::vector<Pizza> pizzas;
    std::vector<std::shared_ptr<Angajat>> angajati;

public:
    Pizzerie(const std::string &nume, const std::vector<Pizza> &pizzas, const std::vector <std::shared_ptr<Angajat>> &angajati);

    friend std::ostream &operator<<(std::ostream &os, const Pizzerie &pizzerie);

    void adauga(Pizza pizza);

    void adauga(Angajat& angajat);

    Pizzerie(const Pizzerie &copie);

    Pizzerie &operator=(const Pizzerie &copie);

};


#endif //OOP_PIZZERIE_H

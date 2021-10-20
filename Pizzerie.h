
#ifndef OOP_PIZZERIE_H
#define OOP_PIZZERIE_H

#include <iostream>
#include <vector>
#include "Angajat.h"
#include "Pizza.h"

class Pizzerie {
    std::string nume;
    std::vector<Pizza> pizzas;
    std::vector<Angajat> angajati;

public:
    Pizzerie(const std::string &nume, const std::vector<Pizza> &pizzas, const std::vector<Angajat> &angajati);

    friend std::ostream &operator<<(std::ostream &os, const Pizzerie &pizzerie);

};


#endif //OOP_PIZZERIE_H

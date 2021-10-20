
#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H

#include <iostream>

class Angajat {
    std::string nume;
    int salariu;

public:
    Angajat(const std::string &nume, int salariu);

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

};


#endif //OOP_ANGAJAT_H

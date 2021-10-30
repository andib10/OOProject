
#include "Angajat.h"

Angajat::Angajat(const std::string &nume, int salariu) : nume(nume), salariu(salariu) {}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "\nnume: " << angajat.nume << ", salariu: " << angajat.salariu;
    return os;
}

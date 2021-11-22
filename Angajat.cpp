
#include "Angajat.h"

Angajat::Angajat(const std::string &nume, int salariu) : nume(nume), salariu(salariu) {}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    angajat.afis(os);
//    os << "\nnume: " << angajat.nume << ", salariu: " << angajat.salariu;
    return os;
}

void Angajat::afis(std::ostream &os) const {
    os << "\nnume: " << nume << ", salariu: " << salariu << ", ";
}

Angajat::~Angajat() {
//    std::cout << "destr angajat " << nume << "\n";
}







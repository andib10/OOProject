
#include "Bucatar.h"


Bucatar::Bucatar(const std::string &nume, int salariu, int bonus) : Angajat(nume, salariu), bonus(bonus) {}

std::shared_ptr<Angajat> Bucatar::clone() const {
    return std::make_shared<Bucatar>(*this);
}

Bucatar::~Bucatar() {
//    std::cout << "destr bucatar\n";
}

void Bucatar::afis(std::ostream &os) const {
    Angajat::afis(os);
    os << "bonus: " << bonus;
}

int Bucatar::totalSalary() const {
    std::cout << "Bucatarul " << nume << " salariu total: ";
    return salariu + bonus / 2;
}

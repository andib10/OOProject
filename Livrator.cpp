
#include "Livrator.h"

Livrator::Livrator(const std::string &nume, int salariu, int tips) : Angajat(nume, salariu), tips(tips) {}

std::shared_ptr<Angajat> Livrator::clone() const {
    return std::make_shared<Livrator>(*this);
}

Livrator::~Livrator() {
//    std::cout << "destr livrator\n";
}

void Livrator::afis(std::ostream &os) const {
    Angajat::afis(os);
    os << "tips: " << tips;
}

int Livrator::totalSalary() const {
    std::cout << "Livratorul " << nume << " salariu total: ";
    return salariu + tips;
}

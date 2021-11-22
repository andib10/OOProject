
#ifndef OOP_LIVRATOR_H
#define OOP_LIVRATOR_H


#include "Angajat.h"

class Livrator : public Angajat {
    int tips;
protected:
    void afis(std::ostream &os) const override;
public:
    Livrator(const std::string &nume, int salariu, int tips);

    std::shared_ptr<Angajat> clone() const override;

    ~Livrator();

    int totalSalary() const;
};


#endif //OOP_LIVRATOR_H

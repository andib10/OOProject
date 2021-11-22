
#ifndef OOP_BUCATAR_H
#define OOP_BUCATAR_H


#include "Angajat.h"

class Bucatar : public Angajat {
    int bonus;
protected:
    void afis(std::ostream &os) const override;
public:
    Bucatar(const std::string &nume, int salariu, int bonus);

    std::shared_ptr<Angajat> clone() const override;

    ~Bucatar();

    int totalSalary() const override;
};


#endif //OOP_BUCATAR_H

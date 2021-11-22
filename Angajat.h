
#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H

#include <iostream>
#include <memory>

class Angajat {
protected:
    std::string nume;
    int salariu;
    virtual void afis(std::ostream &os) const;
public:
    Angajat(const std::string &nume, int salariu);

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

    virtual std::shared_ptr <Angajat> clone() const = 0;

    virtual ~Angajat() = 0;

    virtual int totalSalary() const = 0;
};


#endif //OOP_ANGAJAT_H

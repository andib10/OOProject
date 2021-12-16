
#ifndef OOP_EROARE_H
#define OOP_EROARE_H


#include <stdexcept>

class Eroare : public std::runtime_error {
public:
    explicit Eroare(const std::string &arg);
};

class ingredient_not_found : public Eroare {
public:
    ingredient_not_found();
};

class eroare_cantitate : public Eroare {
public:
    eroare_cantitate();
};


#endif //OOP_EROARE_H

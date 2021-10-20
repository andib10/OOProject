
#ifndef OOP_INGREDIENT_H
#define OOP_INGREDIENT_H

#include <string>
#include <ostream>

class Ingredient {
    std::string denumire;
    int cantitate;

public:
    Ingredient(const std::string &denumire, int cantitate);

    friend std::ostream &operator<<(std::ostream &os, const Ingredient &ingredient);

//    const std::string &getDenumire() const;
//
//    void setDenumire(const std::string &denumire);
//
//    int getCantitate() const;
//
//    void setCantitate(int cantitate);

};


#endif //OOP_INGREDIENT_H

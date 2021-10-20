
#include "Ingredient.h"

Ingredient::Ingredient(const std::string &denumire, int cantitate) : denumire(denumire), cantitate(cantitate) {}

std::ostream &operator<<(std::ostream &os, const Ingredient &ingredient) {
    os << "denumire: " << ingredient.denumire << ", cantitate: " << ingredient.cantitate << "\t";
    return os;
}

//const std::string &Ingredient::getDenumire() const {
//    return denumire;
//}
//
//void Ingredient::setDenumire(const std::string &denumire) {
//    Ingredient::denumire = denumire;
//}
//
//int Ingredient::getCantitate() const {
//    return cantitate;
//}
//
//void Ingredient::setCantitate(int cantitate) {
//    Ingredient::cantitate = cantitate;
//}

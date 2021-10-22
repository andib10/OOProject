#include <iostream>
#include "Ingredient.h"
#include "Pizza.h"
#include "Angajat.h"
#include "Pizzerie.h"

int main() {

    Ingredient i("faina", 250);
    Ingredient i2("apa", 150);
    Ingredient i3("branza", 70);
    Ingredient i4("pui", 65);
    Angajat a1("Doru", 1900);
    Angajat a2("Aurel", 2000);
//    std::cout << i.getCantitate() << " " << i.getDenumire() << "\n";
//    std::cout << i2.getCantitate() << " " << i2.getDenumire() << "\n";
//    i = i2;
//    i.operator=(i2);


    Pizza p1("Quattro");
    Pizza p2("Pollo", {i, i2, i4});

    p1.adauga(i);
    p1.adauga(i2);
    p1.adauga(i3);

    Pizzerie P("Pizza Hut", {p1, p2}, {a1, a2});

    std::cout << P;

    return 0;

}

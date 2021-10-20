#include <iostream>
#include <vector>
#include "Ingredient.h"
#include "Pizza.h"
#include "Angajat.h"
#include "Pizzerie.h"

int main() {

    Ingredient i("faina", 250);
    Ingredient i2("apa", 150);
    Angajat a1("Doru", 1900);
    Angajat a2("Aurel", 2000);
//    std::cout << i.getCantitate() << " " << i.getDenumire() << "\n";
//    std::cout << i2.getCantitate() << " " << i2.getDenumire() << "\n";
//    i = i2;
//    i.operator=(i2);

    std::vector<Ingredient> ing;
    ing.push_back(i);
    ing.push_back(i2);

    Pizza p1("Pollo", ing);
    Pizza p2("Quattro", ing);

   Pizzerie P("Pizza Hot", {p1, p2}, {a1, a2});
   std::cout << P;

    return 0;

}

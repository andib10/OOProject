#include <iostream>
#include "Ingredient.h"
#include "Pizza.h"
#include "Angajat.h"
#include "Pizzerie.h"

int main() {

    Ingredient i1("mozzarella", 200);
    Ingredient i2("cheddar", 120);
    Ingredient i3("emmentaler", 70);
    Ingredient i4("branza cu mucegai", 35);
    Ingredient i5("sos de rosii", 100);
    Ingredient i6("sunca", 95);
    Ingredient i7("masline", 35);
    Ingredient i8("ciuperci", 50);

    Angajat a1("Scarlatescu", 8500);
    Angajat a2("Bontea", 9000);


    Pizza p1("Quattro Formaggi");
    Pizza p2("Roma", {i1, i5, i6, i7, i8});

    p1.adauga(i1);
    p1.adauga(i2);
    p1.adauga(i3);
    p1.adauga(i4);

//    std::cout << p1 << '\n';
    p2.schimba(i8, i3);
//    std::cout << p1;

    Pizzerie P("Pizza Hut", {p1, p2}, {a1, a2});

    std::cout << P;

    return 0;

}

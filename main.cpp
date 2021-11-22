#include <iostream>
#include "Ingredient.h"
#include "Pizza.h"
#include "Angajat.h"
#include "Pizzerie.h"
#include "Bucatar.h"
#include "Livrator.h"
#include "Eroare.h"
#include "Comanda.h"

int Comanda::nr = 0;

int main() {

    Ingredient i1("mozzarella", 200);
    Ingredient i2("cheddar", 120);
    Ingredient i3("emmentaler", 70);
    Ingredient i4("blue cheese", 35);
    Ingredient i5("tomato sauce", 100);
    Ingredient i6("ham", 95);
    Ingredient i7("olives", 35);
    Ingredient i8("mushrooms", 50);

    Bucatar a1("Scarlatescu", 8500, 300);
    Bucatar a2("Bontea", 9000, 500);
    Livrator a3("Dumitrescu", 3800, 1000);

    std::cout << a3.totalSalary() << "\n";

    Pizza p1("Quattro Formaggi");
    Pizza p2("Roma", {i1, i5, i6, i7, i8}, DIMENSIUNE::MEDIE, 22);

    p1.adauga(i1);
    p1.adauga(i2);
    p1.adauga(i3);
    p1.adauga(i4);

    try {
        p2.schimba(i4, i3);
    }
    catch(ingredient_not_found &e) {
        std::cout << e.what() <<"\n";
    }

    try {
        p2.sterge(i7);
    }
    catch(ingredient_not_found &e) {
        std::cout << e.what() <<"\n";
    }

    Pizzerie P("Pizza Hut", {p1}, {std::make_shared<Bucatar>(a1), std::make_shared<Bucatar>(a2)});

//    Pizzerie P2(P);
    P.adauga(p2);
    P.adauga(a3);

    std::cout << P;
//    std::cout << "\n-------------------------\n";
//    std::cout << P2;

    std::cout << "\n" << Comanda::getNr() << "\n";
    Comanda C({{p1, 2}, {p2, 3}}, a3, a1, 10);
    std::cout << Comanda::getNr() <<"\n";
    Comanda C2({{p1, 2}, {p2, 4}}, a3, a1, 10);
    std::cout << Comanda::getNr() <<"\n";

    return 0;
}

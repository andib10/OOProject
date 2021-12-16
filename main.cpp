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
    Ingredient i9("onion", 40);
    Ingredient i10("sweetcorn", 30);


    Bucatar a1("Scarlatescu", 8500, 300);
    Bucatar a2("Bontea", 9000, 500);
    Bucatar a3("Dumitrescu", 8800, 600);
    Livrator a4("Sorin", 3800, 1000);
    Livrator a5("Florin", 3700, 1100);

    std::cout << a3.totalSalary() << "\n";

    Pizza p1("Quattro Formaggi");
    Pizza p2("Roma", {i1, i5, i6, i7, i8}, DIMENSIUNE::MEDIE, 22);
    Pizza p3("Veggie", {i1, i2, i5, i7, i8, i9, i10}, DIMENSIUNE::MARE, 25);

    p1.adauga(i1);
    p1.adauga(i2);
    p1.adauga(i3);
    p1.adauga(i4);

    try {
        Ingredient i11("garlic", 2);
        p2.schimba(i4, i3);
        p2.sterge(i7);

    }
    catch(Eroare &e) {
        std::cout << e.what() <<"\n";
    }


    Pizzerie D("Domino's", {p1, p3}, {std::make_shared<Bucatar>(a1), std::make_shared<Bucatar>(a3), std::make_shared<Livrator>(a5)});
    Pizzerie P("Pizza Hut", {p1}, {std::make_shared<Bucatar>(a1), std::make_shared<Bucatar>(a2)});

    P.adauga(p2);
    P.adauga(a4);
    P.adauga(a5);
    D.adauga(a4);

    std::cout << P;

    std::cout << "\n----------------------------\n";


    Comanda C1({{p1, 2}, {p2, 3}}, P, a4, 15);
    Comanda C2({{p1, 1}, {p3, 2}}, D, a5, 10);

    std::cout << "Pret comanda: " << C1.getTotal() << "\n";
    std::cout << "Numar comenzi: " << Comanda::getNr();

    return 0;
}

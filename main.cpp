#include <iostream>
#include "Ingredient.h"
#include "Pizza.h"
#include "Angajat.h"
#include "Pizzerie.h"
#include "Bucatar.h"
#include "Livrator.h"
#include "Eroare.h"
#include "Comanda.h"
#include "Ingredient_Builder.h"
#include "Pizza_Factory.h"

int Comanda::nr = 0;

int main() {

    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(200).build();
    Ingredient i2 = b.cantitate(120).denumire("cheddar").build();
    Ingredient i3 = b.denumire("emmentaler").cantitate(70).build();
    Ingredient i4 = b.denumire("blue cheese").cantitate(35).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i6 = b.denumire("ham").cantitate(95).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    Ingredient i9 = b.denumire("onion").cantitate(40).build();
    Ingredient i10 = b.denumire("sweetcorn").cantitate(30).build();


    Bucatar a1("Scarlatescu", 8500, 300);
    Bucatar a2("Bontea", 9000, 500);
    Bucatar a3("Dumitrescu", 8800, 600);
    Livrator a4("Sorin", 3800, 1000);
    Livrator a5("Florin", 3700, 1100);

    std::cout << a3.totalSalary() << "\n";

    Pizza p1 = Pizza_Factory::Quattro_Formaggi_mica();
    Pizza p2 = Pizza_Factory::Roma_medie();
    Pizza p3 = Pizza_Factory::Veggie_mare();

    p3.adauga(i10);

    try {
        Ingredient i11 = b.denumire("garlic").cantitate(2).build();
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

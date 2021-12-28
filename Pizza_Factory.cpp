
#include "Pizza_Factory.h"
#include "Ingredient_Builder.h"

Pizza Pizza_Factory::Quattro_Formaggi_mica() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(200).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i3 = b.denumire("blue cheese").cantitate(70).build();
    Ingredient i4 = b.denumire("tomato sauce").cantitate(35).build();
    return Pizza("Quattro Formaggi", {i1, i2, i3, i4}, DIMENSIUNE::MICA, 20);
}

Pizza Pizza_Factory::Roma_medie() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(220).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i6 = b.denumire("ham").cantitate(95).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    return Pizza("Roma", {i1, i5, i6, i7, i8}, DIMENSIUNE::MEDIE, 22);
}

Pizza Pizza_Factory::Veggie_mare() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(230).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    Ingredient i9 = b.denumire("onion").cantitate(40).build();
    return Pizza("Veggie", {i1, i2, i5, i7, i8, i9}, DIMENSIUNE::MARE, 25);
}

Pizza Pizza_Factory::Quattro_Formaggi_medie() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(210).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i3 = b.denumire("blue cheese").cantitate(70).build();
    Ingredient i4 = b.denumire("tomato sauce").cantitate(35).build();
    return Pizza("Quattro Formaggi", {i1, i2, i3, i4}, DIMENSIUNE::MEDIE, 22);
}


Pizza Pizza_Factory::Roma_mica() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(200).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i6 = b.denumire("ham").cantitate(95).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    return Pizza("Roma", {i1, i5, i6, i7, i8}, DIMENSIUNE::MICA, 20);
}

Pizza Pizza_Factory::Veggie_mica() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(220).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    Ingredient i9 = b.denumire("onion").cantitate(40).build();
    return Pizza("Veggie", {i1, i2, i5, i7, i8, i9}, DIMENSIUNE::MICA, 20);
}

Pizza Pizza_Factory::Quattro_Formaggi_mare() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(220).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i3 = b.denumire("blue cheese").cantitate(70).build();
    Ingredient i4 = b.denumire("tomato sauce").cantitate(35).build();
    return Pizza("Quattro Formaggi", {i1, i2, i3, i4}, DIMENSIUNE::MARE, 25);
}

Pizza Pizza_Factory::Roma_mare() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(240).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i6 = b.denumire("ham").cantitate(95).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    return Pizza("Roma", {i1, i5, i6, i7, i8}, DIMENSIUNE::MARE, 25);
}

Pizza Pizza_Factory::Veggie_medie() {
    Ingredient_Builder b;
    Ingredient i1 = b.denumire("mozzarella").cantitate(210).build();
    Ingredient i2 = b.denumire("emmentaler").cantitate(120).build();
    Ingredient i5 = b.denumire("tomato sauce").cantitate(100).build();
    Ingredient i7 = b.denumire("olives").cantitate(35).build();
    Ingredient i8 = b.denumire("mushrooms").cantitate(50).build();
    Ingredient i9 = b.denumire("onion").cantitate(40).build();
    return Pizza("Veggie", {i1, i2, i5, i7, i8, i9}, DIMENSIUNE::MEDIE, 22);
}

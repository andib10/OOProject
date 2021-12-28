
#ifndef OOP_PIZZA_FACTORY_H
#define OOP_PIZZA_FACTORY_H


#include "Pizza.h"

class Pizza_Factory {
public:
    static Pizza Quattro_Formaggi_mica();
    static Pizza Roma_medie();
    static Pizza Veggie_mare();
    static Pizza Quattro_Formaggi_medie();
    static Pizza Roma_mica();
    static Pizza Veggie_mica();
    static Pizza Quattro_Formaggi_mare();
    static Pizza Roma_mare();
    static Pizza Veggie_medie();

};


#endif //OOP_PIZZA_FACTORY_H

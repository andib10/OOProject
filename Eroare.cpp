
#include "Eroare.h"

Eroare::Eroare(const std::string &arg) : runtime_error(arg) {}

ingredient_not_found::ingredient_not_found() : Eroare("ingredientul nu a fost gasit") {}

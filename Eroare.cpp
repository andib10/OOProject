
#include "Eroare.h"
#include <string>

Eroare::Eroare(const std::string &arg) : runtime_error("Eroare ingredient: " + arg) {}

ingredient_not_found::ingredient_not_found() : Eroare("ingredientul nu a fost gasit") {}

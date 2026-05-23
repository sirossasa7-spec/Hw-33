#include "Mammal.h"

Mammal::Mammal(string n, bool p, string h)
    : Animal(n, p) {

    habitat = h;
}

void Mammal::showInfo() {

    cout << "Млекопитающее: " << name << endl;
    cout << "Среда обитания: " << habitat << endl;
}
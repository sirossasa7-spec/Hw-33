#include "Animal.h"
#include "ZooException.h"
Animal::Animal(string n, bool p) {

    if (n.empty()) {
        throw NameException();
    }

    name = n;
    predator = p;
}

string Animal::getName() {
    return name;
}

void Animal::setName(string n) {
    name = n;
}

bool Animal::isPredator() {
    return predator;
}

void Animal::setPredator(bool p) {
    predator = p;
}

void Animal::showInfo() {
    cout << "Животное: " << name << endl;
}

Animal::~Animal() {
}
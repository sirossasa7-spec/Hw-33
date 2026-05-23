#include "Cage.h"
#include "ZooException.h"

Cage::Cage(int n, int m) {

    number = n;
    maxAnimals = m;
}

int Cage::getNumber() {
    return number;
}

int Cage::getCurrentCount() {
    return animals.size();
}

void Cage::addAnimal(Animal* animal) {

    if (animals.size() >= maxAnimals) {
        throw MaxCapacityException();
    }

    if (animal->isPredator()) {

        for (auto a : animals) {

            if (!a->isPredator()) {
                throw PredatorException();
            }
        }
    }

    animals.push_back(animal);

    cout << animal->getName()
        << " добавлен в клетку.\n";
}

void Cage::showAnimals() {

    cout << "\n=== Животные ===\n";

    for (auto a : animals) {

        a->showInfo();

        cout << "------------------\n";
    }
}

Cage::~Cage() {

    for (auto a : animals) {
        delete a;
    }
}
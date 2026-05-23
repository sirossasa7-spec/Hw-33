#pragma once
#include <vector>

#include "Animal.h"

using namespace std;

class Cage {
private:
    int number;
    int maxAnimals;

    vector<Animal*> animals;

public:
    Cage(int n, int m);

    int getNumber();

    int getCurrentCount();

    void addAnimal(Animal* animal);

    void showAnimals();

    ~Cage();
};
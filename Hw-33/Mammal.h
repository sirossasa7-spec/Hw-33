#pragma once
#include "Animal.h"

class Mammal : public Animal {
private:
    string habitat;

public:
    Mammal(string n, bool p, string h);

    void showInfo() override;
};

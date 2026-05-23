#pragma once
#include "Animal.h"

class Bird : public Animal {
private:
    int flySpeed;

public:
    Bird(string n, bool p, int s);

    void showInfo() override;
};


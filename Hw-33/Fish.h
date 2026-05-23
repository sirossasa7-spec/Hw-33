#pragma once
#include "Animal.h"

class Fish : public Animal {
private:
    bool deepWater;

public:
    Fish(string n, bool p, bool d);

    void showInfo() override;
};
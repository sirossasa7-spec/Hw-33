#include "Bird.h"

Bird::Bird(string n, bool p, int s)
    : Animal(n, p) {

    flySpeed = s;
}

void Bird::showInfo() {

    cout << "Птица: " << name << endl;
    cout << "Скорость полета: "
        << flySpeed << " км/ч" << endl;
}
#include "Fish.h"

Fish::Fish(string n, bool p, bool d)
    : Animal(n, p) {

    deepWater = d;
}

void Fish::showInfo() {

    cout << "Рыба: " << name << endl;
    cout << "Хищник: "
        << (predator ? "Да" : "Нет") << endl;

    cout << "Глубоководная: "
        << (deepWater ? "Да" : "Нет") << endl;
}
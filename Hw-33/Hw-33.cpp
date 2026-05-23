#include <iostream>
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include "Cage.h"
#include "ZooException.h"

using namespace std;

int main() {
    try {

        Fish badFish("", false, true);

    }
    catch (ZooException& ex) {

        cout << ex.showMessage() << endl;
    }

    cout << "\n====================\n";


    try {

        Cage cage1(1, 2);

        Animal* fish =
            new Fish("Немо", false, true);

        Animal* eagle =
            new Bird("Орел", true, 120);

        cage1.addAnimal(fish);

        cage1.addAnimal(eagle);

    }
    catch (ZooException& ex) {

        cout << ex.showMessage() << endl;
    }

    cout << "\n====================\n";


    try {

        Cage cage2(2, 1);

        Animal* tiger =
            new Mammal("Тигр", true, "Лес");

        Animal* wolf =
            new Mammal("Волк", true, "Лес");

        cage2.addAnimal(tiger);

        cage2.addAnimal(wolf);

    }
    catch (ZooException& ex) {

        cout << ex.showMessage() << endl;
    }

    return 0;
}
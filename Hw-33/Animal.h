#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    bool predator;

public:
    Animal(string n, bool p);

    string getName();
    void setName(string n);

    bool isPredator();
    void setPredator(bool p);

    virtual void showInfo();

    virtual ~Animal();
};
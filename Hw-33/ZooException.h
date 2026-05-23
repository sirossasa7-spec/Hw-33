#pragma once
#include <string>

using namespace std;

class ZooException {
public:
    virtual string showMessage() = 0;
};


class PredatorException : public ZooException {
public:
    string showMessage() override {
        return "Ошибка: нельзя добавить хищника к мирным животным!";
    }
};



class MaxCapacityException : public ZooException {
public:
    string showMessage() override {
        return "Ошибка: клетка переполнена!";
    }
};


class NameException : public ZooException {
public:
    string showMessage() override {
        return "Ошибка: имя животного пустое!";
    }
};
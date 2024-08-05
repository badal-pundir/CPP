// animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal(const string& name) : name(name) {}

    // Getter for name
    string getName() const {
        return name;
    }

    // Virtual method to be overridden by derived classes
    virtual void makeSound() const {
        cout << "Animal makes a sound" << endl;
    }

    // Virtual destructor
    virtual ~Animal() {}
};

#endif

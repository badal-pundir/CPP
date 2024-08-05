// dog.h
#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}

    // Override the makeSound method
    void makeSound() const override {
        cout << "Dog barks" << endl;
    }
};

#endif

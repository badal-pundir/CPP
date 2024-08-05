// main.cpp
#include <iostream>
#include "dog.h"
#include "animal.h"

using namespace std;

int main() {
    // Create an Animal object
    Animal a("Generic Animal");
    cout << a.getName() << ": ";
    a.makeSound(); // Output: Animal makes a sound

    // Create a Dog object
    Dog d("Buddy");
    cout << d.getName() << ": ";
    d.makeSound(); // Output: Dog barks

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string source = "Hello, World!";
    std::string destination;

    destination = source; // Using assignment operator

    std::cout << "Source: " << source << std::endl;
    std::cout << "Destination: " << destination << std::endl;

    return 0;
}

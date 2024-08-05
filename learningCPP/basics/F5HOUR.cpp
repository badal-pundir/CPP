#include<iostream>

int add(int a , int b) {
    return a + b;
}

int main() {
    int z ; // variables may contain random garbage value. WARNING.
    // may get initialize to 1, i.e z = 1
    // int y {}; // initialize to zero
    // int a {2};
    
    float floa {2.9f}; // compilation error
    // int a (2.9) // give warnning and initialize to 2
    int i = 1.3;

    std::cout<< "i: " <<i;

    int a {-1};
    float b {97.8f};
    double c {a * b};
    int d {a};

    //  floating numbers
    std::cout<<std::endl;
    // std::cout<<std::setprecesion(15);
    float number1 {1.123456789101112f};
    double number2 {1.123456789101112};
    long double number3 {1.123456789101112L};

    std::cout<< "number1: "<< number1 << std::endl;
    
    std::cout<< "number2: "<< number2 << std::endl;
    
    std::cout<< "number3: "<< number3 << std::endl;

    std::cout<< "sizeof float: " << sizeof(float) << std::endl;
    
    std::cout<< "sizeof double: " << sizeof(double) << std::endl;
    
    std::cout<< "sizeof long double: " << sizeof(long double) << std::endl;


    // number system
    int dec = 15;   // Decimal
    int oct = 017;  // Octal
    int hexD = 0x0f;  // Hexadecimal
    int bin = 0b0111; // Binary
    std::cout <<dec<<std::endl<<oct<<std::endl<<hexD<<std::endl<<dec<<std::endl<<bin<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<add(a, b);
    std::cout<<c;

    return 0;
}
// 3:15
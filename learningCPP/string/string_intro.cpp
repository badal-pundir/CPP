#include <iostream>
using namespace std;

int main(){
    std::string name{"Cloudy"};
    std::string planet{"Earth"};
    std::string message{"Hello there", 5}; // Initialize with part of existing std::string
                                           // starting at index 0, taking 5 chracter
    
    std::string saying_hello{message, 0, 5}; // same  
    cout<< saying_hello<< " "<< planet + " I am " + name<<endl;

    // In std::string we can reassing the variable
    planet = "Mars";
    // but in char pointer our pinter variable will points to whole new
    // memory address and previous pointing address will leaked(memory leaked).
    const char * ptr{"Earth. Where the sky is blue Earth."};
    //memory leaked which storing ^^^^^^^^^^^^^^^^^^^^^^^^^
    ptr = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where";
    cout<< ptr; 
    return 0;
}
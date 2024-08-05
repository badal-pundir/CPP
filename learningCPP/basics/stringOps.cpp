#include <iostream>
#include <string.h>
using namespace std;

int main(){
    const char* const str {"Try not. Do, or do not. There is no try."};
    char target = 'o';
    const char* result = str;
    size_t iterations{};
    
    while ((result = strchr(result, target)) != nullptr){
        cout<<"Found '"<< target
            <<"' starting at '" << result <<"' \n";

            ++result;
            ++iterations;
    }

    cout<< "iterations: "<< iterations <<endl;


}

/*
strcmp, strncmp
strchr, strnchr
strcat, strncat
strcpy, strncpy don't count null cahracter. 
*/
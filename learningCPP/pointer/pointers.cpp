#include<iostream>
using namespace std;
int main() {

    // int* p_number{};
    // double* p_fractional_number{};

    int int_var{10}; 
    int int_var2{20};   
    // Explicitly initialize with nullptr

    int* p_number{&int_var};
    int* p_fractional_number{nullptr};

    p_fractional_number = &int_var2;

    // int *p_number = &int_var;

    cout<< "dataue: "<< *p_number << ", memory address is: "<< p_number<<endl;

    (*p_fractional_number)++;
    cout<< *p_fractional_number<<endl;
    

    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(int*)<<endl;
    cout<<sizeof(double*)<<endl;
    cout<<sizeof(long*)<<endl;
    return 0;
}

/*
Initialize with smart pointers: Smart pointers, 
such as std::unique_ptr, std::shared_ptr, and std::weak_ptr, 
provide safer and more robust memory management compared to raw pointers. 
They automatically handle memory deallocation and ownership, reducing
the risk of memory leaks and dangling pointers.

#include <memory>

std::unique_ptr<int> ptr = std::make_unique<int>(10); // Initialize a unique_ptr with dataue 10


*/


